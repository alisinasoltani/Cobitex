/********************************************************************************
** Form generated from reading UI file 'forgotpasspage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSPAGE_H
#define UI_FORGOTPASSPAGE_H

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

class Ui_forgotpasspage
{
public:
    QWidget *centralwidget;
    QLabel *emailalabelFPP;
    QLineEdit *emailaddlineeditFPP;
    QPushButton *submitFPP;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *forgotpasspage)
    {
        if (forgotpasspage->objectName().isEmpty())
            forgotpasspage->setObjectName("forgotpasspage");
        forgotpasspage->resize(1140, 700);
        forgotpasspage->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(forgotpasspage);
        centralwidget->setObjectName("centralwidget");
        emailalabelFPP = new QLabel(centralwidget);
        emailalabelFPP->setObjectName("emailalabelFPP");
        emailalabelFPP->setGeometry(QRect(390, 130, 301, 91));
        QFont font;
        font.setPointSize(14);
        emailalabelFPP->setFont(font);
        emailalabelFPP->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        emailaddlineeditFPP = new QLineEdit(centralwidget);
        emailaddlineeditFPP->setObjectName("emailaddlineeditFPP");
        emailaddlineeditFPP->setGeometry(QRect(150, 230, 711, 91));
        QFont font1;
        font1.setPointSize(12);
        emailaddlineeditFPP->setFont(font1);
        emailaddlineeditFPP->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        submitFPP = new QPushButton(centralwidget);
        submitFPP->setObjectName("submitFPP");
        submitFPP->setGeometry(QRect(430, 560, 251, 61));
        submitFPP->setFont(font1);
        submitFPP->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        forgotpasspage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(forgotpasspage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        forgotpasspage->setMenuBar(menubar);
        statusbar = new QStatusBar(forgotpasspage);
        statusbar->setObjectName("statusbar");
        forgotpasspage->setStatusBar(statusbar);

        retranslateUi(forgotpasspage);

        QMetaObject::connectSlotsByName(forgotpasspage);
    } // setupUi

    void retranslateUi(QMainWindow *forgotpasspage)
    {
        forgotpasspage->setWindowTitle(QCoreApplication::translate("forgotpasspage", "MainWindow", nullptr));
        emailalabelFPP->setText(QCoreApplication::translate("forgotpasspage", "email address :", nullptr));
        submitFPP->setText(QCoreApplication::translate("forgotpasspage", "okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgotpasspage: public Ui_forgotpasspage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSPAGE_H
