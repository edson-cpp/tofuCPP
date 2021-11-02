#include "desktop.h"
#include <QApplication>
#include "decvar.h"
#include <QMessageBox>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    Desktop w;
    w.showMaximized();

    return a.exec();
}
