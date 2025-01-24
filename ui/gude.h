#ifndef GUDE_H
#define GUDE_H

#include <QMainWindow>

namespace Ui {
class gude;
}

class gude : public QMainWindow
{
    Q_OBJECT

public:
    explicit gude(QWidget *parent = nullptr);
    ~gude();

private slots:
    void on_pushButton_clicked();

private:
    Ui::gude *ui;
};

#endif // GUDE_H
