#include "btcramzarz.h"
#include "ui_btcramzarz.h"

btcramzarz::btcramzarz(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::btcramzarz)
{
    ui->setupUi(this);
}

btcramzarz::~btcramzarz()
{
    delete ui;
}
