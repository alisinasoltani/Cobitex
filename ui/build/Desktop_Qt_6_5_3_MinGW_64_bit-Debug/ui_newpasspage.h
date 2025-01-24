/********************************************************************************
** Form generated from reading UI file 'newpasspage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPASSPAGE_H
#define UI_NEWPASSPAGE_H

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

class Ui_newpasspage
{
public:
    QWidget *centralwidget;
    QLabel *newpasslabelFPP;
    QLineEdit *newpasslineeditFPP;
    QPushButton *submitloginpage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *newpasspage)
    {
        if (newpasspage->objectName().isEmpty())
            newpasspage->setObjectName("newpasspage");
        newpasspage->resize(1140, 700);
        newpasspage->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(newpasspage);
        centralwidget->setObjectName("centralwidget");
        newpasslabelFPP = new QLabel(centralwidget);
        newpasslabelFPP->setObjectName("newpasslabelFPP");
        newpasslabelFPP->setGeometry(QRect(370, 150, 331, 91));
        QFont font;
        font.setPointSize(14);
        newpasslabelFPP->setFont(font);
        newpasslabelFPP->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        newpasslineeditFPP = new QLineEdit(centralwidget);
        newpasslineeditFPP->setObjectName("newpasslineeditFPP");
        newpasslineeditFPP->setGeometry(QRect(300, 270, 601, 91));
        QFont font1;
        font1.setPointSize(12);
        newpasslineeditFPP->setFont(font1);
        newpasslineeditFPP->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        submitloginpage = new QPushButton(centralwidget);
        submitloginpage->setObjectName("submitloginpage");
        submitloginpage->setGeometry(QRect(400, 400, 341, 101));
        submitloginpage->setFont(font1);
        submitloginpage->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        newpasspage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(newpasspage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        newpasspage->setMenuBar(menubar);
        statusbar = new QStatusBar(newpasspage);
        statusbar->setObjectName("statusbar");
        newpasspage->setStatusBar(statusbar);

        retranslateUi(newpasspage);

        QMetaObject::connectSlotsByName(newpasspage);
    } // setupUi

    void retranslateUi(QMainWindow *newpasspage)
    {
        newpasspage->setWindowTitle(QCoreApplication::translate("newpasspage", "MainWindow", nullptr));
        newpasslabelFPP->setText(QCoreApplication::translate("newpasspage", "                     new password :", nullptr));
        submitloginpage->setText(QCoreApplication::translate("newpasspage", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newpasspage: public Ui_newpasspage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPASSPAGE_H
