/********************************************************************************
** Form generated from reading UI file 'cell_record.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_RECORD_H
#define UI_CELL_RECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Record
{
public:
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_clear;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_search;
    QPushButton *btn_bk;
    QLabel *lb_title;

    void setupUi(QWidget *Cell_Record)
    {
        if (Cell_Record->objectName().isEmpty())
            Cell_Record->setObjectName(QString::fromUtf8("Cell_Record"));
        Cell_Record->resize(612, 425);
        gridLayout_2 = new QGridLayout(Cell_Record);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView = new QTableView(Cell_Record);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);

        widget = new QWidget(Cell_Record);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_clear = new QPushButton(widget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        gridLayout->addWidget(btn_clear, 0, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 5, 1, 1);

        le_search = new QLineEdit(widget);
        le_search->setObjectName(QString::fromUtf8("le_search"));
        le_search->setMinimumSize(QSize(0, 0));
        le_search->setMaximumSize(QSize(400, 16777215));

        gridLayout->addWidget(le_search, 0, 1, 1, 1);

        btn_bk = new QPushButton(widget);
        btn_bk->setObjectName(QString::fromUtf8("btn_bk"));

        gridLayout->addWidget(btn_bk, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        lb_title = new QLabel(Cell_Record);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);


        retranslateUi(Cell_Record);

        QMetaObject::connectSlotsByName(Cell_Record);
    } // setupUi

    void retranslateUi(QWidget *Cell_Record)
    {
        Cell_Record->setWindowTitle(QCoreApplication::translate("Cell_Record", "Form", nullptr));
        btn_clear->setText(QCoreApplication::translate("Cell_Record", "\346\270\205\347\251\272\345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
        btn_clear->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "btn", nullptr)));
        label->setText(QCoreApplication::translate("Cell_Record", "\346\220\234\347\264\242", nullptr));
        label->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "lb", nullptr)));
        le_search->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "le", nullptr)));
        btn_bk->setText(QCoreApplication::translate("Cell_Record", "\345\275\222\350\277\230", nullptr));
        btn_bk->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "btn", nullptr)));
        lb_title->setText(QCoreApplication::translate("Cell_Record", "\345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
        lb_title->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "title", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Cell_Record: public Ui_Cell_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_RECORD_H
