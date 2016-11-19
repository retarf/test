#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QMenu>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>
#include <iostream>

#include "connection.h"


class MainWindow :public QMainWindow
{

    Q_OBJECT

public:

    explicit MainWindow();


public slots:
    void get_values();
    void clear_form();

public:
    QWidget* window;

    QLineEdit *imie;
    QLineEdit *nazwisko;
    QLineEdit *numer;


    QPushButton *dodaj;
    QPushButton *wyczysc;

    Connection* conn;

    QMenu* menu;

};
#endif // MAINWINDOW_H
