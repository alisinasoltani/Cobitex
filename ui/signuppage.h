#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QMainWindow>

namespace Ui {
class signuppage;
}

class signuppage : public QMainWindow
{
    Q_OBJECT

public:
    explicit signuppage(QWidget *parent = nullptr);
    ~signuppage();

private slots:
    void on_submitSIGNUPpage_clicked();

private:
    Ui::signuppage *ui;
};

#endif // SIGNUPPAGE_H
