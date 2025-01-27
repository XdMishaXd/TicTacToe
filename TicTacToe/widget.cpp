#include "widget.h"
#include "ui_widget.h"
#include "stylehelper.h"

#include<QTabBar>
#include<QStyleOption>
#include<QFontDatabase>
#include<time.h>

Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    setInterfaceStyle();
    configurationTabWidget();
    addFonts();
    configurationGameAreaButtons();
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::onComputerSlot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}

void Widget::setInterfaceStyle()
{
    this->setStyleSheet(styleHelper::getMainWigetStyle());

    ui->pushButtonAbout->setStyleSheet(styleHelper::getStartButtonsStyle());
    ui->pushButtonPlay->setStyleSheet(styleHelper::getStartButtonsStyle());

    ui->buttonX->setStyleSheet(styleHelper::getXButtonActiveStyle());
    ui->buttonO->setStyleSheet(styleHelper::getOButtonStyle());

    ui->tabWidget->setStyleSheet(styleHelper::getTabWidgetStyle());

    ui->MessageLabel->setText("");
    ui->MessageLabel->setStyleSheet(styleHelper::getNormalMessageStyle());
    ui->label_3->setStyleSheet(styleHelper::getAboutTextStyle());

    setGameAreaButtonsStyle();
}

void Widget::changeStyles(int num)
{
    if(num == 1) {
        ui->buttonX->setStyleSheet(styleHelper::getXButtonActiveStyle());
        ui->buttonO->setStyleSheet(styleHelper::getOButtonStyle());
    } else {
        ui->buttonO->setStyleSheet(styleHelper::getOButtonActiveStyle());
        ui->buttonX->setStyleSheet(styleHelper::getXButtonStyle());
    }
}

void Widget::on_buttonX_clicked()
{
    this->changeStyles(1);
    player = 'X';
}

void Widget::on_buttonO_clicked()
{
    this->changeStyles(0);
    player = '0';
}

void Widget::configurationTabWidget()
{
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setMaximumHeight(320);
    ui->tabWidget->setCurrentIndex(0);
}

void Widget::addFonts()
{
    QFontDatabase::addApplicationFont(":/fonts/Roboto-Medium.ttf");
    QFontDatabase::addApplicationFont(":/fonts/Roboto-MediumItalic.ttf");
}

void Widget::changeButtonStyle(int row, int column, QString style)
{
    QGridLayout *grid = qobject_cast<QGridLayout*>(ui->tab->layout());
    QPushButton *btn = qobject_cast<QPushButton*>(grid->itemAtPosition(row, column)->widget());

    btn->setStyleSheet(style);
}

void Widget::setGameAreaButtonsStyle()
{
    QString style = styleHelper::getBlankButtonStyle();

    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 3; column++)
        {
            changeButtonStyle(row, column, style);
        }
    }
}

void Widget::configurationGameAreaButtons()
{
    QGridLayout *grid = qobject_cast<QGridLayout*>(ui->tab->layout());

    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            QPushButton *btn = qobject_cast<QPushButton*>(grid->itemAtPosition(r, c)->widget());

            btn->setProperty("row", r);
            btn->setProperty("column", c);
            connect(btn, &QPushButton::clicked, this, &Widget::ongameAreaButtonClicked);
        }
    }
}

void Widget::start()
{
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            gameArea[r][c] = '-';
        }
    }

    progress = 0;
    gameStart = true;
    if(player != 'X')
    {
        computerInGame();
    }
}

void Widget::lockPlayer()
{
    player == 'X' ? playerLocked = false : playerLocked = true;
}

void Widget::on_pushButtonPlay_clicked()
{
    if(gameStart)
    {
        setGameAreaButtonsStyle();

        ui->pushButtonPlay->setText("Играть");

        ui->pushButtonPlay->setStyleSheet(styleHelper::getStartButtonsStyle());

        ui->pushButtonAbout->setDisabled(false);
        ui->buttonX->setDisabled(false);
        ui->buttonO->setDisabled(false);

        gameStart = false;
        playerLocked = true;

        ui->MessageLabel->setText("Вы проиграли");
        ui->MessageLabel->setStyleSheet(styleHelper::getLossMessageStyle());
    }
    else
    {
        ui->MessageLabel->setText("Игра началась");
        ui->MessageLabel->setStyleSheet(styleHelper::getNormalMessageStyle());

        setGameAreaButtonsStyle();
        start();
        lockPlayer();
        ui->pushButtonPlay->setText("Сдаюсь");
        ui->pushButtonAbout->setDisabled(true);
        ui->buttonX->setDisabled(true);
        ui->buttonO->setDisabled(true);
    }
}

void Widget::ongameAreaButtonClicked()
{
    if(!playerLocked)
    {
        progress++;
        QPushButton *btn = qobject_cast<QPushButton*>(sender());

        int row = btn->property("row").toInt();
        int column = btn->property("column").toInt();
        if(gameArea[row][column] == '-')
        {
            QString style;
            if(player == 'X')
            {
                style = styleHelper::getCrossPlayButtonStyle();
                gameArea[row][column] = 'X';
            }
            else
            {
                style = styleHelper::getNullPlayButtonStyle();
                gameArea[row][column] = '0';
            }
            changeButtonStyle(row, column, style);

            playerLocked = true;
            checkWinner();
            if(gameStart)
            {
                computerInGame();
            }
        }
    }
}

void Widget::onComputerSlot()
{
    char comp;
    QString style;
    const int bestMoves[9][2] = { {1, 1}, {0, 0}, {0, 1}, {2, 0}, {2, 2}, {0, 1}, {1, 0}, {1, 2}, {2, 1} };

    if(player == 'X')
    {
        comp = '0';
        style = styleHelper::getNullPlayButtonStyle();
    }
    else
    {
        comp = 'X';
        style = styleHelper::getCrossPlayButtonStyle();
    }

    timer->stop();

    for(int i = 0; i < 9; i++)
    {
        int r = bestMoves[i][0];
        int c = bestMoves[i][1];

        if((gameArea[r][c] == '-') && (gameStart == true))
        {
            gameArea[r][c] = comp;
            changeButtonStyle(r, c, style);
            progress++;
            playerLocked = false;
            ui->MessageLabel->setText("Ваш ход");
            break;
        }
    }
    checkWinner();
}


void Widget::computerInGame()
{
    srand(time(0));
    int index = rand() % 4;

    QStringList list = { "Мой ход", "Так так так...", "Хм... сложно...", "Дайте подумать..." };
    ui->MessageLabel->setText(list.at(index));


    timer->start(1500);
}

void Widget::checkWinner()
{
    winner = '-';
    char symbols[2] = { 'X', '0' };
    QString style;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(((gameArea[j][0] == symbols[i]) && (gameArea[j][1] == symbols[i]) && (gameArea[j][2] == symbols[i]))
            || ((gameArea[0][j] == symbols[i]) && (gameArea[1][j] == symbols[i]) && (gameArea[2][j] == symbols[i])))
            {
                winner = symbols[i];
                gameStart = false;
                endGame();

                if(winner == player)
                {
                    if(player == 'X')
                    {
                        style = styleHelper::getCrossVictoryStyle();
                    }
                    else
                    {
                       style = styleHelper::getNullVictoryStyle();
                    }
                }
                else
                {
                    if(player == 'X')
                    {
                        style = styleHelper::getNullLossStyle();
                    }
                    else
                    {
                        style = styleHelper::getCrossLossStyle();
                    }
                }

                if((gameArea[j][0] == symbols[i]) && (gameArea[j][1] == symbols[i]) && (gameArea[j][2] == symbols[i]))
                {
                    changeButtonStyle(j, 0, style);
                    changeButtonStyle(j, 1, style);
                    changeButtonStyle(j, 2, style);
                }
                else
                {
                    changeButtonStyle(0, j, style);
                    changeButtonStyle(1, j, style);
                    changeButtonStyle(2, j, style);
                }

                return;
            }
        }

        if(((gameArea[0][0] == symbols[i]) && (gameArea[1][1] == symbols[i]) && (gameArea[2][2] == symbols[i]))
        || ((gameArea[0][2] == symbols[i]) && (gameArea[1][1] == symbols[i]) && (gameArea[2][0] == symbols[i])))
        {
            winner = symbols[i];
            gameStart = false;
            endGame();

            if(winner == player)
            {
                if(player == 'X')
                {
                    style = styleHelper::getCrossVictoryStyle();
                }
                else
                {
                    style = styleHelper::getNullVictoryStyle();
                }
            }
            else
            {
                if(player == 'X')
                {
                    style = styleHelper::getCrossLossStyle();
                }
                else
                {
                    style = styleHelper::getNullLossStyle();
                }
            }

            if((gameArea[0][0] == symbols[i]) && (gameArea[1][1] == symbols[i]) && (gameArea[2][2] == symbols[i]))
            {
                changeButtonStyle(0, 0, style);
                changeButtonStyle(1, 1, style);
                changeButtonStyle(2, 2, style);
            }
            else
            {
                changeButtonStyle(0, 2, style);
                changeButtonStyle(1, 1, style);
                changeButtonStyle(2, 0, style);
            }

            return;
        }
    }

    if(progress == 9)
    {
        gameStart = false;
        endGame();
        return;
    }
}

void Widget::endGame()
{
    ui->pushButtonPlay->setText("Играть");
    playerLocked = true;
    ui->buttonX->setDisabled(false);
    ui->buttonO->setDisabled(false);
    ui->pushButtonAbout->setDisabled(false);

    if(winner == player)
    {
        ui->MessageLabel->setText("Победа!");
        ui->MessageLabel->setStyleSheet(styleHelper::getVictoryMessageStyle());
    }
    else if(winner == '-')
    {
        ui->MessageLabel->setText("Ничья!");
        ui->MessageLabel->setStyleSheet(styleHelper::getNormalMessageStyle());
    }
    else
    {
        ui->MessageLabel->setText("Вы проиграли!");
        ui->MessageLabel->setStyleSheet(styleHelper::getLossMessageStyle());
    }
}

void Widget::on_pushButtonAbout_clicked()
{
    if(currentIndex == 0)
    {
        ui->tabWidget->setCurrentIndex(1);
        ui->pushButtonAbout->setText("Обратно");
        ui->pushButtonPlay->setDisabled(true);
        currentIndex = 1;
    }
    else
    {
        ui->tabWidget->setCurrentIndex(0);
        ui->pushButtonAbout->setText("Об игре");
        ui->pushButtonPlay->setDisabled(false);
        currentIndex = 0;
    }
}

