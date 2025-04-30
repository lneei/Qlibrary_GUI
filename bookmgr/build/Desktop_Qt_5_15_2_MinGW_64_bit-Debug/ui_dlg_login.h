/********************************************************************************
** Form generated from reading UI file 'dlg_login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_LOGIN_H
#define UI_DLG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_Login
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *lb_title;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QLabel *lb_txt2;
    QLineEdit *le_user;
    QLabel *lb_txt1;
    QLineEdit *le_password;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QPushButton *btn_login;
    QPushButton *btn_exit;

    void setupUi(QDialog *Dlg_Login)
    {
        if (Dlg_Login->objectName().isEmpty())
            Dlg_Login->setObjectName(QString::fromUtf8("Dlg_Login"));
        Dlg_Login->resize(520, 379);
        Dlg_Login->setMinimumSize(QSize(0, 0));
        Dlg_Login->setMaximumSize(QSize(16777215, 16777215));
        Dlg_Login->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(Dlg_Login);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_4 = new QWidget(Dlg_Login);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(400, 40));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton = new QRadioButton(widget_4);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget_4);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(radioButton_2);


        gridLayout_3->addWidget(widget_4, 3, 0, 1, 1);

        widget_2 = new QWidget(Dlg_Login);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 60));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lb_title = new QLabel(widget_2);
        lb_title->setObjectName(QString::fromUtf8("lb_title"));
        lb_title->setMaximumSize(QSize(16777215, 60));
        lb_title->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 35px '\351\273\221\344\275\223';\n"
"}"));
        lb_title->setTextFormat(Qt::TextFormat::AutoText);
        lb_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_2, 0, 0, 1, 1);

        widget = new QWidget(Dlg_Login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(350, 80));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lb_txt2 = new QLabel(widget);
        lb_txt2->setObjectName(QString::fromUtf8("lb_txt2"));
        lb_txt2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 20px '\346\245\267\344\275\223';\n"
"}"));

        gridLayout_4->addWidget(lb_txt2, 1, 0, 1, 1);

        le_user = new QLineEdit(widget);
        le_user->setObjectName(QString::fromUtf8("le_user"));
        le_user->setMaximumSize(QSize(16777215, 16777215));
        le_user->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(le_user, 0, 1, 1, 1);

        lb_txt1 = new QLabel(widget);
        lb_txt1->setObjectName(QString::fromUtf8("lb_txt1"));
        lb_txt1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font: 20px '\346\245\267\344\275\223';\n"
"}"));
        lb_txt1->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_4->addWidget(lb_txt1, 0, 0, 1, 1);

        le_password = new QLineEdit(widget);
        le_password->setObjectName(QString::fromUtf8("le_password"));
        le_password->setStyleSheet(QString::fromUtf8(""));
        le_password->setEchoMode(QLineEdit::EchoMode::Normal);

        gridLayout_4->addWidget(le_password, 1, 1, 1, 1);


        gridLayout_3->addWidget(widget, 1, 0, 1, 1);

        widget_3 = new QWidget(Dlg_Login);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 50));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_login = new QPushButton(widget_3);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:4px;background:#409eff;color:white;font-size:14px;min-height:28px;min-width:85px;padding:4px;\n"
"\n"
"}\n"
""));

        gridLayout->addWidget(btn_login, 0, 0, 1, 1);

        btn_exit = new QPushButton(widget_3);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:4px;background:#409eff;color:white;font-size:14px;min-height:28px;min-width:85px;padding:4px;\n"
"}"));

        gridLayout->addWidget(btn_exit, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget_3, 4, 0, 1, 1);


        retranslateUi(Dlg_Login);

        QMetaObject::connectSlotsByName(Dlg_Login);
    } // setupUi

    void retranslateUi(QDialog *Dlg_Login)
    {
        Dlg_Login->setWindowTitle(QCoreApplication::translate("Dlg_Login", "\347\231\273\345\275\225", nullptr));
        radioButton->setText(QCoreApplication::translate("Dlg_Login", "\347\224\250\346\210\267", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dlg_Login", "\347\256\241\347\220\206\345\221\230", nullptr));
        lb_title->setText(QCoreApplication::translate("Dlg_Login", "\347\231\273\345\275\225", nullptr));
        lb_txt2->setText(QCoreApplication::translate("Dlg_Login", "  \345\257\206\347\240\201:", nullptr));
        lb_txt1->setText(QCoreApplication::translate("Dlg_Login", "\347\224\250\346\210\267\345\220\215:", nullptr));
        btn_login->setText(QCoreApplication::translate("Dlg_Login", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("Dlg_Login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_Login: public Ui_Dlg_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_LOGIN_H
