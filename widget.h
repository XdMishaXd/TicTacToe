#ifndef WIDGET_H
#define WIDGET_H

#include<QWidget>
#include<QPainter>
#include<QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_buttonX_clicked();
    void on_buttonO_clicked();
    void on_pushButtonPlay_clicked();
    void ongameAreaButtonClicked();
    void onComputerSlot();


    void on_pushButtonAbout_clicked();

private:
    Ui::Widget *ui;

    void setInterfaceStyle();
    void changeStyles(int num);
    void configurationTabWidget();
    void addFonts();
    void changeButtonStyle(int row, int colum, QString style);
    void setGameAreaButtonsStyle();
    void configurationGameAreaButtons();
    void start();
    void lockPlayer();
    void computerInGame();
    void checkWinner();
    void endGame();

    char gameArea[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };
    char winner, player = 'X';
    int progress, currentIndex = 0;
    bool gameStart = false, playerLocked = true;
    QTimer *timer;

};

#endif // WIDGET_H