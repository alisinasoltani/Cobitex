#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <QMainWindow>

namespace Ui {
class auth;
}

class auth : public QMainWindow
{
    Q_OBJECT

public:
    explicit auth(QWidget *parent = nullptr);
    ~auth();

private:
    Ui::auth *ui;
};

#endif // AUTHENTICATION_H
