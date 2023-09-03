#include "cadpro.h"
#include "ui_cadpro.h"

cadpro::cadpro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cadpro)
{
    ui->setupUi(this);
}

cadpro::~cadpro()
{
    delete ui;
}

void cadpro::habilitar(bool hab)
{
    ui->btnFechar->setVisible(hab);
    ui->btnExcluir->setVisible(hab);
    ui->btnLocalizar->setVisible(hab);
    if (hab) {
        ui->btnAlterar->setText("&Alterar");
        ui->btnIncluir->setText("&Incluir");
    } else {
        ui->btnAlterar->setText("&Cancelar");
        ui->btnIncluir->setText("&Salvar");
    }
    ui->edtCodigo->setEnabled(hab);
    ui->edtDescricao->setEnabled(not hab);
    ui->edtFabricante->setEnabled(not hab);
    ui->edtPreco->setEnabled(not hab);
}
void cadpro::on_btnAlterar_clicked()
{
    habilitar(true);
}

void cadpro::on_btnIncluir_clicked()
{
    habilitar(false);
}

void cadpro::on_btnFechar_clicked()
{
    this->parentWidget()->close();
}

