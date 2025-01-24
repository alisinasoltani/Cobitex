#include "auth.h"
#include "ui_auth.h"
#include "submitpage.h"

auth::auth(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::auth)
{
    ui->setupUi(this);
}

auth::~auth()
{
    delete ui;
}

void auth::on_pushButton_clicked()
{
    this->close();
    submitpage *q = new submitpage(this);
    q->show();
}

