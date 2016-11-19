#include <QApplication>
#include <QObject>

#include "connection.h"
#include "mainwindow.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    MainWindow* win = new MainWindow;


    return app.exec();
}
