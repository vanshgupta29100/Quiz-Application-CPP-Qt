#ifndef VIEWQUESTIONS_H
#define VIEWQUESTIONS_H

#include <QMainWindow>

namespace Ui {
class ViewQuestions;
}

class ViewQuestions : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewQuestions(QWidget *parent = nullptr);
    ~ViewQuestions();

private:
    Ui::ViewQuestions *ui;

    void loadQuestions();
};

#endif