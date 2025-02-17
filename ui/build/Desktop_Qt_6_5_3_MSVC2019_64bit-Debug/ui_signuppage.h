/********************************************************************************
** Form generated from reading UI file 'signuppage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPPAGE_H
#define UI_SIGNUPPAGE_H

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

class Ui_signuppage
{
public:
    QWidget *centralwidget;
    QLabel *userlabelsignuppage;
    QLabel *passlabelsignuppage_2;
    QLineEdit *userlineeditsignuppage;
    QLineEdit *passlineeditsignuppage;
    QLabel *emailaddLABELsignuppage;
    QLineEdit *emailaddLINEEDITsignuppage;
    QPushButton *submitSIGNUPpage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signuppage)
    {
        if (signuppage->objectName().isEmpty())
            signuppage->setObjectName("signuppage");
        signuppage->resize(1140, 700);
        signuppage->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(signuppage);
        centralwidget->setObjectName("centralwidget");
        userlabelsignuppage = new QLabel(centralwidget);
        userlabelsignuppage->setObjectName("userlabelsignuppage");
        userlabelsignuppage->setGeometry(QRect(40, 130, 301, 91));
        QFont font;
        font.setPointSize(14);
        userlabelsignuppage->setFont(font);
        userlabelsignuppage->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        passlabelsignuppage_2 = new QLabel(centralwidget);
        passlabelsignuppage_2->setObjectName("passlabelsignuppage_2");
        passlabelsignuppage_2->setGeometry(QRect(50, 380, 301, 91));
        passlabelsignuppage_2->setFont(font);
        passlabelsignuppage_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        userlineeditsignuppage = new QLineEdit(centralwidget);
        userlineeditsignuppage->setObjectName("userlineeditsignuppage");
        userlineeditsignuppage->setGeometry(QRect(40, 240, 381, 91));
        QFont font1;
        font1.setPointSize(12);
        userlineeditsignuppage->setFont(font1);
        userlineeditsignuppage->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        passlineeditsignuppage = new QLineEdit(centralwidget);
        passlineeditsignuppage->setObjectName("passlineeditsignuppage");
        passlineeditsignuppage->setGeometry(QRect(30, 480, 391, 91));
        passlineeditsignuppage->setFont(font1);
        passlineeditsignuppage->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        emailaddLABELsignuppage = new QLabel(centralwidget);
        emailaddLABELsignuppage->setObjectName("emailaddLABELsignuppage");
        emailaddLABELsignuppage->setGeometry(QRect(600, 130, 301, 91));
        emailaddLABELsignuppage->setFont(font);
        emailaddLABELsignuppage->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        emailaddLINEEDITsignuppage = new QLineEdit(centralwidget);
        emailaddLINEEDITsignuppage->setObjectName("emailaddLINEEDITsignuppage");
        emailaddLINEEDITsignuppage->setGeometry(QRect(590, 240, 381, 91));
        emailaddLINEEDITsignuppage->setFont(font1);
        emailaddLINEEDITsignuppage->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        submitSIGNUPpage = new QPushButton(centralwidget);
        submitSIGNUPpage->setObjectName("submitSIGNUPpage");
        submitSIGNUPpage->setGeometry(QRect(830, 580, 251, 61));
        submitSIGNUPpage->setFont(font1);
        submitSIGNUPpage->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        signuppage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signuppage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        signuppage->setMenuBar(menubar);
        statusbar = new QStatusBar(signuppage);
        statusbar->setObjectName("statusbar");
        signuppage->setStatusBar(statusbar);

        retranslateUi(signuppage);

        QMetaObject::connectSlotsByName(signuppage);
    } // setupUi

    void retranslateUi(QMainWindow *signuppage)
    {
        signuppage->setWindowTitle(QCoreApplication::translate("signuppage", "MainWindow", nullptr));
        userlabelsignuppage->setText(QCoreApplication::translate("signuppage", "         username :", nullptr));
        passlabelsignuppage_2->setText(QCoreApplication::translate("signuppage", "         password :", nullptr));
        emailaddLABELsignuppage->setText(QCoreApplication::translate("signuppage", "email addresss", nullptr));
        submitSIGNUPpage->setText(QCoreApplication::translate("signuppage", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signuppage: public Ui_signuppage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
