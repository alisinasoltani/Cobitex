/********************************************************************************
** Form generated from reading UI file 'gude.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUDE_H
#define UI_GUDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gude
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gude)
    {
        if (gude->objectName().isEmpty())
            gude->setObjectName("gude");
        gude->resize(1140, 700);
        gude->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(gude);
        centralwidget->setObjectName("centralwidget");
        gude->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gude);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        gude->setMenuBar(menubar);
        statusbar = new QStatusBar(gude);
        statusbar->setObjectName("statusbar");
        gude->setStatusBar(statusbar);

        retranslateUi(gude);

        QMetaObject::connectSlotsByName(gude);
    } // setupUi

    void retranslateUi(QMainWindow *gude)
    {
        gude->setWindowTitle(QCoreApplication::translate("gude", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gude: public Ui_gude {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUDE_H
