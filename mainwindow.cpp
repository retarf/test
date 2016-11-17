#include <iostream>
#include <QPushButton>
#include <QGroupBox>


#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
{

    window = new QWidget;
    menu = new QMenu;
    layout = new QVBoxLayout;

    imie = new QLineEdit();
    nazwisko = new QLineEdit();
    numer = new QLineEdit();

    imieLab = new QLabel("Imię:");
    nazwiskoLab = new QLabel("Nazwisko:");
    numerLab = new QLabel("Nr telefonu:");


    QGroupBox* hGroupBox = new QGroupBox;

    QHBoxLayout *buttons = new QHBoxLayout;

    std::cout << "GOTOWE 1" << std::endl; /// TUTAJ <--------------------------------------------------------------------------

    dodaj = new QPushButton("Dodaj");
    wyczysc = new QPushButton("Wyczyść");

    std::cout << "GOTOWE XX" << std::endl; /// TUTAJ <--------------------------------------------------------------------------

    buttons->addWidget(dodaj);
    buttons->addWidget(wyczysc);

    hGroupBox->setLayout(buttons);

    layout->addWidget(imieLab);
    layout->addWidget(imie);
    layout->addWidget(nazwiskoLab);
    layout->addWidget(nazwisko);
    layout->addWidget(numerLab);
    layout->addWidget(numer);

    std::cout << "GOTOWE 4" << std::endl; /// TUTAJ <--------------------------------------------------------------------------

    layout->addWidget(hGroupBox);

    std::cout << "GOTOWE 5" << std::endl; /// TUTAJ <--------------------------------------------------------------------------

    window->setLayout(layout);

    connect(dodaj, SIGNAL(clicked()), this, SLOT(get_values(imie, nazwisko, numer, conn)));

    std::cout << "GOTOWE 6" << std::endl; /// TUTAJ <--------------------------------------------------------------------------

    window->show();

}

void MainWindow::get_values(QLineEdit* imie, QLineEdit* nazwisko, QLineEdit* numer, Connection* connection)
{
    QString *record = new QString [3];

    record[0] = imie->text();
    record[1] = nazwisko->text();
    record[2] = numer->text();

    connection->db_add(record);
}
