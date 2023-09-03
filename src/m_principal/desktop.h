#ifndef DESKTOP_H
#define DESKTOP_H

#include <QMainWindow>
#include "decvar.h"

namespace Ui {
class Desktop;
}

class Desktop : public QMainWindow
{
    Q_OBJECT

public:
    explicit Desktop(QWidget *parent = 0);
    ~Desktop();
    Decvar var;

private slots:
    void on_pushButton_clicked();

    void loadSubWindow(QWidget *widget);

    void on_action_Produtos_triggered();

private:
    Ui::Desktop *ui;
};

#endif // DESKTOP_H
