#include "wallet.h"
#include "ui_wallet.h"
#include "submitpage.h"
#include "afzayeshetebar.h"

wallet::wallet(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::wallet)
{
    ui->setupUi(this);
}

wallet::~wallet()
{
    delete ui;
}

void wallet::on_donewallet_clicked()
{
    this->hide();
    submitpage *j = new submitpage(this);
    j->show();

}


void wallet::on_donewallet_2_clicked()
{
    this->hide();
    afzayeshetebar *u = new afzayeshetebar(this);
    u->show();
}

