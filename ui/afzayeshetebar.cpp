#include "afzayeshetebar.h"
#include "ui_afzayeshetebar.h"
#include "wallet.h"

afzayeshetebar::afzayeshetebar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::afzayeshetebar)
{
    ui->setupUi(this);
}

afzayeshetebar::~afzayeshetebar()
{
    delete ui;
}

void afzayeshetebar::on_pushButton_clicked()
{
    this->hide();
    wallet *d = new wallet(this);
    d->show();
}

