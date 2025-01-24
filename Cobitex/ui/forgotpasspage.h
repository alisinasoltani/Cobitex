#ifndef FORGOTPASSPAGE_H
#define FORGOTPASSPAGE_H

#include <QMainWindow>

namespace Ui {
class forgotpasspage;
}

class forgotpasspage : public QMainWindow
{
    Q_OBJECT

public:
    explicit forgotpasspage(QWidget *parent = nullptr);
    ~forgotpasspage();

private slots:
    void on_submitFPP_clicked();

private:
    Ui::forgotpasspage *ui;
};

#endif // FORGOTPASSPAGE_H
