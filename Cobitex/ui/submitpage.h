#ifndef SUBMITPAGE_H
#define SUBMITPAGE_H

#include <QMainWindow>

namespace Ui {
class submitpage;
}

class submitpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit submitpage(QWidget *parent = nullptr);
    ~submitpage();

private slots:
    void on_pushButton_clicked();

    void on_profilepushSUBMIT_clicked();

private:
    Ui::submitpage *ui;
};

#endif // SUBMITPAGE_H
