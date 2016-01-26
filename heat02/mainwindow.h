#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <flow.h>
#include <vector>
#include <iterator>
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
    std::vector<Flow> flows;
    std::vector<Flow> flows_b;
    std::vector<Flow> flows_a;
    Flow newflow;

    ~MainWindow();

private slots:
    void on_btn_ok_clicked();

    void on_addFlow_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *intervalbal;
    QGraphicsScene *hfcascade;
    QGraphicsLineItem *line;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsTextItem *text;
    QGraphicsPolygonItem *poligon;
    QPolygon poli;
    QFont header;
    QFont small;
    QGraphicsObject *object;
    QGraphicsScene *heatflow1;
    QGraphicsScene *graph;
    QGraphicsScene *grid;

};

#endif // MAINWINDOW_H
