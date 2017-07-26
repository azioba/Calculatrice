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
    QPushButton *ButtonRacineCarre;
    QPushButton *ButtonModulo;
    QLabel *label;
    QPushButton *ButtonLogNep;
    QPushButton *ButtonCarre;
    QPushButton *ButtonSin;
    QPushButton *ButtonCos;
    QPushButton *ButtonTan;
    QPushButton *ButtonFacto;
    QPushButton *ButtonExpo;
    QPushButton *ButtonLogDec;

    void setupUi(QMainWindow *CalculatriceClass)
    {
        if (CalculatriceClass->objectName().isEmpty())
            CalculatriceClass->setObjectName(QStringLiteral("CalculatriceClass"));
        CalculatriceClass->resize(593, 390);
        CalculatriceClass->setStyleSheet(QLatin1String("\n"
"QPushButton\n"
"{\n"
"	border-style: solid;\n"
"	background-color:#3d3d3d,\n"
"	rgb(255, 170, 255)\n"
"	color:#fff;\n"
"	border-radies:7px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"color:#ccc;\n"
"	background-color: qlineargradient(spread:pad, x1:0.517, y1:0, x2:0.517, y2:1, stop:0 rgba(45, 45, 45, 255), stop:0.505682 rgba(45, 45, 45, 255), stop:1 rgba(29, 29, 29, 255));\n"
"	border-color:#2d89ef;\n"
"border-width:2px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"background-color: qlineargradient(spread:pad, x1:0.517, y1:0, x2:0.517, y2:1, stop:0 rgba(29, 29, 29, 255), stop:0.505682 rgba(45, 45, 45, 255), stop:1 rgba(29, 29, 29, 255));\n"
"}\n"
""));
        actionExit = new QAction(CalculatriceClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(CalculatriceClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setEnabled(true);
        Button1->setGeometry(QRect(140, 110, 61, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        Button1->setFont(font);
        Button1->setMouseTracking(false);
        Button1->setFocusPolicy(Qt::StrongFocus);
        Button1->setAutoFillBackground(false);
        Button1->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        Button1->setFlat(false);
        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        Button4->setGeometry(QRect(140, 180, 61, 61));
        Button4->setFont(font);
        Button4->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        Button7->setGeometry(QRect(140, 250, 61, 61));
        Button7->setFont(font);
        Button7->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonReset = new QPushButton(centralWidget);
        ButtonReset->setObjectName(QStringLiteral("ButtonReset"));
        ButtonReset->setGeometry(QRect(140, 320, 61, 61));
        QFont font1;
        font1.setPointSize(20);
        ButtonReset->setFont(font1);
        ButtonReset->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        Button0->setGeometry(QRect(210, 320, 61, 61));
        Button0->setFont(font);
        Button0->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonPoint = new QPushButton(centralWidget);
        ButtonPoint->setObjectName(QStringLiteral("ButtonPoint"));
        ButtonPoint->setGeometry(QRect(280, 320, 61, 61));
        ButtonPoint->setFont(font);
        ButtonPoint->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonPoint->setFlat(false);
        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        Button8->setGeometry(QRect(210, 250, 61, 61));
        Button8->setFont(font);
        Button8->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        Button5->setGeometry(QRect(210, 180, 61, 61));
        Button5->setFont(font);
        Button5->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(210, 110, 61, 61));
        Button2->setFont(font);
        Button2->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        Button9->setGeometry(QRect(280, 250, 61, 61));
        Button9->setFont(font);
        Button9->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        Button6->setGeometry(QRect(280, 180, 61, 61));
        Button6->setFont(font);
        Button6->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        Button3->setGeometry(QRect(280, 110, 61, 61));
        Button3->setFont(font);
        Button3->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:rgb(249, 249, 249);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonPlus = new QPushButton(centralWidget);
        ButtonPlus->setObjectName(QStringLiteral("ButtonPlus"));
        ButtonPlus->setGeometry(QRect(350, 110, 111, 61));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(229, 229, 229, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        ButtonPlus->setPalette(palette);
        ButtonPlus->setFont(font1);
        ButtonPlus->setAutoFillBackground(false);
        ButtonPlus->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonPlus->setAutoDefault(false);
        ButtonPlus->setFlat(false);
        ButtonMultip = new QPushButton(centralWidget);
        ButtonMultip->setObjectName(QStringLiteral("ButtonMultip"));
        ButtonMultip->setGeometry(QRect(350, 180, 111, 61));
        ButtonMultip->setFont(font1);
        ButtonMultip->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonMoins = new QPushButton(centralWidget);
        ButtonMoins->setObjectName(QStringLiteral("ButtonMoins"));
        ButtonMoins->setGeometry(QRect(350, 250, 111, 61));
        ButtonMoins->setFont(font1);
        ButtonMoins->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonDivis = new QPushButton(centralWidget);
        ButtonDivis->setObjectName(QStringLiteral("ButtonDivis"));
        ButtonDivis->setGeometry(QRect(350, 320, 111, 61));
        ButtonDivis->setFont(font1);
        ButtonDivis->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}\n"
""));
        ButtonEnter = new QPushButton(centralWidget);
        ButtonEnter->setObjectName(QStringLiteral("ButtonEnter"));
        ButtonEnter->setGeometry(QRect(470, 320, 111, 61));
        ButtonEnter->setFont(font);
        ButtonEnter->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonPlusMinus = new QPushButton(centralWidget);
        ButtonPlusMinus->setObjectName(QStringLiteral("ButtonPlusMinus"));
        ButtonPlusMinus->setGeometry(QRect(470, 180, 111, 61));
        ButtonPlusMinus->setFont(font1);
        ButtonPlusMinus->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonRacineCarre = new QPushButton(centralWidget);
        ButtonRacineCarre->setObjectName(QStringLiteral("ButtonRacineCarre"));
        ButtonRacineCarre->setGeometry(QRect(470, 110, 111, 61));
        ButtonRacineCarre->setFont(font1);
        ButtonRacineCarre->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonModulo = new QPushButton(centralWidget);
        ButtonModulo->setObjectName(QStringLiteral("ButtonModulo"));
        ButtonModulo->setGeometry(QRect(470, 250, 111, 61));
        ButtonModulo->setFont(font1);
        ButtonModulo->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 581, 91));
        QFont font2;
        font2.setPointSize(48);
        label->setFont(font2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ButtonLogNep = new QPushButton(centralWidget);
        ButtonLogNep->setObjectName(QStringLiteral("ButtonLogNep"));
        ButtonLogNep->setGeometry(QRect(0, 110, 61, 61));
        ButtonLogNep->setFont(font1);
        ButtonLogNep->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonCarre = new QPushButton(centralWidget);
        ButtonCarre->setObjectName(QStringLiteral("ButtonCarre"));
        ButtonCarre->setGeometry(QRect(70, 110, 61, 61));
        ButtonCarre->setFont(font1);
        ButtonCarre->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonSin = new QPushButton(centralWidget);
        ButtonSin->setObjectName(QStringLiteral("ButtonSin"));
        ButtonSin->setGeometry(QRect(70, 180, 61, 61));
        ButtonSin->setFont(font1);
        ButtonSin->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonCos = new QPushButton(centralWidget);
        ButtonCos->setObjectName(QStringLiteral("ButtonCos"));
        ButtonCos->setGeometry(QRect(70, 250, 61, 61));
        ButtonCos->setFont(font1);
        ButtonCos->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonTan = new QPushButton(centralWidget);
        ButtonTan->setObjectName(QStringLiteral("ButtonTan"));
        ButtonTan->setGeometry(QRect(70, 320, 61, 61));
        ButtonTan->setFont(font1);
        ButtonTan->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonFacto = new QPushButton(centralWidget);
        ButtonFacto->setObjectName(QStringLiteral("ButtonFacto"));
        ButtonFacto->setGeometry(QRect(0, 320, 61, 61));
        ButtonFacto->setFont(font1);
        ButtonFacto->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonExpo = new QPushButton(centralWidget);
        ButtonExpo->setObjectName(QStringLiteral("ButtonExpo"));
        ButtonExpo->setGeometry(QRect(0, 250, 61, 61));
        ButtonExpo->setFont(font1);
        ButtonExpo->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        ButtonLogDec = new QPushButton(centralWidget);
        ButtonLogDec->setObjectName(QStringLiteral("ButtonLogDec"));
        ButtonLogDec->setGeometry(QRect(0, 180, 61, 61));
        ButtonLogDec->setFont(font1);
        ButtonLogDec->setStyleSheet(QLatin1String("QPushButton{\n"
"	border-color: rgb(0, 0, 0);\n"
"border-style:solid;\n"
"\n"
"background-color:#e5e5e5;\n"
"color:rgb(0, 0, 0);\n"
"border-radius:7px;\n"
"}"));
        CalculatriceClass->setCentralWidget(centralWidget);
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
        ButtonRacineCarre->raise();
        ButtonModulo->raise();
        label->raise();
        ButtonPlus->raise();
        ButtonLogNep->raise();
        ButtonCarre->raise();
        ButtonSin->raise();
        ButtonCos->raise();
        ButtonTan->raise();
        ButtonFacto->raise();
        ButtonExpo->raise();
        ButtonLogDec->raise();
        Button1->raise();

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
        ButtonRacineCarre->setText(QApplication::translate("CalculatriceClass", "Sqrt", Q_NULLPTR));
        ButtonModulo->setText(QApplication::translate("CalculatriceClass", "%", Q_NULLPTR));
        label->setText(QApplication::translate("CalculatriceClass", "<html><head/><body><p>0</p></body></html>", Q_NULLPTR));
        ButtonLogNep->setText(QApplication::translate("CalculatriceClass", "ln", Q_NULLPTR));
        ButtonCarre->setText(QApplication::translate("CalculatriceClass", "x\302\262", Q_NULLPTR));
        ButtonSin->setText(QApplication::translate("CalculatriceClass", "sin", Q_NULLPTR));
        ButtonCos->setText(QApplication::translate("CalculatriceClass", "cos", Q_NULLPTR));
        ButtonTan->setText(QApplication::translate("CalculatriceClass", "tan", Q_NULLPTR));
        ButtonFacto->setText(QApplication::translate("CalculatriceClass", "n!", Q_NULLPTR));
        ButtonExpo->setText(QApplication::translate("CalculatriceClass", "e", Q_NULLPTR));
        ButtonLogDec->setText(QApplication::translate("CalculatriceClass", "log", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculatriceClass: public Ui_CalculatriceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
