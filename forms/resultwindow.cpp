#include "resultwindow.h"
#include "ui_resultwindow.h"

ResultWindow::ResultWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ResultWindow)
{
    ui->setupUi(this);
}

ResultWindow::~ResultWindow()
{
    delete ui;
}

void ResultWindow::setResult(
    int totalQuestions,
    int correctAnswers
    )
{
    int wrongAnswers =
        totalQuestions - correctAnswers;

    double percentage = ((double)correctAnswers / totalQuestions) * 100.0;

    ui->totalQuestionsLabel->setText(
        "Total Questions : "
        + QString::number(totalQuestions)
        );

    ui->correctAnswersLabel->setText(
        "Correct Answers : "
        + QString::number(correctAnswers)
        );

    ui->wrongAnswersLabel->setText(
        "Wrong Answers : "
        + QString::number(wrongAnswers)
        );

    ui->percentageLabel->setText(
        "Percentage : "
        + QString::number(
            percentage,
            'f',
            2
            )
        + "%"
        );
}

void ResultWindow::on_closeButton_clicked()
{
    close();
}