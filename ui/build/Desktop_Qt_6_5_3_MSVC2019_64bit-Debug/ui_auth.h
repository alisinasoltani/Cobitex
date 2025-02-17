/********************************************************************************
** Form generated from reading UI file 'auth.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_H
#define UI_AUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_auth
{
public:
    QWidget *centralwidget;
    QLabel *fnlabelAUTH;
    QLabel *lnlabelAUTH;
    QLabel *emaillabelAUTH;
    QLabel *addresslabelAUTH;
    QLineEdit *fnlineeditAUTH;
    QLineEdit *lnlineeditAUTH;
    QLineEdit *emaillineeditAUTH;
    QLineEdit *addresslineeditAUTH;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *auth)
    {
        if (auth->objectName().isEmpty())
            auth->setObjectName("auth");
        auth->resize(1140, 700);
        auth->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(auth);
        centralwidget->setObjectName("centralwidget");
        fnlabelAUTH = new QLabel(centralwidget);
        fnlabelAUTH->setObjectName("fnlabelAUTH");
        fnlabelAUTH->setGeometry(QRect(60, 20, 301, 91));
        QFont font;
        font.setPointSize(14);
        fnlabelAUTH->setFont(font);
        fnlabelAUTH->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        lnlabelAUTH = new QLabel(centralwidget);
        lnlabelAUTH->setObjectName("lnlabelAUTH");
        lnlabelAUTH->setGeometry(QRect(60, 160, 301, 91));
        lnlabelAUTH->setFont(font);
        lnlabelAUTH->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        emaillabelAUTH = new QLabel(centralwidget);
        emaillabelAUTH->setObjectName("emaillabelAUTH");
        emaillabelAUTH->setGeometry(QRect(50, 290, 301, 91));
        emaillabelAUTH->setFont(font);
        emaillabelAUTH->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        addresslabelAUTH = new QLabel(centralwidget);
        addresslabelAUTH->setObjectName("addresslabelAUTH");
        addresslabelAUTH->setGeometry(QRect(50, 420, 301, 91));
        addresslabelAUTH->setFont(font);
        addresslabelAUTH->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        fnlineeditAUTH = new QLineEdit(centralwidget);
        fnlineeditAUTH->setObjectName("fnlineeditAUTH");
        fnlineeditAUTH->setGeometry(QRect(400, 20, 641, 91));
        QFont font1;
        font1.setPointSize(12);
        fnlineeditAUTH->setFont(font1);
        fnlineeditAUTH->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        lnlineeditAUTH = new QLineEdit(centralwidget);
        lnlineeditAUTH->setObjectName("lnlineeditAUTH");
        lnlineeditAUTH->setGeometry(QRect(400, 160, 641, 91));
        lnlineeditAUTH->setFont(font1);
        lnlineeditAUTH->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        emaillineeditAUTH = new QLineEdit(centralwidget);
        emaillineeditAUTH->setObjectName("emaillineeditAUTH");
        emaillineeditAUTH->setGeometry(QRect(400, 300, 641, 91));
        emaillineeditAUTH->setFont(font1);
        emaillineeditAUTH->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        addresslineeditAUTH = new QLineEdit(centralwidget);
        addresslineeditAUTH->setObjectName("addresslineeditAUTH");
        addresslineeditAUTH->setGeometry(QRect(400, 430, 641, 91));
        addresslineeditAUTH->setFont(font1);
        addresslineeditAUTH->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 540, 321, 81));
        QFont font2;
        font2.setPointSize(16);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(238, 238, 238)"));
        auth->setCentralWidget(centralwidget);
        menubar = new QMenuBar(auth);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        auth->setMenuBar(menubar);
        statusbar = new QStatusBar(auth);
        statusbar->setObjectName("statusbar");
        auth->setStatusBar(statusbar);

        retranslateUi(auth);

        QMetaObject::connectSlotsByName(auth);
    } // setupUi

    void retranslateUi(QMainWindow *auth)
    {
        auth->setWindowTitle(QCoreApplication::translate("auth", "MainWindow", nullptr));
        fnlabelAUTH->setText(QCoreApplication::translate("auth", "first name :", nullptr));
        lnlabelAUTH->setText(QCoreApplication::translate("auth", "lastname  :", nullptr));
        emaillabelAUTH->setText(QCoreApplication::translate("auth", "email :", nullptr));
        addresslabelAUTH->setText(QCoreApplication::translate("auth", "address :", nullptr));
        pushButton->setText(QCoreApplication::translate("auth", "DONE!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class auth: public Ui_auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_H
