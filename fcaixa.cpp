#include "fcaixa.h"
#include "ui_fcaixa.h"

fcaixa::fcaixa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fcaixa)
{
    ui->setupUi(this);
}

fcaixa::~fcaixa()
{
    delete ui;
}
