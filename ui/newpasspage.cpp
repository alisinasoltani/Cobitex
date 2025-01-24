#include "newpasspage.h"
#include "ui_newpasspage.h"
#include "submitpage.h"

newpasspage::newpasspage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::newpasspage)
{
    ui->setupUi(this);
}

newpasspage::~newpasspage()
{
    delete ui;
}

void newpasspage::on_submitloginpage_clicked()
{
    this->hide();
    submitpage *m = new submitpage(this);
    m->show();

}

