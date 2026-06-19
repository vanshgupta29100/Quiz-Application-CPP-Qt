/********************************************************************************
** Form generated from reading UI file 'resultwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTWINDOW_H
#define UI_RESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultWindow
{
public:
    QWidget *centralwidget;
    QLabel *resultTitleLabel;
    QLabel *totalQuestionsLabel;
    QLabel *correctAnswersLabel;
    QLabel *wrongAnswersLabel;
    QLabel *percentageLabel;
    QPushButton *closeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ResultWindow)
    {
        if (ResultWindow->objectName().isEmpty())
            ResultWindow->setObjectName("ResultWindow");
        ResultWindow->resize(800, 600);
        centralwidget = new QWidget(ResultWindow);
        centralwidget->setObjectName("centralwidget");
        resultTitleLabel = new QLabel(centralwidget);
        resultTitleLabel->setObjectName("resultTitleLabel");
        resultTitleLabel->setGeometry(QRect(100, 80, 49, 16));
        totalQuestionsLabel = new QLabel(centralwidget);
        totalQuestionsLabel->setObjectName("totalQuestionsLabel");
        totalQuestionsLabel->setGeometry(QRect(100, 110, 101, 16));
        correctAnswersLabel = new QLabel(centralwidget);
        correctAnswersLabel->setObjectName("correctAnswersLabel");
        correctAnswersLabel->setGeometry(QRect(100, 140, 101, 16));
        wrongAnswersLabel = new QLabel(centralwidget);
        wrongAnswersLabel->setObjectName("wrongAnswersLabel");
        wrongAnswersLabel->setGeometry(QRect(100, 170, 101, 16));
        percentageLabel = new QLabel(centralwidget);
        percentageLabel->setObjectName("percentageLabel");
        percentageLabel->setGeometry(QRect(100, 200, 101, 16));
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(100, 240, 80, 24));
        ResultWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ResultWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ResultWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ResultWindow);
        statusbar->setObjectName("statusbar");
        ResultWindow->setStatusBar(statusbar);

        retranslateUi(ResultWindow);

        QMetaObject::connectSlotsByName(ResultWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ResultWindow)
    {
        ResultWindow->setWindowTitle(QCoreApplication::translate("ResultWindow", "MainWindow", nullptr));
        resultTitleLabel->setText(QCoreApplication::translate("ResultWindow", "Result ", nullptr));
        totalQuestionsLabel->setText(QCoreApplication::translate("ResultWindow", "Total Questions", nullptr));
        correctAnswersLabel->setText(QCoreApplication::translate("ResultWindow", "Correct Answers", nullptr));
        wrongAnswersLabel->setText(QCoreApplication::translate("ResultWindow", "Wrong Answers", nullptr));
        percentageLabel->setText(QCoreApplication::translate("ResultWindow", "Percentage", nullptr));
        closeButton->setText(QCoreApplication::translate("ResultWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultWindow: public Ui_ResultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTWINDOW_H
