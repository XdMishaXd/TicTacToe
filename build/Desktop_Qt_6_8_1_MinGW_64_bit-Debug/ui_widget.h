/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLabel *MessageLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonX;
    QPushButton *buttonO;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonAbout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *playButton_1;
    QPushButton *playButton_2;
    QPushButton *playButton_3;
    QPushButton *playButton_4;
    QPushButton *playButton_5;
    QPushButton *playButton_6;
    QPushButton *playButton_7;
    QPushButton *playButton_8;
    QPushButton *playButton_9;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(700, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMaximumSize(QSize(730, 420));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/title_ico.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(Widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/name.png")));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        MessageLabel = new QLabel(Widget);
        MessageLabel->setObjectName("MessageLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(MessageLabel->sizePolicy().hasHeightForWidth());
        MessageLabel->setSizePolicy(sizePolicy1);
        MessageLabel->setMinimumSize(QSize(110, 25));
        MessageLabel->setMaximumSize(QSize(16777215, 16777215));
        MessageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(MessageLabel, 0, Qt::AlignmentFlag::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        buttonX = new QPushButton(Widget);
        buttonX->setObjectName("buttonX");
        buttonX->setMinimumSize(QSize(0, 34));

        horizontalLayout->addWidget(buttonX);

        buttonO = new QPushButton(Widget);
        buttonO->setObjectName("buttonO");
        buttonO->setEnabled(true);
        buttonO->setMinimumSize(QSize(0, 34));

        horizontalLayout->addWidget(buttonO);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonPlay = new QPushButton(Widget);
        pushButtonPlay->setObjectName("pushButtonPlay");
        pushButtonPlay->setMinimumSize(QSize(0, 38));

        verticalLayout->addWidget(pushButtonPlay);

        pushButtonAbout = new QPushButton(Widget);
        pushButtonAbout->setObjectName("pushButtonAbout");
        pushButtonAbout->setMinimumSize(QSize(0, 38));
        pushButtonAbout->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(pushButtonAbout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName("tabWidget");
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(322, 322));
        tabWidget->setMaximumSize(QSize(320, 340));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(5, 5, 5, 5);
        playButton_1 = new QPushButton(tab);
        playButton_1->setObjectName("playButton_1");
        sizePolicy1.setHeightForWidth(playButton_1->sizePolicy().hasHeightForWidth());
        playButton_1->setSizePolicy(sizePolicy1);
        playButton_1->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(playButton_1, 0, 0, 1, 1);

        playButton_2 = new QPushButton(tab);
        playButton_2->setObjectName("playButton_2");
        sizePolicy1.setHeightForWidth(playButton_2->sizePolicy().hasHeightForWidth());
        playButton_2->setSizePolicy(sizePolicy1);
        playButton_2->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(playButton_2, 0, 1, 1, 1);

        playButton_3 = new QPushButton(tab);
        playButton_3->setObjectName("playButton_3");
        sizePolicy1.setHeightForWidth(playButton_3->sizePolicy().hasHeightForWidth());
        playButton_3->setSizePolicy(sizePolicy1);
        playButton_3->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(playButton_3, 0, 2, 1, 1);

        playButton_4 = new QPushButton(tab);
        playButton_4->setObjectName("playButton_4");
        sizePolicy1.setHeightForWidth(playButton_4->sizePolicy().hasHeightForWidth());
        playButton_4->setSizePolicy(sizePolicy1);
        playButton_4->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(playButton_4, 1, 0, 1, 1);

        playButton_5 = new QPushButton(tab);
        playButton_5->setObjectName("playButton_5");
        sizePolicy1.setHeightForWidth(playButton_5->sizePolicy().hasHeightForWidth());
        playButton_5->setSizePolicy(sizePolicy1);
        playButton_5->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(playButton_5, 1, 1, 1, 1);

        playButton_6 = new QPushButton(tab);
        playButton_6->setObjectName("playButton_6");
        sizePolicy1.setHeightForWidth(playButton_6->sizePolicy().hasHeightForWidth());
        playButton_6->setSizePolicy(sizePolicy1);
        playButton_6->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(playButton_6, 1, 2, 1, 1);

        playButton_7 = new QPushButton(tab);
        playButton_7->setObjectName("playButton_7");
        sizePolicy1.setHeightForWidth(playButton_7->sizePolicy().hasHeightForWidth());
        playButton_7->setSizePolicy(sizePolicy1);
        playButton_7->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(playButton_7, 2, 0, 1, 1);

        playButton_8 = new QPushButton(tab);
        playButton_8->setObjectName("playButton_8");
        sizePolicy1.setHeightForWidth(playButton_8->sizePolicy().hasHeightForWidth());
        playButton_8->setSizePolicy(sizePolicy1);
        playButton_8->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(playButton_8, 2, 1, 1, 1);

        playButton_9 = new QPushButton(tab);
        playButton_9->setObjectName("playButton_9");
        sizePolicy1.setHeightForWidth(playButton_9->sizePolicy().hasHeightForWidth());
        playButton_9->setSizePolicy(sizePolicy1);
        playButton_9->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(playButton_9, 2, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270-\320\235\320\276\320\273\320\270\320\272\320\270", nullptr));
        label->setText(QString());
        MessageLabel->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\261\320\265\320\264\320\260!", nullptr));
        buttonX->setText(QString());
        buttonO->setText(QString());
        pushButtonPlay->setText(QCoreApplication::translate("Widget", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        pushButtonAbout->setText(QCoreApplication::translate("Widget", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        playButton_1->setText(QString());
        playButton_2->setText(QString());
        playButton_3->setText(QString());
        playButton_4->setText(QString());
        playButton_5->setText(QString());
        playButton_6->setText(QString());
        playButton_7->setText(QString());
        playButton_8->setText(QString());
        playButton_9->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\320\230\320\263\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\272\320\260 \321\207\321\202\320\276 \321\202\321\203\321\202 \320\275\320\270\321\207\320\265\320\263\320\276 \320\275\320\265\321\202.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
