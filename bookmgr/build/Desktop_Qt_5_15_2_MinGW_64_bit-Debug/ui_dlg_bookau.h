/********************************************************************************
** Form generated from reading UI file 'dlg_bookau.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_BOOKAU_H
#define UI_DLG_BOOKAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_BookAU
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *le_name;
    QLabel *label_2;
    QLineEdit *le_press;
    QLabel *label_3;
    QLineEdit *le_cnt;
    QLabel *label_4;
    QComboBox *cb1;
    QLabel *label_5;
    QComboBox *cb2;
    QLabel *label_6;
    QComboBox *cb3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_ok;
    QPushButton *btncancel;

    void setupUi(QDialog *Dlg_BookAU)
    {
        if (Dlg_BookAU->objectName().isEmpty())
            Dlg_BookAU->setObjectName(QString::fromUtf8("Dlg_BookAU"));
        Dlg_BookAU->resize(335, 359);
        gridLayout = new QGridLayout(Dlg_BookAU);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Dlg_BookAU);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_name = new QLineEdit(Dlg_BookAU);
        le_name->setObjectName(QString::fromUtf8("le_name"));

        gridLayout->addWidget(le_name, 0, 1, 1, 1);

        label_2 = new QLabel(Dlg_BookAU);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        le_press = new QLineEdit(Dlg_BookAU);
        le_press->setObjectName(QString::fromUtf8("le_press"));

        gridLayout->addWidget(le_press, 1, 1, 1, 1);

        label_3 = new QLabel(Dlg_BookAU);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        le_cnt = new QLineEdit(Dlg_BookAU);
        le_cnt->setObjectName(QString::fromUtf8("le_cnt"));

        gridLayout->addWidget(le_cnt, 2, 1, 1, 1);

        label_4 = new QLabel(Dlg_BookAU);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        cb1 = new QComboBox(Dlg_BookAU);
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->addItem(QString());
        cb1->setObjectName(QString::fromUtf8("cb1"));

        gridLayout->addWidget(cb1, 3, 1, 1, 1);

        label_5 = new QLabel(Dlg_BookAU);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        cb2 = new QComboBox(Dlg_BookAU);
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->addItem(QString());
        cb2->setObjectName(QString::fromUtf8("cb2"));

        gridLayout->addWidget(cb2, 4, 1, 1, 1);

        label_6 = new QLabel(Dlg_BookAU);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        cb3 = new QComboBox(Dlg_BookAU);
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->addItem(QString());
        cb3->setObjectName(QString::fromUtf8("cb3"));

        gridLayout->addWidget(cb3, 5, 1, 1, 1);

        widget = new QWidget(Dlg_BookAU);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_ok = new QPushButton(widget);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        btncancel = new QPushButton(widget);
        btncancel->setObjectName(QString::fromUtf8("btncancel"));

        horizontalLayout->addWidget(btncancel);


        gridLayout->addWidget(widget, 6, 0, 1, 2);


        retranslateUi(Dlg_BookAU);

        QMetaObject::connectSlotsByName(Dlg_BookAU);
    } // setupUi

    void retranslateUi(QDialog *Dlg_BookAU)
    {
        Dlg_BookAU->setWindowTitle(QCoreApplication::translate("Dlg_BookAU", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dlg_BookAU", "\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_BookAU", "\344\273\267\346\240\274", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_BookAU", "\346\225\260\351\207\217", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_BookAU", "\347\261\273\345\236\2131", nullptr));
        cb1->setItemText(0, QCoreApplication::translate("Dlg_BookAU", "\345\212\250\344\275\234", nullptr));
        cb1->setItemText(1, QCoreApplication::translate("Dlg_BookAU", "\346\202\254\347\226\221", nullptr));
        cb1->setItemText(2, QCoreApplication::translate("Dlg_BookAU", "\346\201\220\346\200\226", nullptr));
        cb1->setItemText(3, QCoreApplication::translate("Dlg_BookAU", "\344\272\272\346\226\207", nullptr));
        cb1->setItemText(4, QCoreApplication::translate("Dlg_BookAU", "\345\216\206\345\217\262", nullptr));
        cb1->setItemText(5, QCoreApplication::translate("Dlg_BookAU", "\350\256\260\345\275\225", nullptr));
        cb1->setItemText(6, QCoreApplication::translate("Dlg_BookAU", "\347\210\261\346\203\205", nullptr));
        cb1->setItemText(7, QCoreApplication::translate("Dlg_BookAU", "\345\226\234\345\211\247", nullptr));
        cb1->setItemText(8, QString());
        cb1->setItemText(9, QString());
        cb1->setItemText(10, QString());

        label_5->setText(QCoreApplication::translate("Dlg_BookAU", "\347\261\273\345\236\2132", nullptr));
        cb2->setItemText(0, QCoreApplication::translate("Dlg_BookAU", "\345\212\250\344\275\234", nullptr));
        cb2->setItemText(1, QCoreApplication::translate("Dlg_BookAU", "\346\202\254\347\226\221", nullptr));
        cb2->setItemText(2, QCoreApplication::translate("Dlg_BookAU", "\346\201\220\346\200\226", nullptr));
        cb2->setItemText(3, QCoreApplication::translate("Dlg_BookAU", "\344\272\272\346\226\207", nullptr));
        cb2->setItemText(4, QCoreApplication::translate("Dlg_BookAU", "\345\216\206\345\217\262", nullptr));
        cb2->setItemText(5, QCoreApplication::translate("Dlg_BookAU", "\350\256\260\345\275\225", nullptr));
        cb2->setItemText(6, QCoreApplication::translate("Dlg_BookAU", "\347\210\261\346\203\205", nullptr));
        cb2->setItemText(7, QCoreApplication::translate("Dlg_BookAU", "\345\226\234\345\211\247", nullptr));
        cb2->setItemText(8, QString());

        label_6->setText(QCoreApplication::translate("Dlg_BookAU", "\347\261\273\345\236\2133", nullptr));
        cb3->setItemText(0, QCoreApplication::translate("Dlg_BookAU", "\345\212\250\344\275\234", nullptr));
        cb3->setItemText(1, QCoreApplication::translate("Dlg_BookAU", "\346\202\254\347\226\221", nullptr));
        cb3->setItemText(2, QCoreApplication::translate("Dlg_BookAU", "\346\201\220\346\200\226", nullptr));
        cb3->setItemText(3, QCoreApplication::translate("Dlg_BookAU", "\344\272\272\346\226\207", nullptr));
        cb3->setItemText(4, QCoreApplication::translate("Dlg_BookAU", "\345\216\206\345\217\262", nullptr));
        cb3->setItemText(5, QCoreApplication::translate("Dlg_BookAU", "\350\256\260\345\275\225", nullptr));
        cb3->setItemText(6, QCoreApplication::translate("Dlg_BookAU", "\347\210\261\346\203\205", nullptr));
        cb3->setItemText(7, QCoreApplication::translate("Dlg_BookAU", "\345\226\234\345\211\247", nullptr));
        cb3->setItemText(8, QString());
        cb3->setItemText(9, QString());
        cb3->setItemText(10, QString());
        cb3->setItemText(11, QString());

        btn_ok->setText(QCoreApplication::translate("Dlg_BookAU", "\347\241\256\345\256\232", nullptr));
        btncancel->setText(QCoreApplication::translate("Dlg_BookAU", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_BookAU: public Ui_Dlg_BookAU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_BOOKAU_H
