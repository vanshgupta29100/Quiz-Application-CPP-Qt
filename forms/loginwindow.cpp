#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "dashboard.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    qDebug() << "Username:" << username;
    qDebug() << "Password:" << password;

    QSqlQuery query;

    query.prepare(
        "SELECT * FROM users "
        "WHERE username = ? "
        "AND password = ?"
        );

    query.addBindValue(username);
    query.addBindValue(password);

    if(query.exec())
    {
        qDebug() << "Query Executed Successfully";

        if(query.next())
        {
            qDebug() << "User Found";

            Dashboard *dashboard = new Dashboard();

            dashboard->show();

            this->hide();
        }
        else
        {
            qDebug() << "No User Found";

            QMessageBox::warning(
                this,
                "Error",
                "Invalid Username or Password"
                );
        }
    }
    else
    {
        qDebug() << "Query Error:"
                 << query.lastError().text();

        QMessageBox::warning(
            this,
            "Error",
            "Database Query Failed"
            );
    }
}