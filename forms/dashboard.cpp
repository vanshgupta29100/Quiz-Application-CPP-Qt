#include "dashboard.h"
#include "ui_dashboard.h"
#include "questionmanager.h"
#include "viewquestions.h"

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

void Dashboard::on_viewQuestionsButton_clicked()
{
    ViewQuestions *viewWindow =
        new ViewQuestions();

    viewWindow->show();
}

void Dashboard::on_addQuestionButton_clicked()
{
    QuestionManager *questionWindow =
        new QuestionManager();

    questionWindow->show();
}

Dashboard::~Dashboard()
{
    delete ui;
}
void Dashboard::on_pushButton_2_clicked()
{
    ViewQuestions *viewWindow =
        new ViewQuestions();

    viewWindow->show();
}

