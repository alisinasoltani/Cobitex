/********************************************************************************
** Form generated from reading UI file 'authentication.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATION_H
#define UI_AUTHENTICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_authentication
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *authentication)
    {
        if (authentication->objectName().isEmpty())
            authentication->setObjectName("authentication");
        authentication->resize(1140, 700);
        authentication->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(authentication);
        centralwidget->setObjectName("centralwidget");
        authentication->setCentralWidget(centralwidget);
        menubar = new QMenuBar(authentication);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        authentication->setMenuBar(menubar);
        statusbar = new QStatusBar(authentication);
        statusbar->setObjectName("statusbar");
        authentication->setStatusBar(statusbar);

        retranslateUi(authentication);

        QMetaObject::connectSlotsByName(authentication);
    } // setupUi

    void retranslateUi(QMainWindow *authentication)
    {
        authentication->setWindowTitle(QCoreApplication::translate("authentication", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authentication: public Ui_authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
