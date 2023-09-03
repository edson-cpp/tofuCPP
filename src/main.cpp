#include "m_principal/desktop.h"
#include <QApplication>
#include "m_principal/decvar.h"
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    Desktop w;
    w.showMaximized();

    return a.exec();
}
