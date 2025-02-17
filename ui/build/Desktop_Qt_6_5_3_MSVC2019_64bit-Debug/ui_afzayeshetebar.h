/********************************************************************************
** Form generated from reading UI file 'afzayeshetebar.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFZAYESHETEBAR_H
#define UI_AFZAYESHETEBAR_H

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

class Ui_afzayeshetebar
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *afzayeshetebar)
    {
        if (afzayeshetebar->objectName().isEmpty())
            afzayeshetebar->setObjectName("afzayeshetebar");
        afzayeshetebar->resize(1140, 700);
        QFont font;
        font.setPointSize(14);
        afzayeshetebar->setFont(font);
        afzayeshetebar->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);"));
        centralwidget = new QWidget(afzayeshetebar);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 70, 491, 141));
        label->setStyleSheet(QString::fromUtf8("color: rgb(244, 244, 244);\n"
"background-color: rgb(16, 16, 16);\n"
"border-radius:15px;"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(410, 237, 531, 81));
        lineEdit->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);\n"
"background-color: rgb(16, 16, 16);\n"
"border-radius:20px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(550, 360, 241, 61));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(240, 240, 240);\n"
"background-color: rgb(18, 18, 18);"));
        afzayeshetebar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(afzayeshetebar);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1140, 25));
        afzayeshetebar->setMenuBar(menubar);
        statusbar = new QStatusBar(afzayeshetebar);
        statusbar->setObjectName("statusbar");
        afzayeshetebar->setStatusBar(statusbar);

        retranslateUi(afzayeshetebar);

        QMetaObject::connectSlotsByName(afzayeshetebar);
    } // setupUi

    void retranslateUi(QMainWindow *afzayeshetebar)
    {
        afzayeshetebar->setWindowTitle(QCoreApplication::translate("afzayeshetebar", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("afzayeshetebar", "            pool bezan , zood bash barde: 5859831222248287", nullptr));
        pushButton->setText(QCoreApplication::translate("afzayeshetebar", "verywell", nullptr));
    } // retranslateUi

};

namespace Ui {
    class afzayeshetebar: public Ui_afzayeshetebar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFZAYESHETEBAR_H
