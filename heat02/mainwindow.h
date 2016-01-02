#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <flow.h>
#include <vector>
#include <list>
#include <QString>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    std::list<Flow> flows;
    Flow newflow;

    ~MainWindow();

private slots:
    void on_btn_ok_clicked();

    void on_addFlow_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *intervalbal;
    QGraphicsLineItem *line;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsTextItem *text;
    QGraphicsScene *heatflow1;
    QGraphicsScene *graph;
    QGraphicsScene *design;

};

#endif // MAINWINDOW_H
