/********************************************************************************
** Form generated from reading UI file 'questionmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONMANAGER_H
#define UI_QUESTIONMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuestionManager
{
public:
    QWidget *centralwidget;
    QLineEdit *optionALineEdit;
    QLineEdit *optionBLineEdit;
    QLineEdit *optionCLineEdit;
    QLineEdit *optionDLineEdit;
    QLineEdit *correctAnswerLineEdit;
    QPushButton *saveButton;
    QTextEdit *questionTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QuestionManager)
    {
        if (QuestionManager->objectName().isEmpty())
            QuestionManager->setObjectName("QuestionManager");
        QuestionManager->resize(800, 600);
        centralwidget = new QWidget(QuestionManager);
        centralwidget->setObjectName("centralwidget");
        optionALineEdit = new QLineEdit(centralwidget);
        optionALineEdit->setObjectName("optionALineEdit");
        optionALineEdit->setGeometry(QRect(40, 80, 113, 24));
        optionBLineEdit = new QLineEdit(centralwidget);
        optionBLineEdit->setObjectName("optionBLineEdit");
        optionBLineEdit->setGeometry(QRect(40, 130, 113, 24));
        optionCLineEdit = new QLineEdit(centralwidget);
        optionCLineEdit->setObjectName("optionCLineEdit");
        optionCLineEdit->setGeometry(QRect(40, 180, 113, 24));
        optionDLineEdit = new QLineEdit(centralwidget);
        optionDLineEdit->setObjectName("optionDLineEdit");
        optionDLineEdit->setGeometry(QRect(40, 230, 113, 24));
        correctAnswerLineEdit = new QLineEdit(centralwidget);
        correctAnswerLineEdit->setObjectName("correctAnswerLineEdit");
        correctAnswerLineEdit->setGeometry(QRect(40, 290, 113, 24));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(50, 350, 101, 24));
        questionTextEdit = new QTextEdit(centralwidget);
        questionTextEdit->setObjectName("questionTextEdit");
        questionTextEdit->setGeometry(QRect(40, 30, 401, 31));
        QuestionManager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QuestionManager);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        QuestionManager->setMenuBar(menubar);
        statusbar = new QStatusBar(QuestionManager);
        statusbar->setObjectName("statusbar");
        QuestionManager->setStatusBar(statusbar);

        retranslateUi(QuestionManager);

        QMetaObject::connectSlotsByName(QuestionManager);
    } // setupUi

    void retranslateUi(QMainWindow *QuestionManager)
    {
        QuestionManager->setWindowTitle(QCoreApplication::translate("QuestionManager", "MainWindow", nullptr));
        optionALineEdit->setPlaceholderText(QCoreApplication::translate("QuestionManager", "Option A", nullptr));
        optionBLineEdit->setPlaceholderText(QCoreApplication::translate("QuestionManager", "Option B", nullptr));
        optionCLineEdit->setPlaceholderText(QCoreApplication::translate("QuestionManager", "Option C", nullptr));
        optionDLineEdit->setPlaceholderText(QCoreApplication::translate("QuestionManager", "Option D", nullptr));
        correctAnswerLineEdit->setPlaceholderText(QCoreApplication::translate("QuestionManager", "Correct Answer (A/B/C/D)", nullptr));
        saveButton->setText(QCoreApplication::translate("QuestionManager", "Save Question", nullptr));
        questionTextEdit->setPlaceholderText(QCoreApplication::translate("QuestionManager", "Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionManager: public Ui_QuestionManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONMANAGER_H
