#include "submitpage.h"
#include "ui_submitpage.h"
#include "profile.h"

submitpage::submitpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::submitpage)
{
    ui->setupUi(this);
}

submitpage::~submitpage()
{
    delete ui;
}

void submitpage::on_pushButton_clicked()
{
    this->hide();
    profile *z = new profile(this);
    z->show();

}


void submitpage::on_profilepushSUBMIT_clicked()
{
    this->hide();
    profile *h = new profile(this);
    h->show();
}

