#ifndef CONNECTION_H
#define CONNECTION_H

#include <QString>
#include <QSqlDatabase>

#include "/home/retarf/kontakty/tajne/tajne.h"

class Connection
{
private:
    Secret x; // This class contains my privet data to database connect and it should be remove or data in tajne.h shut be replaced

    QString conn_name = x.conn_name;      // Conection name
    QString db_type = x.db_type;            // DataBase Type
    QString h_name = x.h_name;       // hostname
    QString user = x.user;        // username
    QString db_name = x.db_name;     // DB name

public:
    QSqlDatabase db;

    // db_get_list()
    QString **list = new QString *[3];
    int *listSize = new int;

    // db_add()
    // QString *record = new QString [3];

    Connection();

    void db_get_list();                 //get list from database

    void db_add(QString *record);                      //add to database from WindowDodaj object

    // void db_get();              //get from database
    // void db_del();              //delete from database
    // void db_rep();              //replace record in database
};

#endif // CONNECTION_H
