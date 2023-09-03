#include "desktop.h"
#include "ui_desktop.h"
#include <QMessageBox>
#include "decvar.h"
#include <QMdiSubWindow>
#include <QStyle>
#include <QtGui>
#include <QtCore>
#include "m_cadastros/cadpro.h"

Desktop::Desktop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Desktop)
{
    ui->setupUi(this);
    setCentralWidget(ui->mdiArea);
}

Desktop::~Desktop()
{
    delete ui;
}

void Desktop::on_pushButton_clicked()
{
    close();
    //var.setNomeUsuario(ui->lineEdit->text());
    //QMessageBox::question(0, "Teste1", var.getNomeUsuario().toStdString().c_str(), QMessageBox::Ok, QMessageBox::Ok);
}

void Desktop::loadSubWindow(QWidget *widget)
{
    auto window = ui->mdiArea->addSubWindow(widget);
    window->setWindowTitle(widget->windowTitle());
    window->setWindowIcon(widget->windowIcon());
    window->move(QPoint((this->width() - window->width()) / 2,
                        (this->height() - this->menuBar()->height() - this->menuWidget()->height() - window->height()) / 2));
    window->show();
}

void Desktop::on_action_Produtos_triggered()
{
    loadSubWindow(new cadpro(this));
}
