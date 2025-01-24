#include "gude.h"
#include "ui_gude.h"
#include "submitpage.h"

gude::gude(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gude)
{
    ui->setupUi(this);
}

gude::~gude()
{
    delete ui;
}

void gude::on_pushButton_clicked()
{
    this->close();
    submitpage *u = new submitpage(this);
    u->show();
}

