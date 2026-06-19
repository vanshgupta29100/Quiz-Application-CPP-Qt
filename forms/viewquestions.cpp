#include "viewquestions.h"
#include "ui_viewquestions.h"
#include "editquestion.h"

#include <QMessageBox>
#include <QSqlQuery>

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
void ViewQuestions::on_deleteButton_clicked()
{
    int currentRow =
        ui->questionTableWidget->currentRow();

    if(currentRow < 0)
    {
        QMessageBox::warning(
            this,
            "Error",
            "Please Select A Question"
            );

        return;
    }

    int questionId =
        ui->questionTableWidget
            ->item(currentRow,0)
            ->text()
            .toInt();

    QSqlQuery query;

    query.prepare(
        "DELETE FROM questions "
        "WHERE question_id = ?"
        );

    query.addBindValue(questionId);

    if(query.exec())
    {
        QMessageBox::information(
            this,
            "Success",
            "Question Deleted Successfully"
            );

        loadQuestions();
    }
    else
    {
        QMessageBox::warning(
            this,
            "Error",
            "Unable To Delete Question"
            );
    }
}

void ViewQuestions::on_editButton_clicked()
{
    int currentRow =
        ui->questionTableWidget->currentRow();

    if(currentRow < 0)
    {
        return;
    }

    EditQuestion *editWindow =
        new EditQuestion();

    editWindow->setQuestionData(
        ui->questionTableWidget
            ->item(currentRow,0)
            ->text()
            .toInt(),

        ui->questionTableWidget
            ->item(currentRow,1)
            ->text(),

        ui->questionTableWidget
            ->item(currentRow,2)
            ->text(),

        ui->questionTableWidget
            ->item(currentRow,3)
            ->text(),

        ui->questionTableWidget
            ->item(currentRow,4)
            ->text(),

        ui->questionTableWidget
            ->item(currentRow,5)
            ->text(),

        ui->questionTableWidget
            ->item(currentRow,6)
            ->text()
        );

    editWindow->show();
}

