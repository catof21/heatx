/********************************************************************************
** Form generated from reading UI file 'design_grid.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGN_GRID_H
#define UI_DESIGN_GRID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_design_grid
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;

    void setupUi(QDialog *design_grid)
    {
        if (design_grid->objectName().isEmpty())
            design_grid->setObjectName(QStringLiteral("design_grid"));
        design_grid->resize(630, 459);
        graphicsView = new QGraphicsView(design_grid);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 30, 611, 411));
        label = new QLabel(design_grid);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 611, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(design_grid);

        QMetaObject::connectSlotsByName(design_grid);
    } // setupUi

    void retranslateUi(QDialog *design_grid)
    {
        design_grid->setWindowTitle(QApplication::translate("design_grid", "Dialog", 0));
        label->setText(QApplication::translate("design_grid", "Design Grid", 0));
    } // retranslateUi

};

namespace Ui {
    class design_grid: public Ui_design_grid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGN_GRID_H
