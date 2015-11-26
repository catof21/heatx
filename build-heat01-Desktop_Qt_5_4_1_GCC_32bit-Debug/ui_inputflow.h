/********************************************************************************
** Form generated from reading UI file 'inputflow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTFLOW_H
#define UI_INPUTFLOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputFlow
{
public:
    QDialogButtonBox *buttonBox;
    QRadioButton *IsHeat;
    QRadioButton *isCold;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *FlowId;
    QLabel *label_2;
    QLineEdit *SupplyT;
    QLabel *label_3;
    QLineEdit *TargetT;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *HeatCap;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *InputFlow)
    {
        if (InputFlow->objectName().isEmpty())
            InputFlow->setObjectName(QStringLiteral("InputFlow"));
        InputFlow->resize(400, 300);
        buttonBox = new QDialogButtonBox(InputFlow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(200, 240, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        IsHeat = new QRadioButton(InputFlow);
        IsHeat->setObjectName(QStringLiteral("IsHeat"));
        IsHeat->setGeometry(QRect(80, 40, 81, 21));
        isCold = new QRadioButton(InputFlow);
        isCold->setObjectName(QStringLiteral("isCold"));
        isCold->setGeometry(QRect(230, 40, 81, 21));
        widget = new QWidget(InputFlow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 70, 271, 151));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        FlowId = new QLineEdit(widget);
        FlowId->setObjectName(QStringLiteral("FlowId"));

        gridLayout->addWidget(FlowId, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        SupplyT = new QLineEdit(widget);
        SupplyT->setObjectName(QStringLiteral("SupplyT"));

        gridLayout->addWidget(SupplyT, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        TargetT = new QLineEdit(widget);
        TargetT->setObjectName(QStringLiteral("TargetT"));

        gridLayout->addWidget(TargetT, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        HeatCap = new QLineEdit(widget);
        HeatCap->setObjectName(QStringLiteral("HeatCap"));

        gridLayout->addWidget(HeatCap, 3, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 2, 1, 1);


        retranslateUi(InputFlow);
        QObject::connect(buttonBox, SIGNAL(accepted()), InputFlow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InputFlow, SLOT(reject()));

        QMetaObject::connectSlotsByName(InputFlow);
    } // setupUi

    void retranslateUi(QDialog *InputFlow)
    {
        InputFlow->setWindowTitle(QApplication::translate("InputFlow", "Dialog", 0));
        IsHeat->setText(QApplication::translate("InputFlow", "Heat Flow", 0));
        isCold->setText(QApplication::translate("InputFlow", "Cold Flow", 0));
        label_2->setText(QApplication::translate("InputFlow", "Supply Temparature", 0));
        label_3->setText(QApplication::translate("InputFlow", "Target Temparature", 0));
        label->setText(QApplication::translate("InputFlow", "Flow Name / ID", 0));
        label_4->setText(QApplication::translate("InputFlow", "Heat Capacity Flowrate", 0));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("InputFlow", "Celsius", 0));
        label_7->setText(QApplication::translate("InputFlow", "Celsius", 0));
        label_8->setText(QApplication::translate("InputFlow", "kW/C", 0));
    } // retranslateUi

};

namespace Ui {
    class InputFlow: public Ui_InputFlow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFLOW_H
