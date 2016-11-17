#include <QApplication>
#include <QVBoxLayout>
#include <QTabWidget>
#include <QWidget>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QPushButton>
#include <QString>
#include <QLineEdit>
#include <QLabel>
#include <QObject>
#include <QDialog>
#include <QMainWindow>
#include <QtWidgets>
#include <QMenu>
#include <QPlainTextEdit>
#include <iostream>

#include "connection.h"
#include "mainwindow.h"


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    MainWindow* win = new MainWindow;





    std::cout << "GOTOWE 2" << std::endl; /// TUTAJ <--------------------------------------------------------------------------



    std::cout << "GOTOWE 3" << std::endl; /// TUTAJ <--------------------------------------------------------------------------




    std::cout << "GOTOWE 7" << std::endl; /// TUTAJ <--------------------------------------------------------------------------



    return app.exec();
}
