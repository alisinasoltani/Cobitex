#ifndef CONFIRMCODEPAGE_H
#define CONFIRMCODEPAGE_H

#include <QMainWindow>

namespace Ui {
class confirmcodepage;
}

class confirmcodepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit confirmcodepage(QWidget *parent = nullptr);
    ~confirmcodepage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::confirmcodepage *ui;
};

#endif // CONFIRMCODEPAGE_H
