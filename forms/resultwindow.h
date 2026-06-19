#ifndef RESULTWINDOW_H
#define RESULTWINDOW_H

#include <QMainWindow>

namespace Ui {
class ResultWindow;
}

class ResultWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ResultWindow(QWidget *parent = nullptr);
    ~ResultWindow();

    void setResult(
        int totalQuestions,
        int correctAnswers
        );

private slots:
    void on_closeButton_clicked();

private:
    Ui::ResultWindow *ui;
};

#endif