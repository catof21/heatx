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
#include "design_grid.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    std::vector<Flow> flows;
    //std::list<Flow> flows;
    Flow newflow;

    ~MainWindow();
//public slots:
//    void recieveData(QVector);

//    void sendData(QVector);

private slots:
    void on_btn_ok_clicked();

    void on_addFlow_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    design_grid *dgrid;
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
    QGraphicsScene *design;

};

#endif // MAINWINDOW_H
