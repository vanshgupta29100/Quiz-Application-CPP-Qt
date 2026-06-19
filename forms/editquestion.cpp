#include "editquestion.h"
#include "ui_editquestion.h"

#include <QSqlQuery>
#include <QMessageBox>

EditQuestion::EditQuestion(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditQuestion)
{
    ui->setupUi(this);
}

EditQuestion::~EditQuestion()
{
    delete ui;
}

void EditQuestion::setQuestionData(
    int id,
    QString question,
    QString optionA,
    QString optionB,
    QString optionC,
    QString optionD,
    QString answer
    )
{
    questionId = id;

    ui->questionTextEdit->setPlainText(question);

    ui->optionALineEdit->setText(optionA);
    ui->optionBLineEdit->setText(optionB);
    ui->optionCLineEdit->setText(optionC);
    ui->optionDLineEdit->setText(optionD);

    ui->correctAnswerLineEdit->setText(answer);
}

void EditQuestion::on_updateButton_clicked()
{
    QSqlQuery query;

    query.prepare(
        "UPDATE questions SET "
        "question=?, "
        "option_a=?, "
        "option_b=?, "
        "option_c=?, "
        "option_d=?, "
        "correct_answer=? "
        "WHERE question_id=?"
        );

    query.addBindValue(
        ui->questionTextEdit->toPlainText()
        );

    query.addBindValue(
        ui->optionALineEdit->text()
        );

    query.addBindValue(
        ui->optionBLineEdit->text()
        );

    query.addBindValue(
        ui->optionCLineEdit->text()
        );

    query.addBindValue(
        ui->optionDLineEdit->text()
        );

    query.addBindValue(
        ui->correctAnswerLineEdit->text()
        );

    query.addBindValue(questionId);

    if(query.exec())
    {
        QMessageBox::information(
            this,
            "Success",
            "Question Updated Successfully"
            );

        close();
    }
    else
    {
        QMessageBox::warning(
            this,
            "Error",
            "Unable To Update Question"
            );
    }
}