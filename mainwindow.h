#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QMenu>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

#include "connection.h"


class MainWindow :public QMainWindow
{

    Q_OBJECT

public:

    explicit MainWindow(QWidget* parent =0);


private slots:
    void get_values(QLineEdit* imie, QLineEdit* nazwisko, QLineEdit* numer, Connection* connection);

public:
    QWidget *window;
    QVBoxLayout *layout;

    QLineEdit *imie;
    QLineEdit *nazwisko;
    QLineEdit *numer;

    QLabel *imieLab;
    QLabel *nazwiskoLab;
    QLabel *numerLab;

    QPushButton *dodaj;
    QPushButton *wyczysc;

private:
    Connection* conn = new Connection;

    QMenu* menu;

};
#endif // MAINWINDOW_H
