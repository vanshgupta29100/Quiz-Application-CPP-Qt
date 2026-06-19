#include "viewquestions.h"
#include "ui_viewquestions.h"

#include <QSqlQuery>
#include <QTableWidgetItem>

ViewQuestions::ViewQuestions(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ViewQuestions)
{
    ui->setupUi(this);

    loadQuestions();
}

ViewQuestions::~ViewQuestions()
{
    delete ui;
}

void ViewQuestions::loadQuestions()
{
    ui->questionTableWidget->setRowCount(0);

    QSqlQuery query;

    query.exec(
        "SELECT * FROM questions"
        );

    int row = 0;

    while(query.next())
    {
        ui->questionTableWidget->insertRow(row);

        ui->questionTableWidget->setItem(
            row, 0,
            new QTableWidgetItem(
                query.value("question_id").toString()
                )
            );

        ui->questionTableWidget->setItem(
            row, 1,
            new QTableWidgetItem(
                query.value("question").toString()
                )
            );

        ui->questionTableWidget->setItem(
            row, 2,
            new QTableWidgetItem(
                query.value("option_a").toString()
                )
            );

        ui->questionTableWidget->setItem(
            row, 3,
            new QTableWidgetItem(
                query.value("option_b").toString()
                )
            );

        ui->questionTableWidget->setItem(
            row, 4,
            new QTableWidgetItem(
                query.value("option_c").toString()
                )
            );

        ui->questionTableWidget->setItem(
            row, 5,
            new QTableWidgetItem(
                query.value("option_d").toString()
                )
            );

        ui->questionTableWidget->setItem(
            row, 6,
            new QTableWidgetItem(
                query.value("correct_answer").toString()
                )
            );

        row++;
    }
}