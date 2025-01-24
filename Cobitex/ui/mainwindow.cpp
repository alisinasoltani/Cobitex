#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginpage.h"
#include "signuppage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->hide();
    loginpage *d = new loginpage(this);
    d->show();

}


void MainWindow::on_pushButton_2_clicked()
{
    this->hide();
    signuppage *y = new signuppage(this);
    y->show();

}

