#include "design_grid.h"
#include "ui_design_grid.h"

design_grid::design_grid(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::design_grid)
{
    ui->setupUi(this);
}

design_grid::~design_grid()
{
    delete ui;
}
