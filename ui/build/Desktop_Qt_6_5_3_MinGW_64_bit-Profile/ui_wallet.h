/********************************************************************************
** Form generated from reading UI file 'wallet.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WALLET_H
#define UI_WALLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wallet
{
public:
    QWidget *centralwidget;
    QLabel *btclabelwallet;
    QLabel *ethlabelwallet_2;
    QLabel *usdtlabelwallet;
    QLabel *meghdarebtc;
    QLabel *meghdareeth;
    QLabel *meghdareusdt;
    QPushButton *donewallet;
    QPushButton *donewallet_2;
    QLabel *poolbedoloor;
    QLabel *meghdarepool;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *wallet)
    {
        if (wallet->objectName().isEmpty())
            wallet->setObjectName("wallet");
        wallet->resize(1140, 700);
        wallet->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(wallet);
        centralwidget->setObjectName("centralwidget");
        btclabelwallet = new QLabel(centralwidget);
        btclabelwallet->setObjectName("btclabelwallet");
        btclabelwallet->setGeometry(QRect(92, 49, 351, 141));
        QFont font;
        font.setPointSize(12);
        btclabelwallet->setFont(font);
        btclabelwallet->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);\n"
"color :rgb(236, 236, 236);"));
        ethlabelwallet_2 = new QLabel(centralwidget);
        ethlabelwallet_2->setObjectName("ethlabelwallet_2");
        ethlabelwallet_2->setGeometry(QRect(90, 210, 351, 141));
        ethlabelwallet_2->setFont(font);
        ethlabelwallet_2->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);\n"
"color :rgb(236, 236, 236);"));
        usdtlabelwallet = new QLabel(centralwidget);
        usdtlabelwallet->setObjectName("usdtlabelwallet");
        usdtlabelwallet->setGeometry(QRect(90, 350, 351, 141));
        usdtlabelwallet->setFont(font);
        usdtlabelwallet->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);\n"
"color :rgb(236, 236, 236);"));
        meghdarebtc = new QLabel(centralwidget);
        meghdarebtc->setObjectName("meghdarebtc");
        meghdarebtc->setGeometry(QRect(530, 90, 521, 91));
        meghdarebtc->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);\n"
"color:rgb(250, 250, 250);"));
        meghdareeth = new QLabel(centralwidget);
        meghdareeth->setObjectName("meghdareeth");
        meghdareeth->setGeometry(QRect(530, 230, 521, 91));
        meghdareeth->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);\n"
"color:rgb(250, 250, 250);"));
        meghdareusdt = new QLabel(centralwidget);
        meghdareusdt->setObjectName("meghdareusdt");
        meghdareusdt->setGeometry(QRect(530, 390, 521, 101));
        meghdareusdt->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);\n"
"color:rgb(250, 250, 250);"));
        donewallet = new QPushButton(centralwidget);
        donewallet->setObjectName("donewallet");
        donewallet->setGeometry(QRect(70, 530, 201, 81));
        donewallet_2 = new QPushButton(centralwidget);
        donewallet_2->setObjectName("donewallet_2");
        donewallet_2->setGeometry(QRect(660, 530, 201, 81));
        poolbedoloor = new QLabel(centralwidget);
        poolbedoloor->setObjectName("poolbedoloor");
        poolbedoloor->setGeometry(QRect(80, 0, 181, 51));
        poolbedoloor->setFont(font);
        poolbedoloor->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);\n"
"color :rgb(236, 236, 236);"));
        meghdarepool = new QLabel(centralwidget);
        meghdarepool->setObjectName("meghdarepool");
        meghdarepool->setGeometry(QRect(530, 10, 521, 51));
        meghdarepool->setStyleSheet(QString::fromUtf8("background-color: rgb(16, 16, 16);\n"
"color:rgb(250, 250, 250);"));
        wallet->setCentralWidget(centralwidget);
        menubar = new QMenuBar(wallet);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        wallet->setMenuBar(menubar);
        statusbar = new QStatusBar(wallet);
        statusbar->setObjectName("statusbar");
        wallet->setStatusBar(statusbar);

        retranslateUi(wallet);

        QMetaObject::connectSlotsByName(wallet);
    } // setupUi

    void retranslateUi(QMainWindow *wallet)
    {
        wallet->setWindowTitle(QCoreApplication::translate("wallet", "MainWindow", nullptr));
        btclabelwallet->setText(QCoreApplication::translate("wallet", "BTC AMOUNT :", nullptr));
        ethlabelwallet_2->setText(QCoreApplication::translate("wallet", "ETH AMOUNT :", nullptr));
        usdtlabelwallet->setText(QCoreApplication::translate("wallet", "usdt AMOUNT :", nullptr));
        meghdarebtc->setText(QString());
        meghdareeth->setText(QString());
        meghdareusdt->setText(QString());
        donewallet->setText(QCoreApplication::translate("wallet", "DONE!", nullptr));
        donewallet_2->setText(QCoreApplication::translate("wallet", "afzayesh etebar be dollar", nullptr));
        poolbedoloor->setText(QCoreApplication::translate("wallet", "pool be dollor :", nullptr));
        meghdarepool->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class wallet: public Ui_wallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WALLET_H
