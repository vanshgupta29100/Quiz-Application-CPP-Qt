/********************************************************************************
** Form generated from reading UI file 'quizwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZWINDOW_H
#define UI_QUIZWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizWindow
{
public:
    QWidget *centralwidget;
    QLabel *questionLabel;
    QRadioButton *optionARadioButton;
    QRadioButton *optionBRadioButton;
    QRadioButton *optionCRadioButton;
    QRadioButton *optionDRadioButton;
    QPushButton *nextButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QuizWindow)
    {
        if (QuizWindow->objectName().isEmpty())
            QuizWindow->setObjectName("QuizWindow");
        QuizWindow->resize(800, 600);
        centralwidget = new QWidget(QuizWindow);
        centralwidget->setObjectName("centralwidget");
        questionLabel = new QLabel(centralwidget);
        questionLabel->setObjectName("questionLabel");
        questionLabel->setGeometry(QRect(100, 50, 161, 16));
        optionARadioButton = new QRadioButton(centralwidget);
        optionARadioButton->setObjectName("optionARadioButton");
        optionARadioButton->setGeometry(QRect(90, 150, 161, 21));
        optionBRadioButton = new QRadioButton(centralwidget);
        optionBRadioButton->setObjectName("optionBRadioButton");
        optionBRadioButton->setGeometry(QRect(90, 180, 161, 21));
        optionCRadioButton = new QRadioButton(centralwidget);
        optionCRadioButton->setObjectName("optionCRadioButton");
        optionCRadioButton->setGeometry(QRect(90, 210, 161, 21));
        optionDRadioButton = new QRadioButton(centralwidget);
        optionDRadioButton->setObjectName("optionDRadioButton");
        optionDRadioButton->setGeometry(QRect(90, 240, 161, 21));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(90, 280, 80, 24));
        QuizWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QuizWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        QuizWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QuizWindow);
        statusbar->setObjectName("statusbar");
        QuizWindow->setStatusBar(statusbar);

        retranslateUi(QuizWindow);

        QMetaObject::connectSlotsByName(QuizWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QuizWindow)
    {
        QuizWindow->setWindowTitle(QCoreApplication::translate("QuizWindow", "MainWindow", nullptr));
        questionLabel->setText(QCoreApplication::translate("QuizWindow", "QuizWindow", nullptr));
        optionARadioButton->setText(QCoreApplication::translate("QuizWindow", "Option A", nullptr));
        optionBRadioButton->setText(QCoreApplication::translate("QuizWindow", "Option B", nullptr));
        optionCRadioButton->setText(QCoreApplication::translate("QuizWindow", "Option C", nullptr));
        optionDRadioButton->setText(QCoreApplication::translate("QuizWindow", "Option D", nullptr));
        nextButton->setText(QCoreApplication::translate("QuizWindow", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuizWindow: public Ui_QuizWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZWINDOW_H
