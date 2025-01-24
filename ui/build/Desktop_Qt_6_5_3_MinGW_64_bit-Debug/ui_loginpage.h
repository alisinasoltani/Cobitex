/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

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

class Ui_loginpage
{
public:
    QWidget *centralwidget;
    QLabel *userlabelloginpage;
    QLineEdit *userlineeditloginpage;
    QLineEdit *passlineeditloginpage;
    QLabel *passlabelloginpage;
    QPushButton *forgotloginpage;
    QPushButton *submitloginpage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginpage)
    {
        if (loginpage->objectName().isEmpty())
            loginpage->setObjectName("loginpage");
        loginpage->resize(1140, 700);
        loginpage->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(loginpage);
        centralwidget->setObjectName("centralwidget");
        userlabelloginpage = new QLabel(centralwidget);
        userlabelloginpage->setObjectName("userlabelloginpage");
        userlabelloginpage->setGeometry(QRect(80, 60, 301, 91));
        QFont font;
        font.setPointSize(14);
        userlabelloginpage->setFont(font);
        userlabelloginpage->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        userlineeditloginpage = new QLineEdit(centralwidget);
        userlineeditloginpage->setObjectName("userlineeditloginpage");
        userlineeditloginpage->setGeometry(QRect(80, 160, 491, 91));
        QFont font1;
        font1.setPointSize(12);
        userlineeditloginpage->setFont(font1);
        userlineeditloginpage->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        passlineeditloginpage = new QLineEdit(centralwidget);
        passlineeditloginpage->setObjectName("passlineeditloginpage");
        passlineeditloginpage->setGeometry(QRect(70, 450, 491, 91));
        passlineeditloginpage->setFont(font1);
        passlineeditloginpage->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        passlabelloginpage = new QLabel(centralwidget);
        passlabelloginpage->setObjectName("passlabelloginpage");
        passlabelloginpage->setGeometry(QRect(70, 340, 301, 91));
        passlabelloginpage->setFont(font);
        passlabelloginpage->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        forgotloginpage = new QPushButton(centralwidget);
        forgotloginpage->setObjectName("forgotloginpage");
        forgotloginpage->setGeometry(QRect(80, 580, 371, 71));
        QFont font2;
        font2.setPointSize(11);
        forgotloginpage->setFont(font2);
        forgotloginpage->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"color:rgb(235, 235, 235);"));
        submitloginpage = new QPushButton(centralwidget);
        submitloginpage->setObjectName("submitloginpage");
        submitloginpage->setGeometry(QRect(692, 510, 341, 101));
        submitloginpage->setFont(font1);
        submitloginpage->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        loginpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginpage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        loginpage->setMenuBar(menubar);
        statusbar = new QStatusBar(loginpage);
        statusbar->setObjectName("statusbar");
        loginpage->setStatusBar(statusbar);

        retranslateUi(loginpage);

        QMetaObject::connectSlotsByName(loginpage);
    } // setupUi

    void retranslateUi(QMainWindow *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "MainWindow", nullptr));
        userlabelloginpage->setText(QCoreApplication::translate("loginpage", "         username :", nullptr));
        passlabelloginpage->setText(QCoreApplication::translate("loginpage", "         password :", nullptr));
        forgotloginpage->setText(QCoreApplication::translate("loginpage", "forgot my password ;(", nullptr));
        submitloginpage->setText(QCoreApplication::translate("loginpage", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginpage: public Ui_loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
