#ifndef QUIZWINDOW_H
#define QUIZWINDOW_H

#include <QMainWindow>
#include <QVector>

namespace Ui {
class QuizWindow;

}

class QuizWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QuizWindow(QWidget *parent = nullptr);
    ~QuizWindow();

private slots:
    void on_nextButton_clicked();

private:
    Ui::QuizWindow *ui;

    QVector<int> questionIds;
    QVector<QString> questions;
    QVector<QString> optionA;
    QVector<QString> optionB;
    QVector<QString> optionC;
    QVector<QString> optionD;
    QVector<QString> answers;

    int currentQuestion=0;
    int score=0;


    void loadQuestions();
    void displayQuestion();
};

#endif