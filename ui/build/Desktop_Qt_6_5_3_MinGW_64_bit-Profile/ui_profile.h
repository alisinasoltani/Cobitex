/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QWidget *centralwidget;
    QPushButton *authenicationPROFILE;
    QPushButton *walletPROFILR;
    QPushButton *guidePROFILE;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName("profile");
        profile->resize(1140, 700);
        profile->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(profile);
        centralwidget->setObjectName("centralwidget");
        authenicationPROFILE = new QPushButton(centralwidget);
        authenicationPROFILE->setObjectName("authenicationPROFILE");
        authenicationPROFILE->setGeometry(QRect(80, 240, 161, 91));
        QFont font;
        font.setPointSize(12);
        authenicationPROFILE->setFont(font);
        walletPROFILR = new QPushButton(centralwidget);
        walletPROFILR->setObjectName("walletPROFILR");
        walletPROFILR->setGeometry(QRect(480, 240, 161, 91));
        walletPROFILR->setFont(font);
        guidePROFILE = new QPushButton(centralwidget);
        guidePROFILE->setObjectName("guidePROFILE");
        guidePROFILE->setGeometry(QRect(840, 240, 161, 91));
        guidePROFILE->setFont(font);
        profile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(profile);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        profile->setMenuBar(menubar);
        statusbar = new QStatusBar(profile);
        statusbar->setObjectName("statusbar");
        profile->setStatusBar(statusbar);

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QMainWindow *profile)
    {
        profile->setWindowTitle(QCoreApplication::translate("profile", "MainWindow", nullptr));
        authenicationPROFILE->setText(QCoreApplication::translate("profile", "authenication", nullptr));
        walletPROFILR->setText(QCoreApplication::translate("profile", "wallet", nullptr));
        guidePROFILE->setText(QCoreApplication::translate("profile", "guide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
