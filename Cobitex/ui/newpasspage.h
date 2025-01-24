#ifndef NEWPASSPAGE_H
#define NEWPASSPAGE_H

#include <QMainWindow>

namespace Ui {
class newpasspage;
}

class newpasspage : public QMainWindow
{
    Q_OBJECT

public:
    explicit newpasspage(QWidget *parent = nullptr);
    ~newpasspage();

private slots:
    void on_submitloginpage_clicked();

private:
    Ui::newpasspage *ui;
};

#endif // NEWPASSPAGE_H
