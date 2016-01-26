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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QTableWidget *inputTable;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *inST;
    QLineEdit *inTT;
    QLineEdit *inHC;
    QPushButton *addFlow;
    QGraphicsView *graphicsView_2;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGraphicsView *graphicsView;
    QWidget *tab_2;
    QGraphicsView *curves;
    QWidget *tab_3;
    QGraphicsView *dgrid;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *tpinch_int;
    QLabel *tpinch_c;
    QLabel *qcmin;
    QLabel *qhmin;
    QLabel *label_9;
    QLabel *tpinch_h;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1193, 641);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 20, 194, 48));
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
        btn_ok->setGeometry(QRect(519, 230, 91, 41));
        inputTable = new QTableWidget(centralWidget);
        if (inputTable->columnCount() < 6)
            inputTable->setColumnCount(6);
        QFont font;
        font.setPointSize(9);
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
        inputTable->setGeometry(QRect(10, 60, 600, 171));
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
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 20, 351, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        inST = new QLineEdit(layoutWidget);
        inST->setObjectName(QStringLiteral("inST"));

        horizontalLayout_2->addWidget(inST);

        inTT = new QLineEdit(layoutWidget);
        inTT->setObjectName(QStringLiteral("inTT"));

        horizontalLayout_2->addWidget(inTT);

        inHC = new QLineEdit(layoutWidget);
        inHC->setObjectName(QStringLiteral("inHC"));

        horizontalLayout_2->addWidget(inHC);

        addFlow = new QPushButton(layoutWidget);
        addFlow->setObjectName(QStringLiteral("addFlow"));

        horizontalLayout_2->addWidget(addFlow);

        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(630, 60, 256, 511));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(630, 30, 251, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(920, 30, 251, 20));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(920, 300, 113, 32));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 230, 161, 41));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 260, 621, 341));
        tabWidget->setTabPosition(QTabWidget::South);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        graphicsView = new QGraphicsView(tab);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 600, 301));
        graphicsView->setFont(font);
        graphicsView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        curves = new QGraphicsView(tab_2);
        curves->setObjectName(QStringLiteral("curves"));
        curves->setGeometry(QRect(10, 10, 600, 301));
        curves->setFont(font);
        curves->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        dgrid = new QGraphicsView(tab_3);
        dgrid->setObjectName(QStringLiteral("dgrid"));
        dgrid->setGeometry(QRect(10, 10, 600, 301));
        dgrid->setFont(font);
        dgrid->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tabWidget->addTab(tab_3, QString());
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(920, 60, 251, 211));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        tpinch_int = new QLabel(widget);
        tpinch_int->setObjectName(QStringLiteral("tpinch_int"));

        gridLayout->addWidget(tpinch_int, 2, 1, 1, 1);

        tpinch_c = new QLabel(widget);
        tpinch_c->setObjectName(QStringLiteral("tpinch_c"));

        gridLayout->addWidget(tpinch_c, 4, 1, 1, 1);

        qcmin = new QLabel(widget);
        qcmin->setObjectName(QStringLiteral("qcmin"));

        gridLayout->addWidget(qcmin, 1, 1, 1, 1);

        qhmin = new QLabel(widget);
        qhmin->setObjectName(QStringLiteral("qhmin"));

        gridLayout->addWidget(qhmin, 0, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        tpinch_h = new QLabel(widget);
        tpinch_h->setObjectName(QStringLiteral("tpinch_h"));

        gridLayout->addWidget(tpinch_h, 3, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 0, 2, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 1, 2, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 2, 2, 1, 1);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 3, 2, 1, 1);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 4, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        tabWidget->raise();
        layoutWidget->raise();
        layoutWidget_4->raise();
        btn_ok->raise();
        inputTable->raise();
        label->raise();
        label_3->raise();
        label_5->raise();
        graphicsView_2->raise();
        label_2->raise();
        label_4->raise();
        label_6->raise();
        qhmin->raise();
        label_7->raise();
        qcmin->raise();
        label_8->raise();
        tpinch_int->raise();
        label_9->raise();
        tpinch_h->raise();
        label_10->raise();
        tpinch_c->raise();
        pushButton->raise();
        pushButton_2->raise();
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

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_25->setText(QApplication::translate("MainWindow", "DeltaT", 0));
        btn_ok->setText(QApplication::translate("MainWindow", "Calculate", 0));
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
        label_2->setText(QApplication::translate("MainWindow", "Cascade for Positive Heat Flows", 0));
        label_4->setText(QApplication::translate("MainWindow", "The Result", 0));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Remove_selected_line", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Heat Interval Balances", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Total Curves", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Design Grid", 0));
        label_8->setText(QApplication::translate("MainWindow", "T pinch (Interval)", 0));
        label_6->setText(QApplication::translate("MainWindow", "QHmin", 0));
        label_10->setText(QApplication::translate("MainWindow", "T pinch (Cold)", 0));
        label_7->setText(QApplication::translate("MainWindow", "QCmin", 0));
        tpinch_int->setText(QString());
        tpinch_c->setText(QString());
        qcmin->setText(QString());
        qhmin->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "T pinch (Hot)", 0));
        tpinch_h->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "KW", 0));
        label_12->setText(QApplication::translate("MainWindow", "KW", 0));
        label_13->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        label_14->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        label_15->setText(QApplication::translate("MainWindow", "\302\260C", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
