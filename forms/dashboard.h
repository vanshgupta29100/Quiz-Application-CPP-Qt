#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>

namespace Ui {
class Dashboard;
}

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_viewQuestionsButton_clicked();

private slots:
    void on_addQuestionButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dashboard *ui;
};

#endif