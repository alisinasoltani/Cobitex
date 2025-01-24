/********************************************************************************
** Form generated from reading UI file 'confirmcodepage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMCODEPAGE_H
#define UI_CONFIRMCODEPAGE_H

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

class Ui_confirmcodepage
{
public:
    QWidget *centralwidget;
    QLabel *confirmcodelabelFPP;
    QLineEdit *codelineeditFPP;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *confirmcodepage)
    {
        if (confirmcodepage->objectName().isEmpty())
            confirmcodepage->setObjectName("confirmcodepage");
        confirmcodepage->resize(1140, 700);
        confirmcodepage->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(confirmcodepage);
        centralwidget->setObjectName("centralwidget");
        confirmcodelabelFPP = new QLabel(centralwidget);
        confirmcodelabelFPP->setObjectName("confirmcodelabelFPP");
        confirmcodelabelFPP->setGeometry(QRect(240, 240, 721, 141));
        QFont font;
        font.setPointSize(14);
        confirmcodelabelFPP->setFont(font);
        confirmcodelabelFPP->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(27, 27, 27);\n"
"color:rgb(236, 236, 236);\n"
"border-radius: 10px;"));
        codelineeditFPP = new QLineEdit(centralwidget);
        codelineeditFPP->setObjectName("codelineeditFPP");
        codelineeditFPP->setGeometry(QRect(270, 390, 641, 91));
        QFont font1;
        font1.setPointSize(12);
        codelineeditFPP->setFont(font1);
        codelineeditFPP->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(16, 16, 16);\n"
"color:rgb(248, 248, 248);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 520, 331, 111));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(104, 104, 104);"));
        confirmcodepage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(confirmcodepage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        confirmcodepage->setMenuBar(menubar);
        statusbar = new QStatusBar(confirmcodepage);
        statusbar->setObjectName("statusbar");
        confirmcodepage->setStatusBar(statusbar);

        retranslateUi(confirmcodepage);

        QMetaObject::connectSlotsByName(confirmcodepage);
    } // setupUi

    void retranslateUi(QMainWindow *confirmcodepage)
    {
        confirmcodepage->setWindowTitle(QCoreApplication::translate("confirmcodepage", "MainWindow", nullptr));
        confirmcodelabelFPP->setText(QCoreApplication::translate("confirmcodepage", "                                            confirmation code :", nullptr));
        pushButton->setText(QCoreApplication::translate("confirmcodepage", "check email code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirmcodepage: public Ui_confirmcodepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMCODEPAGE_H
