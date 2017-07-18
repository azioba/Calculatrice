/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatriceClass
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QPushButton *Button1;
    QPushButton *Button4;
    QPushButton *Button7;
    QPushButton *ButtonReset;
    QPushButton *Button0;
    QPushButton *ButtonPoint;
    QPushButton *Button8;
    QPushButton *Button5;
    QPushButton *Button2;
    QPushButton *Button9;
    QPushButton *Button6;
    QPushButton *Button3;
    QPushButton *ButtonPlus;
    QPushButton *ButtonMultip;
    QPushButton *ButtonMoins;
    QPushButton *ButtonDivis;
    QPushButton *ButtonEnter;
    QPushButton *ButtonPlusMinus;
    QPushButton *pushButton_19;
    QPushButton *ButtonModulo;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatriceClass)
    {
        if (CalculatriceClass->objectName().isEmpty())
            CalculatriceClass->setObjectName(QStringLiteral("CalculatriceClass"));
        CalculatriceClass->resize(645, 588);
        actionExit = new QAction(CalculatriceClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(CalculatriceClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(10, 250, 111, 61));
        QFont font;
        font.setPointSize(20);
        Button1->setFont(font);
        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        Button4->setGeometry(QRect(10, 320, 111, 61));
        Button4->setFont(font);
        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        Button7->setGeometry(QRect(10, 390, 111, 61));
        Button7->setFont(font);
        ButtonReset = new QPushButton(centralWidget);
        ButtonReset->setObjectName(QStringLiteral("ButtonReset"));
        ButtonReset->setGeometry(QRect(10, 460, 111, 61));
        ButtonReset->setFont(font);
        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        Button0->setGeometry(QRect(140, 460, 111, 61));
        Button0->setFont(font);
        ButtonPoint = new QPushButton(centralWidget);
        ButtonPoint->setObjectName(QStringLiteral("ButtonPoint"));
        ButtonPoint->setGeometry(QRect(270, 460, 111, 61));
        ButtonPoint->setFont(font);
        ButtonPoint->setFlat(false);
        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        Button8->setGeometry(QRect(140, 390, 111, 61));
        Button8->setFont(font);
        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        Button5->setGeometry(QRect(140, 320, 111, 61));
        Button5->setFont(font);
        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(140, 250, 111, 61));
        Button2->setFont(font);
        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        Button9->setGeometry(QRect(270, 390, 111, 61));
        Button9->setFont(font);
        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        Button6->setGeometry(QRect(270, 320, 111, 61));
        Button6->setFont(font);
        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        Button3->setGeometry(QRect(270, 250, 111, 61));
        Button3->setFont(font);
        ButtonPlus = new QPushButton(centralWidget);
        ButtonPlus->setObjectName(QStringLiteral("ButtonPlus"));
        ButtonPlus->setGeometry(QRect(400, 250, 111, 61));
        QPalette palette;
        QBrush brush(QColor(255, 170, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        ButtonPlus->setPalette(palette);
        ButtonPlus->setFont(font);
        ButtonPlus->setAutoFillBackground(false);
        ButtonPlus->setAutoDefault(false);
        ButtonPlus->setFlat(false);
        ButtonMultip = new QPushButton(centralWidget);
        ButtonMultip->setObjectName(QStringLiteral("ButtonMultip"));
        ButtonMultip->setGeometry(QRect(400, 320, 111, 61));
        ButtonMultip->setFont(font);
        ButtonMoins = new QPushButton(centralWidget);
        ButtonMoins->setObjectName(QStringLiteral("ButtonMoins"));
        ButtonMoins->setGeometry(QRect(400, 390, 111, 61));
        ButtonMoins->setFont(font);
        ButtonDivis = new QPushButton(centralWidget);
        ButtonDivis->setObjectName(QStringLiteral("ButtonDivis"));
        ButtonDivis->setGeometry(QRect(400, 460, 111, 61));
        ButtonDivis->setFont(font);
        ButtonEnter = new QPushButton(centralWidget);
        ButtonEnter->setObjectName(QStringLiteral("ButtonEnter"));
        ButtonEnter->setGeometry(QRect(530, 460, 111, 61));
        ButtonEnter->setFont(font);
        ButtonPlusMinus = new QPushButton(centralWidget);
        ButtonPlusMinus->setObjectName(QStringLiteral("ButtonPlusMinus"));
        ButtonPlusMinus->setGeometry(QRect(530, 320, 111, 61));
        ButtonPlusMinus->setFont(font);
        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(530, 250, 111, 61));
        pushButton_19->setFont(font);
        ButtonModulo = new QPushButton(centralWidget);
        ButtonModulo->setObjectName(QStringLiteral("ButtonModulo"));
        ButtonModulo->setGeometry(QRect(530, 390, 111, 61));
        ButtonModulo->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 621, 231));
        QFont font1;
        font1.setPointSize(48);
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CalculatriceClass->setCentralWidget(centralWidget);
        Button1->raise();
        Button4->raise();
        Button7->raise();
        ButtonReset->raise();
        Button0->raise();
        ButtonPoint->raise();
        Button8->raise();
        Button5->raise();
        Button2->raise();
        Button9->raise();
        Button6->raise();
        Button3->raise();
        ButtonMultip->raise();
        ButtonMoins->raise();
        ButtonDivis->raise();
        ButtonEnter->raise();
        ButtonPlusMinus->raise();
        pushButton_19->raise();
        ButtonModulo->raise();
        label->raise();
        ButtonPlus->raise();
        mainToolBar = new QToolBar(CalculatriceClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatriceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatriceClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatriceClass->setStatusBar(statusBar);

        retranslateUi(CalculatriceClass);

        ButtonPoint->setDefault(false);
        ButtonPlus->setDefault(false);


        QMetaObject::connectSlotsByName(CalculatriceClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatriceClass)
    {
        CalculatriceClass->setWindowTitle(QApplication::translate("CalculatriceClass", "Calculatrice", Q_NULLPTR));
        actionExit->setText(QApplication::translate("CalculatriceClass", "Exit", Q_NULLPTR));
        Button1->setText(QApplication::translate("CalculatriceClass", "1", Q_NULLPTR));
        Button4->setText(QApplication::translate("CalculatriceClass", "4", Q_NULLPTR));
        Button7->setText(QApplication::translate("CalculatriceClass", "7", Q_NULLPTR));
        ButtonReset->setText(QApplication::translate("CalculatriceClass", "C", Q_NULLPTR));
        Button0->setText(QApplication::translate("CalculatriceClass", "0", Q_NULLPTR));
        ButtonPoint->setText(QApplication::translate("CalculatriceClass", ".", Q_NULLPTR));
        Button8->setText(QApplication::translate("CalculatriceClass", "8", Q_NULLPTR));
        Button5->setText(QApplication::translate("CalculatriceClass", "5", Q_NULLPTR));
        Button2->setText(QApplication::translate("CalculatriceClass", "2", Q_NULLPTR));
        Button9->setText(QApplication::translate("CalculatriceClass", "9", Q_NULLPTR));
        Button6->setText(QApplication::translate("CalculatriceClass", "6", Q_NULLPTR));
        Button3->setText(QApplication::translate("CalculatriceClass", "3", Q_NULLPTR));
        ButtonPlus->setText(QApplication::translate("CalculatriceClass", "+", Q_NULLPTR));
        ButtonMultip->setText(QApplication::translate("CalculatriceClass", "*", Q_NULLPTR));
        ButtonMoins->setText(QApplication::translate("CalculatriceClass", "-", Q_NULLPTR));
        ButtonDivis->setText(QApplication::translate("CalculatriceClass", "/", Q_NULLPTR));
        ButtonEnter->setText(QApplication::translate("CalculatriceClass", "Enter", Q_NULLPTR));
        ButtonPlusMinus->setText(QApplication::translate("CalculatriceClass", "+/-", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("CalculatriceClass", "Sqrt", Q_NULLPTR));
        ButtonModulo->setText(QApplication::translate("CalculatriceClass", "%", Q_NULLPTR));
        label->setText(QApplication::translate("CalculatriceClass", "<html><head/><body><p>0</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculatriceClass: public Ui_CalculatriceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
