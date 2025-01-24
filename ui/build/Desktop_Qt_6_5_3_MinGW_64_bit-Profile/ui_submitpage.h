/********************************************************************************
** Form generated from reading UI file 'submitpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMITPAGE_H
#define UI_SUBMITPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_submitpage
{
public:
    QWidget *centralwidget;
    QPushButton *btcsubmit;
    QPushButton *ethsubmit;
    QPushButton *usdtsubmit;
    QLabel *submitlabel;
    QPushButton *profilepushSUBMIT;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *submitpage)
    {
        if (submitpage->objectName().isEmpty())
            submitpage->setObjectName("submitpage");
        submitpage->resize(1140, 700);
        submitpage->setStyleSheet(QString::fromUtf8("color:rgb(241, 241, 241);\n"
"background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(submitpage);
        centralwidget->setObjectName("centralwidget");
        btcsubmit = new QPushButton(centralwidget);
        btcsubmit->setObjectName("btcsubmit");
        btcsubmit->setGeometry(QRect(370, 240, 451, 61));
        QFont font;
        font.setPointSize(14);
        btcsubmit->setFont(font);
        btcsubmit->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        ethsubmit = new QPushButton(centralwidget);
        ethsubmit->setObjectName("ethsubmit");
        ethsubmit->setGeometry(QRect(370, 360, 451, 61));
        ethsubmit->setFont(font);
        ethsubmit->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        usdtsubmit = new QPushButton(centralwidget);
        usdtsubmit->setObjectName("usdtsubmit");
        usdtsubmit->setGeometry(QRect(370, 470, 451, 61));
        usdtsubmit->setFont(font);
        usdtsubmit->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        submitlabel = new QLabel(centralwidget);
        submitlabel->setObjectName("submitlabel");
        submitlabel->setGeometry(QRect(260, 80, 681, 121));
        QFont font1;
        font1.setPointSize(16);
        submitlabel->setFont(font1);
        profilepushSUBMIT = new QPushButton(centralwidget);
        profilepushSUBMIT->setObjectName("profilepushSUBMIT");
        profilepushSUBMIT->setGeometry(QRect(912, 40, 161, 91));
        QFont font2;
        font2.setPointSize(12);
        profilepushSUBMIT->setFont(font2);
        submitpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(submitpage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        submitpage->setMenuBar(menubar);
        statusbar = new QStatusBar(submitpage);
        statusbar->setObjectName("statusbar");
        submitpage->setStatusBar(statusbar);

        retranslateUi(submitpage);

        QMetaObject::connectSlotsByName(submitpage);
    } // setupUi

    void retranslateUi(QMainWindow *submitpage)
    {
        submitpage->setWindowTitle(QCoreApplication::translate("submitpage", "MainWindow", nullptr));
        btcsubmit->setText(QCoreApplication::translate("submitpage", "BTC", nullptr));
        ethsubmit->setText(QCoreApplication::translate("submitpage", "ETH", nullptr));
        usdtsubmit->setText(QCoreApplication::translate("submitpage", "USDT", nullptr));
        submitlabel->setText(QCoreApplication::translate("submitpage", "                         chose yeki az in ramz arza     ", nullptr));
        profilepushSUBMIT->setText(QCoreApplication::translate("submitpage", "PROFILE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class submitpage: public Ui_submitpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMITPAGE_H
