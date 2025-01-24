#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>

namespace Ui {
class loginpage;
}

class loginpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

private slots:
    void on_forgotloginpage_clicked();

    void on_submitloginpage_clicked();

private:
    Ui::loginpage *ui;
};

#endif // LOGINPAGE_H
