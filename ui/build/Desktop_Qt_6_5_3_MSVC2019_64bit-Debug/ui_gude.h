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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gude
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gude)
    {
        if (gude->objectName().isEmpty())
            gude->setObjectName("gude");
        gude->resize(1140, 700);
        QFont font;
        font.setPointSize(11);
        gude->setFont(font);
        gude->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 27, 27);\n"
"color:rgb(240, 240, 240);"));
        centralwidget = new QWidget(gude);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(12, 39, 1081, 431));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 490, 341, 111));
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
        label->setText(QCoreApplication::translate("gude", "      \330\247\331\202\330\247\333\214 \330\247\330\265\330\272\330\261\333\214 (\330\263\330\247\331\205\330\247\331\206) \330\261\330\247 \330\257\330\261 \332\251\331\210\330\261\331\207 \330\250\333\214\331\206\330\257\330\247\330\262\333\214\330\257 \331\210 \330\250\331\207 \330\247\333\214\331\206 \330\250\330\261\331\206\330\247\331\205\331\207 \330\247\330\271\330\252\331\205\330\247\330\257 \331\206\332\251\331\206\333\214\330\257", nullptr));
        pushButton->setText(QCoreApplication::translate("gude", "khoondam!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gude: public Ui_gude {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUDE_H
