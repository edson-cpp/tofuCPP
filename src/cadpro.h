#ifndef CADPRO_H
#define CADPRO_H

#include <QWidget>

namespace Ui {
class cadpro;
}

class cadpro : public QWidget
{
    Q_OBJECT

public:
    explicit cadpro(QWidget *parent = 0);
    ~cadpro();

private slots:
    void habilitar(bool hab);
    void on_btnAlterar_clicked();
    void on_btnIncluir_clicked();

private:
    Ui::cadpro *ui;
};

#endif // CADPRO_H
