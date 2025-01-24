#include "confirmcodepage.h"
#include "ui_confirmcodepage.h"
#include "newpasspage.h"

confirmcodepage::confirmcodepage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::confirmcodepage)
{
    ui->setupUi(this);
}

confirmcodepage::~confirmcodepage()
{
    delete ui;
}

void confirmcodepage::on_pushButton_clicked()
{
    this->hide();
    newpasspage *z = new newpasspage(this);
    z->show();

}

