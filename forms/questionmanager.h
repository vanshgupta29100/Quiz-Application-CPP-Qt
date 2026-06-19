#ifndef QUESTIONMANAGER_H
#define QUESTIONMANAGER_H

#include <QMainWindow>

namespace Ui {
class QuestionManager;
}

class QuestionManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit QuestionManager(QWidget *parent = nullptr);
    ~QuestionManager();

private slots:
    void on_saveButton_clicked();

private:
    Ui::QuestionManager *ui;
};

#endif