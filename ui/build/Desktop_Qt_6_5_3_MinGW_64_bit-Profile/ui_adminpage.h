/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminpage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *darkhast1;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminpage)
    {
        if (adminpage->objectName().isEmpty())
            adminpage->setObjectName("adminpage");
        adminpage->resize(1140, 700);
        QFont font;
        font.setPointSize(14);
        adminpage->setFont(font);
        adminpage->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(adminpage);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 50, 151, 71));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);\n"
"color:rgb(238, 238, 238);\n"
"border-radius: 15px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(730, 50, 151, 71));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);\n"
"color:rgb(238, 238, 238);\n"
"border-radius: 15px;"));
        darkhast1 = new QLineEdit(centralwidget);
        darkhast1->setObjectName("darkhast1");
        darkhast1->setGeometry(QRect(650, 150, 331, 71));
        darkhast1->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
"color:rgb(20, 20, 20);\n"
"border-radius:15px;"));
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(150, 160, 331, 71));
        username->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
"color:rgb(20, 20, 20);\n"
"border-radius:15px;"));
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(150, 270, 331, 71));
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
"color:rgb(20, 20, 20);\n"
"border-radius:15px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 170, 101, 51));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);\n"
"color:rgb(238, 238, 238);\n"
"border-radius: 15px;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 280, 101, 51));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);\n"
"color:rgb(238, 238, 238);\n"
"border-radius: 15px;"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(1010, 180, 111, 26));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(680, 270, 211, 71));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(247, 247, 247);\n"
"background-color: rgb(27, 27, 27);"));
        adminpage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminpage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        adminpage->setMenuBar(menubar);
        statusbar = new QStatusBar(adminpage);
        statusbar->setObjectName("statusbar");
        adminpage->setStatusBar(statusbar);

        retranslateUi(adminpage);

        QMetaObject::connectSlotsByName(adminpage);
    } // setupUi

    void retranslateUi(QMainWindow *adminpage)
    {
        adminpage->setWindowTitle(QCoreApplication::translate("adminpage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("adminpage", "           PROFILE :", nullptr));
        label_2->setText(QCoreApplication::translate("adminpage", "           requests", nullptr));
        label_3->setText(QCoreApplication::translate("adminpage", "  username", nullptr));
        label_4->setText(QCoreApplication::translate("adminpage", "  password", nullptr));
        checkBox->setText(QCoreApplication::translate("adminpage", "submit requeset1", nullptr));
        pushButton->setText(QCoreApplication::translate("adminpage", "done :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminpage: public Ui_adminpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
