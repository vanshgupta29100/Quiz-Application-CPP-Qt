/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *QuizApplication;
    QLabel *Username;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *Password;
    QPushButton *loginButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(800, 600);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        QuizApplication = new QLabel(centralwidget);
        QuizApplication->setObjectName("QuizApplication");
        QuizApplication->setGeometry(QRect(350, 10, 201, 31));
        Username = new QLabel(centralwidget);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(210, 150, 61, 16));
        usernameLineEdit = new QLineEdit(centralwidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(290, 150, 113, 24));
        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(290, 210, 113, 24));
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        Password = new QLabel(centralwidget);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(210, 210, 49, 16));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(280, 300, 80, 24));
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Quiz Application - Login", nullptr));
        QuizApplication->setText(QCoreApplication::translate("Login", "Quiz Application", nullptr));
        Username->setText(QCoreApplication::translate("Login", "Username", nullptr));
        usernameLineEdit->setText(QString());
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("Login", "Enter Username", nullptr));
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("Login", "Enter Password", nullptr));
        Password->setText(QCoreApplication::translate("Login", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
