#include "stylehelper.h"


QString styleHelper::getStartButtonsStyle()
{
    return "QPushButton{"
           "    color : #fff;"
           "    background: none;"
           "    border: none;"
           "    border-radius:19px;"
           "    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.00568182, y2:0.977, stop:0.0227273 rgba(89, 156, 208, 255), stop:1 rgba(65, 118, 184, 255));"
           "    font-family: 'Roboto Medium';"
           "    font-size: 16px;"
           "}"
           "QPushButton::hover{"
           "    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.00568182, y2:0.977, stop:0.0227273 rgba(99, 166, 218, 255), stop:1 rgba(75, 128, 194, 255));"
           "}"
           "QPushButton::pressed{"
           "    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.00568182, y2:0.977, stop:0.0227273 rgba(89, 156, 208, 255), stop:1 rgba(65, 118, 184, 255));"
           "}";
}

QString styleHelper::getMainWigetStyle()
{
    return "QWidget{"
           "    background-image: url(:/images/bg.png);"
           "}";
}

QString styleHelper::getXButtonStyle()
{
    return "QPushButton{"
           "    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(90, 96, 107, 255), stop:1 rgba(61, 70, 79, 255));"
           "    background-image: url(:/images/cross_small.png);"
           "    background-repeat: no-repeat;"
           "    background-position: center center;"
           "    border: 1px solid #333;"
           "    border-top-left-radius: 5px;"
           "    border-bottom-left-radius: 5px;"
           "}";
}

QString styleHelper::getOButtonStyle()
{
    return "QPushButton{"
           "    background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:1, stop:0 rgba(90, 96, 107, 255), stop:1 rgba(61, 70, 79, 255));"
           "    background-image: url(:/images/zero_small.png);"
           "    background-repeat: no-repeat;"
           "    background-position: center center;"
           "    border: 1px solid #333;"
           "    border-left: none;"
           "    border-top-right-radius: 5px;"
           "    border-bottom-right-radius: 5px;"
           "}";
}

QString styleHelper::getXButtonActiveStyle()
{
    return "QPushButton{"
           "    background-color: #2d313b;"
           "    background-image: url(:/images/cross_small.png);"
           "    background-repeat: no-repeat;"
           "    background-position: center center;"
           "    border: 1px solid #333;"
           "    border-top-left-radius: 5px;"
           "    border-bottom-left-radius: 5px;"
           "}";
}

QString styleHelper::getOButtonActiveStyle()
{
    return "QPushButton{"
           "    background-color: #2d313b;"
           "    background-image: url(:/images/zero_small.png);"
           "    background-repeat: no-repeat;"
           "    background-position: center center;"
           "    border: 1px solid #333;"
           "    border-left: none;"
           "    border-top-right-radius: 5px;"
           "    border-bottom-right-radius: 5px;"
           "}";
}

QString styleHelper::getTabWidgetStyle()
{
    return "QTabWidget"
            "{"
                "border: none;"
            "}"
            "QTabWidget::pane"
            "{"
                "border: 1px solid #222;"
                "border-radius: 3px;"
            "}"
            "QWidget#tab"
            "{"
                "background: rgb(33, 40, 50);"
           "}";
}

QString styleHelper::getAboutTextStyle()
{
    return "QLabel"
           "{"
           "   font-family: 'Roboto Medium';"
           "   font-size: 12px;"
           "   font-style:italic;"
           "   color: #ffffff;"
           "}";
}

QString styleHelper::getBlankButtonStyle()
{
    return "QPushButton"
            "{"
            "   border: none;"
            "   background: #272d39;"
            "}"
            "QPushButton::hover"
            "{"
            "   background: #373d49;"
            "}";
}

QString styleHelper::getCrossPlayButtonStyle()
{
    return "QPushButton"
           "{"
           "   border: none;"
           "   background: #272d39;"
           "   background-image: url(:/images/cross_large.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "}";
}

QString styleHelper::getCrossVictoryStyle()
{
    return "QPushButton"
           "{"
           "   border: none;"
           "   background-color: #234A1F;"
           "   background-image: url(:/images/cross_large.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "}";
}

QString styleHelper::getNullPlayButtonStyle()
{
    return "QPushButton"
           "{"
           "   border: none;"
           "   background: #272d39;"
           "   background-image: url(:/images/zero_large.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "}";
}

QString styleHelper::getNullVictoryStyle()
{
    return "QPushButton"
           "{"
           "   border: none;"
           "   background-color: #234A1F;"
           "   background-image: url(:/images/zero_large.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "}";
}

QString styleHelper::getNullLossStyle()
{
    return "QPushButton"
           "{"
           "   border: none;"
           "   background-color: #961F99;"
           "   background-image: url(:/images/zero_large.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "}";
}

QString styleHelper::getNormalMessageStyle()
{
    return "QLabel"
           "{"
            "   font-family: 'Roboto Medium';"
            "   font-size: 16px;"
            "   background: none;"
            "   color: #ffffff;"
           "}";
}

QString styleHelper::getVictoryMessageStyle()
{
    return "QLabel"
           "{"
           "   font-family: 'Roboto Medium';"
           "   font-size: 12px;"
           "   background: #055902;"
           "   border: 1px solid #1c7c32;"
           "   border-radius: 5px;"
           "   color: #ffffff;"
           "}";
}

QString styleHelper::getLossMessageStyle()
{
    return "QLabel"
           "{"
           "   font-family: 'Roboto Medium';"
           "   font-size: 12px;"
           "   background: #961f99;"
           "   border: 1px solid #e237f5;"
           "   border-radius: 5px;"
           "   color: #ffffff;"
           "}";
}

QString styleHelper::getCrossLossStyle()
{
    return "QPushButton"
           "{"
           "   border: none;"
           "   background-color: #961F99;"
           "   background-image: url(:/images/cross_large.png);"
           "   background-repeat: no-repeat;"
           "   background-position: center center;"
           "}";
}