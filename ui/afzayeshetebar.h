#ifndef AFZAYESHETEBAR_H
#define AFZAYESHETEBAR_H

#include <QMainWindow>

namespace Ui {
class afzayeshetebar;
}

class afzayeshetebar : public QMainWindow
{
    Q_OBJECT

public:
    explicit afzayeshetebar(QWidget *parent = nullptr);
    ~afzayeshetebar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::afzayeshetebar *ui;
};

#endif // AFZAYESHETEBAR_H
