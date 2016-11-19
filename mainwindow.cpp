#include <iostream>
#include <QPushButton>
#include <QGroupBox>

#include "mainwindow.h"


MainWindow::MainWindow()
{

    window = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout;

    QLabel* imieLab = new QLabel("Imię:");
    QLabel* nazwiskoLab = new QLabel("Nazwisko:");
    QLabel* numerLab = new QLabel("Nr telefonu:");

    conn = new Connection;

    dodaj = new QPushButton("Dodaj", this);
    wyczysc = new QPushButton("Wyczyść", this);

    imie = new QLineEdit();
    nazwisko = new QLineEdit();
    numer = new QLineEdit();

    layout->addWidget(imieLab);
    layout->addWidget(imie);
    layout->addWidget(nazwiskoLab);
    layout->addWidget(nazwisko);
    layout->addWidget(numerLab);
    layout->addWidget(numer);
    layout->addWidget(dodaj);
    layout->addWidget(wyczysc);

    window->setLayout(layout);

    QObject::connect(dodaj, SIGNAL(clicked()), this, SLOT( get_values() ) );
    QObject::connect(wyczysc, SIGNAL(clicked()), this, SLOT( clear_form() ) );

    window->setAttribute(Qt::WA_DeleteOnClose);

    window->show();

}

void MainWindow::get_values()
{
    QString *record = new QString [3];

    record[0] = this->imie->text();
    record[1] = this->nazwisko->text();
    record[2] = this->numer->text();

    conn->db_add(record);

    window->close();
}

void MainWindow::clear_form()
{
    this->imie->setText("");
    this->nazwisko->setText("");
    this->numer->setText("");
}
