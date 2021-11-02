#include "desktop.h"
#include "ui_desktop.h"
#include <QMessageBox>
#include "decvar.h"
#include <QMdiSubWindow>
#include <QStyle>
#include <QDesktopWidget>
#include <QtGui>
#include <QtCore>
#include "cadpro.h"

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
    //var.setNomeUsuario(ui->lineEdit->text());
    QMessageBox::question(0, "Teste1", var.getNomeUsuario().toStdString().c_str(), QMessageBox::Ok, QMessageBox::Ok);
}

void Desktop::on_pushButton_2_clicked()
{
    QMessageBox::question(0, "Teste1", var.getNomeUsuario().toStdString().c_str(), QMessageBox::Ok, QMessageBox::Ok);
}

void Desktop::loadSubWindow(QWidget *widget)
{
    auto window = ui->mdiArea->addSubWindow(widget);
    window->setWindowTitle(widget->windowTitle());
    window->setWindowIcon(widget->windowIcon());
    window->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight, Qt::AlignCenter,
            window->size(),
            qApp->desktop()->availableGeometry()
        )
    );
    window->show();
}

void Desktop::on_action_Produtos_triggered()
{
    loadSubWindow(new cadpro(this));
}
