#include "signuppage.h"
#include "ui_signuppage.h"
#include "submitpage.h"

signuppage::signuppage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signuppage)
{
    ui->setupUi(this);
}

signuppage::~signuppage()
{
    delete ui;
}

void signuppage::on_submitSIGNUPpage_clicked()
{
    this->hide();
    submitpage *k = new submitpage(this);
    k->show();

}

