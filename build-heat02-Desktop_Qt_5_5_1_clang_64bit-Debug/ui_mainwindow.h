/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_25;
    QLineEdit *deltaT;
    QPushButton *btn_ok;
    QGraphicsView *graphicsView;
    QTableWidget *inputTable;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *inST;
    QLineEdit *inTT;
    QLineEdit *inHC;
    QPushButton *addFlow;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1193, 630);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 20, 150, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget_4);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout->addWidget(label_25);

        deltaT = new QLineEdit(layoutWidget_4);
        deltaT->setObjectName(QStringLiteral("deltaT"));

        horizontalLayout->addWidget(deltaT);

        btn_ok = new QPushButton(centralWidget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));
        btn_ok->setGeometry(QRect(10, 230, 80, 21));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 270, 611, 251));
        QFont font;
        font.setPointSize(9);
        graphicsView->setFont(font);
        inputTable = new QTableWidget(centralWidget);
        if (inputTable->columnCount() < 6)
            inputTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        inputTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        inputTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        inputTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        inputTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        inputTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        inputTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        inputTable->setObjectName(QStringLiteral("inputTable"));
        inputTable->setGeometry(QRect(10, 60, 611, 161));
        inputTable->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 0, 86, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 0, 86, 21));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(430, 0, 86, 21));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 20, 351, 33));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        inST = new QLineEdit(widget);
        inST->setObjectName(QStringLiteral("inST"));

        horizontalLayout_2->addWidget(inST);

        inTT = new QLineEdit(widget);
        inTT->setObjectName(QStringLiteral("inTT"));

        horizontalLayout_2->addWidget(inTT);

        inHC = new QLineEdit(widget);
        inHC->setObjectName(QStringLiteral("inHC"));

        horizontalLayout_2->addWidget(inHC);

        addFlow = new QPushButton(widget);
        addFlow->setObjectName(QStringLiteral("addFlow"));

        horizontalLayout_2->addWidget(addFlow);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget_4->raise();
        btn_ok->raise();
        graphicsView->raise();
        inputTable->raise();
        deltaT->raise();
        inST->raise();
        inTT->raise();
        inHC->raise();
        addFlow->raise();
        label->raise();
        label_3->raise();
        label_5->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(deltaT, inST);
        QWidget::setTabOrder(inST, inTT);
        QWidget::setTabOrder(inTT, inHC);
        QWidget::setTabOrder(inHC, addFlow);
        QWidget::setTabOrder(addFlow, btn_ok);
        QWidget::setTabOrder(btn_ok, inputTable);
        QWidget::setTabOrder(inputTable, graphicsView);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_25->setText(QApplication::translate("MainWindow", "DeltaT", 0));
        btn_ok->setText(QApplication::translate("MainWindow", "OK", 0));
        QTableWidgetItem *___qtablewidgetitem = inputTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "flow_id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = inputTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "STemp", 0));
        QTableWidgetItem *___qtablewidgetitem2 = inputTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "TTemp", 0));
        QTableWidgetItem *___qtablewidgetitem3 = inputTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "HeatCap", 0));
        QTableWidgetItem *___qtablewidgetitem4 = inputTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "dSTemp", 0));
        QTableWidgetItem *___qtablewidgetitem5 = inputTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "dTTemp", 0));
        label->setText(QApplication::translate("MainWindow", "Supply Temp", 0));
        label_3->setText(QApplication::translate("MainWindow", "Target Temp", 0));
        label_5->setText(QApplication::translate("MainWindow", "Heat Capacity", 0));
        addFlow->setText(QApplication::translate("MainWindow", "Add", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
