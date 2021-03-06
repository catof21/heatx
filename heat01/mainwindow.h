#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Flow.h>
#include <inputflow.h>
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void SaveFlow(Flow *flow);
    std::vector<Flow> Flows;

    void on_add_flow_clicked();
private slots:


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
