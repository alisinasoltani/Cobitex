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

class Ui_auth
{
public:
    QWidget *centralwidget;
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
    } // retranslateUi

};

namespace Ui {
    class auth: public Ui_auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
