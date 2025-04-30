/********************************************************************************
** Form generated from reading UI file 'cell_user.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_USER_H
#define UI_CELL_USER_H

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

class Ui_Cell_User
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_del;
    QLineEdit *le_search;
    QPushButton *btn_import;
    QLabel *lb_title;
    QTableView *tableView;

    void setupUi(QWidget *Cell_User)
    {
        if (Cell_User->objectName().isEmpty())
            Cell_User->setObjectName(QString::fromUtf8("Cell_User"));
        Cell_User->resize(513, 371);
        gridLayout_2 = new QGridLayout(Cell_User);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(Cell_User);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        btn_del = new QPushButton(widget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));

        gridLayout->addWidget(btn_del, 0, 3, 1, 1);

        le_search = new QLineEdit(widget);
        le_search->setObjectName(QString::fromUtf8("le_search"));

        gridLayout->addWidget(le_search, 0, 1, 1, 1);

        btn_import = new QPushButton(widget);
        btn_import->setObjectName(QString::fromUtf8("btn_import"));

        gridLayout->addWidget(btn_import, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        lb_title = new QLabel(Cell_User);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);

        tableView = new QTableView(Cell_User);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(Cell_User);

        QMetaObject::connectSlotsByName(Cell_User);
    } // setupUi

    void retranslateUi(QWidget *Cell_User)
    {
        Cell_User->setWindowTitle(QCoreApplication::translate("Cell_User", "Form", nullptr));
        Cell_User->setProperty("name", QVariant(QCoreApplication::translate("Cell_User", "title", nullptr)));
        label->setText(QCoreApplication::translate("Cell_User", "\346\220\234\347\264\242", nullptr));
        label->setProperty("name", QVariant(QCoreApplication::translate("Cell_User", "lb", nullptr)));
        btn_del->setText(QCoreApplication::translate("Cell_User", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        btn_del->setProperty("name", QVariant(QCoreApplication::translate("Cell_User", "btn", nullptr)));
        le_search->setProperty("name", QVariant(QCoreApplication::translate("Cell_User", "le", nullptr)));
        btn_import->setText(QCoreApplication::translate("Cell_User", "\347\224\250\346\210\267\345\257\274\345\205\245", nullptr));
        btn_import->setProperty("name", QVariant(QCoreApplication::translate("Cell_User", "btn", nullptr)));
        lb_title->setText(QCoreApplication::translate("Cell_User", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        lb_title->setProperty("name", QVariant(QCoreApplication::translate("Cell_User", "title", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Cell_User: public Ui_Cell_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_USER_H
