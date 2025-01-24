#ifndef WALLET_H
#define WALLET_H

#include <QMainWindow>

namespace Ui {
class wallet;
}

class wallet : public QMainWindow
{
    Q_OBJECT

public:
    explicit wallet(QWidget *parent = nullptr);
    ~wallet();

private slots:
    void on_donewallet_clicked();

    void on_donewallet_2_clicked();

private:
    Ui::wallet *ui;
};

#endif // WALLET_H
