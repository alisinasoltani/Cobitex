#include "forgotpasspage.h"
#include "ui_forgotpasspage.h"
#include "confirmcodepage.h"

forgotpasspage::forgotpasspage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::forgotpasspage)
{
    ui->setupUi(this);
}

forgotpasspage::~forgotpasspage()
{
    delete ui;
}

void forgotpasspage::on_submitFPP_clicked()
{
    this->hide();
    confirmcodepage *q = new confirmcodepage(this);
    q->show();
}

