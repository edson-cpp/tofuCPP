#ifndef FCAIXA_H
#define FCAIXA_H

#include <QWidget>

namespace Ui {
class fcaixa;
}

class fcaixa : public QWidget
{
    Q_OBJECT

public:
    explicit fcaixa(QWidget *parent = 0);
    ~fcaixa();

private:
    Ui::fcaixa *ui;
};

#endif // FCAIXA_H
