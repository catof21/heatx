/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *hot_1;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *STemp;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *TTemp;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *HCap;
    QLabel *label_6;
    QWidget *hot_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLineEdit *STemp_2;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *TTemp_2;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *HCap_2;
    QLabel *label_12;
    QWidget *cold_1;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QLineEdit *STemp_3;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *TTemp_3;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *HCap_3;
    QLabel *label_18;
    QWidget *cold_2;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_4;
    QLabel *label_19;
    QLineEdit *STemp_4;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *TTemp_4;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *HCap_4;
    QLabel *label_24;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_25;
    QLineEdit *deltaT;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(403, 342);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 401, 251));
        hot_1 = new QWidget();
        hot_1->setObjectName(QStringLiteral("hot_1"));
        widget = new QWidget(hot_1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 371, 191));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        STemp = new QLineEdit(widget);
        STemp->setObjectName(QStringLiteral("STemp"));

        gridLayout->addWidget(STemp, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        TTemp = new QLineEdit(widget);
        TTemp->setObjectName(QStringLiteral("TTemp"));

        gridLayout->addWidget(TTemp, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        HCap = new QLineEdit(widget);
        HCap->setObjectName(QStringLiteral("HCap"));

        gridLayout->addWidget(HCap, 2, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        tabWidget->addTab(hot_1, QString());
        hot_2 = new QWidget();
        hot_2->setObjectName(QStringLiteral("hot_2"));
        layoutWidget = new QWidget(hot_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 191));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        STemp_2 = new QLineEdit(layoutWidget);
        STemp_2->setObjectName(QStringLiteral("STemp_2"));

        gridLayout_2->addWidget(STemp_2, 0, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 2, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        TTemp_2 = new QLineEdit(layoutWidget);
        TTemp_2->setObjectName(QStringLiteral("TTemp_2"));

        gridLayout_2->addWidget(TTemp_2, 1, 1, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 1, 2, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        HCap_2 = new QLineEdit(layoutWidget);
        HCap_2->setObjectName(QStringLiteral("HCap_2"));

        gridLayout_2->addWidget(HCap_2, 2, 1, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 2, 1, 1);

        tabWidget->addTab(hot_2, QString());
        cold_1 = new QWidget();
        cold_1->setObjectName(QStringLiteral("cold_1"));
        layoutWidget_2 = new QWidget(cold_1);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 371, 191));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        STemp_3 = new QLineEdit(layoutWidget_2);
        STemp_3->setObjectName(QStringLiteral("STemp_3"));

        gridLayout_3->addWidget(STemp_3, 0, 1, 1, 1);

        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 0, 2, 1, 1);

        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 1, 0, 1, 1);

        TTemp_3 = new QLineEdit(layoutWidget_2);
        TTemp_3->setObjectName(QStringLiteral("TTemp_3"));

        gridLayout_3->addWidget(TTemp_3, 1, 1, 1, 1);

        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 1, 2, 1, 1);

        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_3->addWidget(label_17, 2, 0, 1, 1);

        HCap_3 = new QLineEdit(layoutWidget_2);
        HCap_3->setObjectName(QStringLiteral("HCap_3"));

        gridLayout_3->addWidget(HCap_3, 2, 1, 1, 1);

        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 2, 2, 1, 1);

        tabWidget->addTab(cold_1, QString());
        cold_2 = new QWidget();
        cold_2->setObjectName(QStringLiteral("cold_2"));
        layoutWidget_3 = new QWidget(cold_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 371, 191));
        gridLayout_4 = new QGridLayout(layoutWidget_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_4->addWidget(label_19, 0, 0, 1, 1);

        STemp_4 = new QLineEdit(layoutWidget_3);
        STemp_4->setObjectName(QStringLiteral("STemp_4"));

        gridLayout_4->addWidget(STemp_4, 0, 1, 1, 1);

        label_20 = new QLabel(layoutWidget_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_4->addWidget(label_20, 0, 2, 1, 1);

        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_4->addWidget(label_21, 1, 0, 1, 1);

        TTemp_4 = new QLineEdit(layoutWidget_3);
        TTemp_4->setObjectName(QStringLiteral("TTemp_4"));

        gridLayout_4->addWidget(TTemp_4, 1, 1, 1, 1);

        label_22 = new QLabel(layoutWidget_3);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_4->addWidget(label_22, 1, 2, 1, 1);

        label_23 = new QLabel(layoutWidget_3);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_4->addWidget(label_23, 2, 0, 1, 1);

        HCap_4 = new QLineEdit(layoutWidget_3);
        HCap_4->setObjectName(QStringLiteral("HCap_4"));

        gridLayout_4->addWidget(HCap_4, 2, 1, 1, 1);

        label_24 = new QLabel(layoutWidget_3);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_4->addWidget(label_24, 2, 2, 1, 1);

        tabWidget->addTab(cold_2, QString());
        btn_ok = new QPushButton(Dialog);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(100, 300, 80, 21));
        btn_cancel = new QPushButton(Dialog);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(210, 300, 80, 21));
        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 260, 163, 25));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(widget1);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout->addWidget(label_25);

        deltaT = new QLineEdit(widget1);
        deltaT->setObjectName(QStringLiteral("deltaT"));

        horizontalLayout->addWidget(deltaT);


        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "Supply Temp", 0));
        label_2->setText(QApplication::translate("Dialog", "Celsius", 0));
        label_3->setText(QApplication::translate("Dialog", "Target Temp", 0));
        label_4->setText(QApplication::translate("Dialog", "Celsius", 0));
        label_5->setText(QApplication::translate("Dialog", "Heat Capacity", 0));
        label_6->setText(QApplication::translate("Dialog", "kW/C", 0));
        tabWidget->setTabText(tabWidget->indexOf(hot_1), QApplication::translate("Dialog", "Hot 1", 0));
        label_7->setText(QApplication::translate("Dialog", "Supply Temp", 0));
        label_8->setText(QApplication::translate("Dialog", "Celsius", 0));
        label_9->setText(QApplication::translate("Dialog", "Target Temp", 0));
        label_10->setText(QApplication::translate("Dialog", "Celsius", 0));
        label_11->setText(QApplication::translate("Dialog", "Heat Capacity", 0));
        label_12->setText(QApplication::translate("Dialog", "kW/C", 0));
        tabWidget->setTabText(tabWidget->indexOf(hot_2), QApplication::translate("Dialog", "Hot 2", 0));
        label_13->setText(QApplication::translate("Dialog", "Supply Temp", 0));
        label_14->setText(QApplication::translate("Dialog", "Celsius", 0));
        label_15->setText(QApplication::translate("Dialog", "Target Temp", 0));
        label_16->setText(QApplication::translate("Dialog", "Celsius", 0));
        label_17->setText(QApplication::translate("Dialog", "Heat Capacity", 0));
        label_18->setText(QApplication::translate("Dialog", "kW/C", 0));
        tabWidget->setTabText(tabWidget->indexOf(cold_1), QApplication::translate("Dialog", "Cold 1", 0));
        label_19->setText(QApplication::translate("Dialog", "Supply Temp", 0));
        label_20->setText(QApplication::translate("Dialog", "Celsius", 0));
        label_21->setText(QApplication::translate("Dialog", "Target Temp", 0));
        label_22->setText(QApplication::translate("Dialog", "Celsius", 0));
        label_23->setText(QApplication::translate("Dialog", "Heat Capacity", 0));
        label_24->setText(QApplication::translate("Dialog", "kW/C", 0));
        tabWidget->setTabText(tabWidget->indexOf(cold_2), QApplication::translate("Dialog", "Cold 2", 0));
        btn_ok->setText(QApplication::translate("Dialog", "OK", 0));
        btn_cancel->setText(QApplication::translate("Dialog", "Cancel", 0));
        label_25->setText(QApplication::translate("Dialog", "Delta T", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
