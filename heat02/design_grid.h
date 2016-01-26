#ifndef DESIGN_GRID_H
#define DESIGN_GRID_H

#include <QDialog>

namespace Ui {
class design_grid;
}

class design_grid : public QDialog
{
    Q_OBJECT

public:
    explicit design_grid(QWidget *parent = 0);
    ~design_grid();

private:
    Ui::design_grid *ui;
};

#endif // DESIGN_GRID_H
