#ifndef BTCRAMZARZ_H
#define BTCRAMZARZ_H

#include <QMainWindow>

namespace Ui {
class btcramzarz;
}

class btcramzarz : public QMainWindow
{
    Q_OBJECT

public:
    explicit btcramzarz(QWidget *parent = nullptr);
    ~btcramzarz();

private:
    Ui::btcramzarz *ui;
};

#endif // BTCRAMZARZ_H
