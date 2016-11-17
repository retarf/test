#include <QtSql>
#include <QSqlQuery>
#include <QSqlDatabase>

#include "connection.h"

Connection::Connection()
{
    db = QSqlDatabase::addDatabase(db_type, conn_name);
    db.database(conn_name);
    db.setHostName(h_name);
    db.setDatabaseName(db_name);
    db.setUserName(user);
}

void Connection::db_get_list()
{
    db.open();

    QSqlQuery query("SELECT imie, nazwisko, numer FROM dane order by nazwisko", db);

    *listSize = query.size();

    int j = 0;

    while (query.next()) {
        list[j] = new QString [3];
        for (int i = 0; i <= 2; i++) {
            list[j][i] = query.value(i).toString();
        }
        j++;
    }

    db.close();
}

void Connection::db_add(QString *record)
{
    db.open();

    QSqlQuery query;
    query.prepare("INSERT INTO (imie, nazwisko, numer) VALUES (:imie, :nazwisko, :numer)");

    query.bindValue(":imie", record[0]);
    query.bindValue(":nazwisko", record[1]);
    query.bindValue(":numer", record[2]);

    query.exec();

    db.close();
}
