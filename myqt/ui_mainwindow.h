/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QTreeWidget *CategoryList;
    QWidget *tab_2;
    QGridLayout *gridLayout1;
    QPushButton *pushButton_reminder3;
    QPushButton *pushButton_reminder2;
    QPushButton *pushButton_reminder1;
    QTreeWidget *ReminderList;
    QLabel *label_2;
    QWidget *tab;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QTreeWidget *time;
    QGraphicsView *graph;
    QWidget *tab_3;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 24, 771, 541));
        tabWidget->setTabPosition(QTabWidget::West);
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout = new QGridLayout(tab_4);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        label = new QLabel(tab_4);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 4, 0, 1, 1);

        CategoryList = new QTreeWidget(tab_4);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        CategoryList->setHeaderItem(__qtreewidgetitem);
        CategoryList->setObjectName("CategoryList");

        gridLayout->addWidget(CategoryList, 2, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout1 = new QGridLayout(tab_2);
        gridLayout1->setObjectName("gridLayout1");
        pushButton_reminder3 = new QPushButton(tab_2);
        pushButton_reminder3->setObjectName("pushButton_reminder3");

        gridLayout1->addWidget(pushButton_reminder3, 3, 0, 1, 1);

        pushButton_reminder2 = new QPushButton(tab_2);
        pushButton_reminder2->setObjectName("pushButton_reminder2");

        gridLayout1->addWidget(pushButton_reminder2, 5, 0, 1, 1);

        pushButton_reminder1 = new QPushButton(tab_2);
        pushButton_reminder1->setObjectName("pushButton_reminder1");

        gridLayout1->addWidget(pushButton_reminder1, 4, 0, 1, 1);

        ReminderList = new QTreeWidget(tab_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(1, QString::fromUtf8("BindCategory"));
        ReminderList->setHeaderItem(__qtreewidgetitem1);
        ReminderList->setObjectName("ReminderList");
        ReminderList->setLineWidth(1);
        ReminderList->setColumnCount(5);
        ReminderList->header()->setVisible(true);
        ReminderList->header()->setCascadingSectionResizes(false);

        gridLayout1->addWidget(ReminderList, 2, 0, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        dateEdit = new QDateEdit(tab);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(130, 10, 161, 21));
        dateEdit_2 = new QDateEdit(tab);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setGeometry(QRect(430, 10, 151, 21));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 91, 21));
        QFont font;
        font.setPointSize(13);
        label_3->setFont(font);
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 10, 91, 16));
        label_4->setFont(font);
        time = new QTreeWidget(tab);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem2->setText(0, QString::fromUtf8("1"));
        time->setHeaderItem(__qtreewidgetitem2);
        time->setObjectName("time");
        time->setGeometry(QRect(20, 40, 711, 241));
        time->setAllColumnsShowFocus(false);
        time->setColumnCount(2);
        graph = new QGraphicsView(tab);
        graph->setObjectName("graph");
        graph->setGeometry(QRect(20, 280, 711, 251));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        graphicsView = new QGraphicsView(tab_3);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 10, 721, 511));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add Category", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Categories", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Delete Category", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\345\210\206\347\273\204", nullptr));
        pushButton_reminder3->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        pushButton_reminder2->setText(QCoreApplication::translate("MainWindow", "Delete Reminder", nullptr));
        pushButton_reminder1->setText(QCoreApplication::translate("MainWindow", "Add Reminder", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = ReminderList->headerItem();
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("MainWindow", "isreached", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("MainWindow", "Message", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "TimeLimit(min)", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Reminders", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\346\217\220\351\206\222", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "start time", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "end time", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264\350\275\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
