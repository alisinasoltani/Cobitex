/********************************************************************************
** Form generated from reading UI file 'buy.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUY_H
#define UI_BUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buy
{
public:
    QWidget *centralwidget;
    QPushButton *donepushbuy;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *buy)
    {
        if (buy->objectName().isEmpty())
            buy->setObjectName("buy");
        buy->resize(1140, 700);
        buy->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(buy);
        centralwidget->setObjectName("centralwidget");
        donepushbuy = new QPushButton(centralwidget);
        donepushbuy->setObjectName("donepushbuy");
        donepushbuy->setGeometry(QRect(450, 460, 251, 91));
        QFont font;
        font.setPointSize(12);
        donepushbuy->setFont(font);
        donepushbuy->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        buy->setCentralWidget(centralwidget);
        menubar = new QMenuBar(buy);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        buy->setMenuBar(menubar);
        statusbar = new QStatusBar(buy);
        statusbar->setObjectName("statusbar");
        buy->setStatusBar(statusbar);

        retranslateUi(buy);

        QMetaObject::connectSlotsByName(buy);
    } // setupUi

    void retranslateUi(QMainWindow *buy)
    {
        buy->setWindowTitle(QCoreApplication::translate("buy", "MainWindow", nullptr));
        donepushbuy->setText(QCoreApplication::translate("buy", "DONE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buy: public Ui_buy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUY_H
