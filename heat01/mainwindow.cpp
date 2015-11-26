#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <Flow.h>
#include <inputflow.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Flow flow;
    flow.setFlowName("H1");
    flow.setInFromTemp(180);
    flow.setInToTemp(80);
    flow.setInCap(20);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_flow_clicked()
{
   InputFlow i;
   i.SetFlows(&Flows);
   i.exec();
}
