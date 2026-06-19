/********************************************************************************
** Form generated from reading UI file 'viewquestions.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWQUESTIONS_H
#define UI_VIEWQUESTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewQuestions
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTableWidget *questionTableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewQuestions)
    {
        if (ViewQuestions->objectName().isEmpty())
            ViewQuestions->setObjectName("ViewQuestions");
        ViewQuestions->resize(800, 600);
        centralwidget = new QWidget(ViewQuestions);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(420, 70, 111, 16));
        questionTableWidget = new QTableWidget(centralwidget);
        if (questionTableWidget->columnCount() < 7)
            questionTableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        questionTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        questionTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        questionTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        questionTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        questionTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        questionTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        questionTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        questionTableWidget->setObjectName("questionTableWidget");
        questionTableWidget->setGeometry(QRect(70, 150, 711, 192));
        questionTableWidget->setColumnCount(7);
        questionTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        ViewQuestions->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewQuestions);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ViewQuestions->setMenuBar(menubar);
        statusbar = new QStatusBar(ViewQuestions);
        statusbar->setObjectName("statusbar");
        ViewQuestions->setStatusBar(statusbar);

        retranslateUi(ViewQuestions);

        QMetaObject::connectSlotsByName(ViewQuestions);
    } // setupUi

    void retranslateUi(QMainWindow *ViewQuestions)
    {
        ViewQuestions->setWindowTitle(QCoreApplication::translate("ViewQuestions", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ViewQuestions", "All Questions", nullptr));
        QTableWidgetItem *___qtablewidgetitem = questionTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ViewQuestions", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = questionTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ViewQuestions", "Question", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = questionTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ViewQuestions", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = questionTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ViewQuestions", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = questionTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ViewQuestions", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = questionTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ViewQuestions", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = questionTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ViewQuestions", "Answer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewQuestions: public Ui_ViewQuestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWQUESTIONS_H
