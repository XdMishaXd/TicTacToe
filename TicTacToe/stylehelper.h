#ifndef STYLEHELPER_H
#define STYLEHELPER_H

#include<QString>

class styleHelper
{
public:
    static QString getStartButtonsStyle();
    static QString getMainWigetStyle();
    static QString getXButtonStyle();
    static QString getOButtonStyle();
    static QString getXButtonActiveStyle();
    static QString getOButtonActiveStyle();
    static QString getTabWidgetStyle();
    static QString getAboutTextStyle();

    static QString getBlankButtonStyle();

    static QString getCrossPlayButtonStyle();
    static QString getCrossVictoryStyle();
    static QString getCrossLossStyle();

    static QString getNullPlayButtonStyle();
    static QString getNullVictoryStyle();
    static QString getNullLossStyle();

    static QString getNormalMessageStyle();
    static QString getVictoryMessageStyle();
    static QString getLossMessageStyle();
};

#endif // STYLEHELPER_H
