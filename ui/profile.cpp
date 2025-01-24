#include "profile.h"
#include "ui_profile.h"
#include "gude.h"
#include "auth.h"
#include "wallet.h"

profile::profile(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::profile)
{
    ui->setupUi(this);
}

profile::~profile()
{
    delete ui;
}


void profile::on_guidePROFILE_clicked()
{
    this->hide();
    gude *t = new gude(this);
    t->show();
}


void profile::on_authenicationPROFILE_clicked()
{
    this->hide();
    auth *s = new auth(this);
    s->show();
}


void profile::on_walletPROFILR_clicked()
{
    this->hide();
    wallet *p = new wallet(this);
    p->show();
}

