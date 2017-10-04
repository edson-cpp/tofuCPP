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

    void on_pushButton_2_clicked();

    void loadSubWindow(QWidget *widget);

private:
    Ui::Desktop *ui;
};

#endif // DESKTOP_H
