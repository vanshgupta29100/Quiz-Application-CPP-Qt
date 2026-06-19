#include "databasemanager.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QVariant>

bool DatabaseManager::connectDatabase()
{
    QSqlDatabase db =
        QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("quiz_application.db");

    if(db.open())
    {
        qDebug() << "Database Connected";

        QSqlQuery query;

        query.exec(
            "CREATE TABLE IF NOT EXISTS users ("
            "user_id INTEGER PRIMARY KEY AUTOINCREMENT,"
            "username TEXT NOT NULL,"
            "password TEXT NOT NULL,"
            "role TEXT NOT NULL)"
            );

        query.exec(
            "CREATE TABLE IF NOT EXISTS questions ("
            "question_id INTEGER PRIMARY KEY AUTOINCREMENT,"
            "question TEXT NOT NULL,"
            "option_a TEXT,"
            "option_b TEXT,"
            "option_c TEXT,"
            "option_d TEXT,"
            "correct_answer TEXT)"
            );

        query.exec(
            "INSERT OR IGNORE INTO users "
            "(user_id, username, password, role) "
            "VALUES "
            "(1, 'admin', 'admin123', 'admin')"
            );

        QSqlQuery checkQuery;

        checkQuery.exec("SELECT * FROM users");

        while(checkQuery.next())
        {
            qDebug()
            << checkQuery.value("user_id").toInt()
            << checkQuery.value("username").toString()
            << checkQuery.value("password").toString()
            << checkQuery.value("role").toString();
        }

        return true;
    }

    qDebug() << "Database Error:"
             << db.lastError().text();

    return false;
}