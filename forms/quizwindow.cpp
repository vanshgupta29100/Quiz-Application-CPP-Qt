#include "quizwindow.h"
#include "ui_quizwindow.h"
#include "resultwindow.h"

#include <QSqlQuery>
#include <QMessageBox>

QuizWindow::QuizWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QuizWindow)
{
    ui->setupUi(this);

    currentQuestion = 0;

    loadQuestions();

    displayQuestion();
}

QuizWindow::~QuizWindow()
{
    delete ui;
}

void QuizWindow::loadQuestions()
{
    QSqlQuery query;

    query.exec(
        "SELECT * FROM questions"
        );

    while(query.next())
    {
        questionIds.push_back(
            query.value("question_id").toInt()
            );

        questions.push_back(
            query.value("question").toString()
            );

        optionA.push_back(
            query.value("option_a").toString()
            );

        optionB.push_back(
            query.value("option_b").toString()
            );

        optionC.push_back(
            query.value("option_c").toString()
            );

        optionD.push_back(
            query.value("option_d").toString()
            );

        answers.push_back(
            query.value("correct_answer").toString()
            );
    }
}

void QuizWindow::displayQuestion()
{
    if(currentQuestion >= questions.size())
        return;

    ui->questionLabel->setText(
        questions[currentQuestion]
        );

    ui->optionARadioButton->setText(
        optionA[currentQuestion]
        );

    ui->optionBRadioButton->setText(
        optionB[currentQuestion]
        );

    ui->optionCRadioButton->setText(
        optionC[currentQuestion]
        );

    ui->optionDRadioButton->setText(
        optionD[currentQuestion]
        );
}

void QuizWindow::on_nextButton_clicked()
{
    QString selectedAnswer = "";

    if(ui->optionARadioButton->isChecked())
        selectedAnswer = "A";
    else if(ui->optionBRadioButton->isChecked())
        selectedAnswer = "B";
    else if(ui->optionCRadioButton->isChecked())
        selectedAnswer = "C";
    else if(ui->optionDRadioButton->isChecked())
        selectedAnswer = "D";

    if(selectedAnswer == answers[currentQuestion])
        score++;

    currentQuestion++;

    if(currentQuestion < questions.size())
    {
        ui->optionARadioButton->setAutoExclusive(false);
        ui->optionBRadioButton->setAutoExclusive(false);
        ui->optionCRadioButton->setAutoExclusive(false);
        ui->optionDRadioButton->setAutoExclusive(false);

        ui->optionARadioButton->setChecked(false);
        ui->optionBRadioButton->setChecked(false);
        ui->optionCRadioButton->setChecked(false);
        ui->optionDRadioButton->setChecked(false);

        ui->optionARadioButton->setAutoExclusive(true);
        ui->optionBRadioButton->setAutoExclusive(true);
        ui->optionCRadioButton->setAutoExclusive(true);
        ui->optionDRadioButton->setAutoExclusive(true);

        displayQuestion();
    }
    else
    {
        ResultWindow *result =
            new ResultWindow();

        result->setResult(
            questions.size(),
            score
            );

        result->show();

        close();
    }
}