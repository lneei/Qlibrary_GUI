/********************************************************************************
** Form generated from reading UI file 'cell_book.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_BOOK_H
#define UI_CELL_BOOK_H

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

class Ui_Cell_Book
{
public:
    QGridLayout *gridLayout_2;
    QLabel *lb_title;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *le_search;
    QPushButton *btn_del;
    QPushButton *btn_updata;
    QPushButton *btn_add;
    QPushButton *btn_get;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QWidget *Cell_Book)
    {
        if (Cell_Book->objectName().isEmpty())
            Cell_Book->setObjectName(QString::fromUtf8("Cell_Book"));
        Cell_Book->resize(796, 432);
        gridLayout_2 = new QGridLayout(Cell_Book);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lb_title = new QLabel(Cell_Book);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);

        widget = new QWidget(Cell_Book);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        le_search = new QLineEdit(widget);
        le_search->setObjectName(QString::fromUtf8("le_search"));
        le_search->setMinimumSize(QSize(0, 0));
        le_search->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(le_search, 0, 1, 1, 1);

        btn_del = new QPushButton(widget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));

        gridLayout->addWidget(btn_del, 0, 5, 1, 1);

        btn_updata = new QPushButton(widget);
        btn_updata->setObjectName(QString::fromUtf8("btn_updata"));

        gridLayout->addWidget(btn_updata, 0, 4, 1, 1);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        gridLayout->addWidget(btn_add, 0, 2, 1, 1);

        btn_get = new QPushButton(widget);
        btn_get->setObjectName(QString::fromUtf8("btn_get"));

        gridLayout->addWidget(btn_get, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 7, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        tableView = new QTableView(Cell_Book);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(Cell_Book);

        QMetaObject::connectSlotsByName(Cell_Book);
    } // setupUi

    void retranslateUi(QWidget *Cell_Book)
    {
        Cell_Book->setWindowTitle(QCoreApplication::translate("Cell_Book", "Form", nullptr));
        lb_title->setText(QCoreApplication::translate("Cell_Book", "\345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        lb_title->setProperty("name", QVariant(QCoreApplication::translate("Cell_Book", "title", nullptr)));
        le_search->setProperty("name", QVariant(QCoreApplication::translate("Cell_Book", "le", nullptr)));
        btn_del->setText(QCoreApplication::translate("Cell_Book", "\345\210\240\351\231\244\345\233\276\344\271\246", nullptr));
        btn_del->setProperty("name", QVariant(QCoreApplication::translate("Cell_Book", "btn", nullptr)));
        btn_updata->setText(QCoreApplication::translate("Cell_Book", "\344\277\256\346\224\271", nullptr));
        btn_updata->setProperty("name", QVariant(QCoreApplication::translate("Cell_Book", "btn", nullptr)));
        btn_add->setText(QCoreApplication::translate("Cell_Book", "\345\242\236\345\212\240", nullptr));
        btn_add->setProperty("name", QVariant(QCoreApplication::translate("Cell_Book", "btn", nullptr)));
        btn_get->setText(QCoreApplication::translate("Cell_Book", "\345\233\276\344\271\246\345\200\237\351\230\205", nullptr));
        btn_get->setProperty("name", QVariant(QCoreApplication::translate("Cell_Book", "btn", nullptr)));
        label->setText(QCoreApplication::translate("Cell_Book", "\346\220\234\347\264\242", nullptr));
        label->setProperty("name", QVariant(QCoreApplication::translate("Cell_Book", "lb", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Cell_Book: public Ui_Cell_Book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_BOOK_H
