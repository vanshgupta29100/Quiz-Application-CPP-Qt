#include "questionmanager.h"
#include "ui_questionmanager.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

QuestionManager::QuestionManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QuestionManager)
{
    ui->setupUi(this);
}

QuestionManager::~QuestionManager()
{
    delete ui;
}

void QuestionManager::on_saveButton_clicked()
{
    QString question =
        ui->questionTextEdit->toPlainText();

    QString optionA =
        ui->optionALineEdit->text();

    QString optionB =
        ui->optionBLineEdit->text();

    QString optionC =
        ui->optionCLineEdit->text();

    QString optionD =
        ui->optionDLineEdit->text();

    QString correctAnswer =
        ui->correctAnswerLineEdit->text();

    QSqlQuery query;

    query.prepare(
        "INSERT INTO questions "
        "(question, option_a, option_b, option_c, option_d, correct_answer) "
        "VALUES (?, ?, ?, ?, ?, ?)"
        );

    query.addBindValue(question);
    query.addBindValue(optionA);
    query.addBindValue(optionB);
    query.addBindValue(optionC);
    query.addBindValue(optionD);
    query.addBindValue(correctAnswer);

    if(query.exec())
    {
        QMessageBox::information(
            this,
            "Success",
            "Question Saved Successfully"
            );

        ui->questionTextEdit->clear();
        ui->optionALineEdit->clear();
        ui->optionBLineEdit->clear();
        ui->optionCLineEdit->clear();
        ui->optionDLineEdit->clear();
        ui->correctAnswerLineEdit->clear();
    }
    else
    {
        QMessageBox::warning(
            this,
            "Error",
            query.lastError().text()
            );
    }
}