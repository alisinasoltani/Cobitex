#include "loginpage.h"
#include "ui_loginpage.h"
#include "forgotpasspage.h"
#include "submitpage.h"

loginpage::loginpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginpage)
{
    ui->setupUi(this);
}

loginpage::~loginpage()
{
    delete ui;
}

void loginpage::on_forgotloginpage_clicked()
{
    this->hide();
    forgotpasspage *w = new forgotpasspage(this);
    w->show();
}


void loginpage::on_submitloginpage_clicked()
{
    this->hide();
    submitpage *x = new submitpage(this);
    x->show();
}

