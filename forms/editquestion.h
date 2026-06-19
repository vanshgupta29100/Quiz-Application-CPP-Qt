#ifndef EDITQUESTION_H
#define EDITQUESTION_H

#include <QMainWindow>

namespace Ui {
class EditQuestion;
}

class EditQuestion : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditQuestion(QWidget *parent = nullptr);
    ~EditQuestion();

    void setQuestionData(
        int id,
        QString question,
        QString optionA,
        QString optionB,
        QString optionC,
        QString optionD,
        QString answer
        );

private slots:
    void on_updateButton_clicked();

private:
    Ui::EditQuestion *ui;

    int questionId;
};

#endif