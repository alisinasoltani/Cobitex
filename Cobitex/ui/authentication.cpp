#include "authentication.h"
#include "ui_authentication.h"

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
