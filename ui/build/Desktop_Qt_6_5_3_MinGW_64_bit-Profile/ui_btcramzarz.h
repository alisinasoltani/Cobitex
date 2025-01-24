/********************************************************************************
** Form generated from reading UI file 'btcramzarz.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BTCRAMZARZ_H
#define UI_BTCRAMZARZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_btcramzarz
{
public:
    QWidget *centralwidget;
    QPushButton *BUYPUSH;
    QPushButton *SELLPUSH;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *btcramzarz)
    {
        if (btcramzarz->objectName().isEmpty())
            btcramzarz->setObjectName("btcramzarz");
        btcramzarz->resize(1140, 700);
        btcramzarz->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(btcramzarz);
        centralwidget->setObjectName("centralwidget");
        BUYPUSH = new QPushButton(centralwidget);
        BUYPUSH->setObjectName("BUYPUSH");
        BUYPUSH->setGeometry(QRect(100, 240, 251, 91));
        QFont font;
        font.setPointSize(12);
        BUYPUSH->setFont(font);
        BUYPUSH->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        SELLPUSH = new QPushButton(centralwidget);
        SELLPUSH->setObjectName("SELLPUSH");
        SELLPUSH->setGeometry(QRect(100, 370, 251, 91));
        SELLPUSH->setFont(font);
        SELLPUSH->setStyleSheet(QString::fromUtf8("border-radius : 15px;\n"
"background-color: rgb(68, 68, 68);"));
        btcramzarz->setCentralWidget(centralwidget);
        menubar = new QMenuBar(btcramzarz);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        btcramzarz->setMenuBar(menubar);
        statusbar = new QStatusBar(btcramzarz);
        statusbar->setObjectName("statusbar");
        btcramzarz->setStatusBar(statusbar);

        retranslateUi(btcramzarz);

        QMetaObject::connectSlotsByName(btcramzarz);
    } // setupUi

    void retranslateUi(QMainWindow *btcramzarz)
    {
        btcramzarz->setWindowTitle(QCoreApplication::translate("btcramzarz", "MainWindow", nullptr));
        BUYPUSH->setText(QCoreApplication::translate("btcramzarz", "BUY", nullptr));
        SELLPUSH->setText(QCoreApplication::translate("btcramzarz", "SELL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class btcramzarz: public Ui_btcramzarz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTCRAMZARZ_H
