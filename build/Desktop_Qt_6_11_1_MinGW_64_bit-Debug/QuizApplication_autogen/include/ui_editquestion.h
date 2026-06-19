/********************************************************************************
** Form generated from reading UI file 'editquestion.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITQUESTION_H
#define UI_EDITQUESTION_H

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

class Ui_EditQuestion
{
public:
    QWidget *centralwidget;
    QLineEdit *optionALineEdit;
    QLineEdit *correctAnswerLineEdit;
    QLineEdit *optionDLineEdit;
    QLineEdit *optionCLineEdit;
    QLineEdit *optionBLineEdit;
    QPushButton *updateButton;
    QTextEdit *questionTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditQuestion)
    {
        if (EditQuestion->objectName().isEmpty())
            EditQuestion->setObjectName("EditQuestion");
        EditQuestion->resize(800, 600);
        centralwidget = new QWidget(EditQuestion);
        centralwidget->setObjectName("centralwidget");
        optionALineEdit = new QLineEdit(centralwidget);
        optionALineEdit->setObjectName("optionALineEdit");
        optionALineEdit->setGeometry(QRect(90, 160, 113, 24));
        correctAnswerLineEdit = new QLineEdit(centralwidget);
        correctAnswerLineEdit->setObjectName("correctAnswerLineEdit");
        correctAnswerLineEdit->setGeometry(QRect(90, 280, 113, 24));
        optionDLineEdit = new QLineEdit(centralwidget);
        optionDLineEdit->setObjectName("optionDLineEdit");
        optionDLineEdit->setGeometry(QRect(90, 250, 113, 24));
        optionCLineEdit = new QLineEdit(centralwidget);
        optionCLineEdit->setObjectName("optionCLineEdit");
        optionCLineEdit->setGeometry(QRect(90, 220, 113, 24));
        optionBLineEdit = new QLineEdit(centralwidget);
        optionBLineEdit->setObjectName("optionBLineEdit");
        optionBLineEdit->setGeometry(QRect(90, 190, 113, 24));
        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(230, 360, 141, 24));
        questionTextEdit = new QTextEdit(centralwidget);
        questionTextEdit->setObjectName("questionTextEdit");
        questionTextEdit->setGeometry(QRect(90, 50, 621, 70));
        EditQuestion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditQuestion);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        EditQuestion->setMenuBar(menubar);
        statusbar = new QStatusBar(EditQuestion);
        statusbar->setObjectName("statusbar");
        EditQuestion->setStatusBar(statusbar);

        retranslateUi(EditQuestion);

        QMetaObject::connectSlotsByName(EditQuestion);
    } // setupUi

    void retranslateUi(QMainWindow *EditQuestion)
    {
        EditQuestion->setWindowTitle(QCoreApplication::translate("EditQuestion", "MainWindow", nullptr));
        optionALineEdit->setPlaceholderText(QCoreApplication::translate("EditQuestion", "optionALineEdit", nullptr));
        correctAnswerLineEdit->setPlaceholderText(QCoreApplication::translate("EditQuestion", "correctAnswerLineEdit", nullptr));
        optionDLineEdit->setPlaceholderText(QCoreApplication::translate("EditQuestion", "optionDLineEdit", nullptr));
        optionCLineEdit->setPlaceholderText(QCoreApplication::translate("EditQuestion", "optionCLineEdit", nullptr));
        optionBLineEdit->setPlaceholderText(QCoreApplication::translate("EditQuestion", "optionBLineEdit", nullptr));
        updateButton->setText(QCoreApplication::translate("EditQuestion", "Update Question", nullptr));
        questionTextEdit->setPlaceholderText(QCoreApplication::translate("EditQuestion", "Edit Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditQuestion: public Ui_EditQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITQUESTION_H
