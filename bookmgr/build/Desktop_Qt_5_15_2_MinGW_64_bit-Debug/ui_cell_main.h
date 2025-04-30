/********************************************************************************
** Form generated from reading UI file 'cell_main.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_MAIN_H
#define UI_CELL_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Main
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *tool;
    QGridLayout *gridLayout;
    QToolButton *btn_user;
    QToolButton *btn_his;
    QToolButton *btn_book;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *Cell_Main)
    {
        if (Cell_Main->objectName().isEmpty())
            Cell_Main->setObjectName(QString::fromUtf8("Cell_Main"));
        Cell_Main->resize(604, 424);
        Cell_Main->setMaximumSize(QSize(16777215, 16777215));
        Cell_Main->setStyleSheet(QString::fromUtf8("QPushButton[name=\"btn\"]{border-radius:4px;background:#409eff;color:white;font-size:14px;min-height:28px;min-width:85px;padding:4px;}\n"
"\n"
"QPushButton[name=\"btn\"]:pressed{background:#3a8ee6;}\n"
"\n"
"QLineEdit[name=\"le\"]{border-radius:4px;min-height:25px;border:1px solid gray;max-width:280px;min-width:280px;}\n"
"\n"
"QLabel[name=\"title\"]{font:18px '\351\273\221\344\275\223';color:blue;}\n"
"\n"
"QLabel[name=\"lb\"]{font:14px '\351\273\221\344\275\223';}\n"
"\n"
"QWidget[name=\"bg\"]{background-color:white;}"));
        centralwidget = new QWidget(Cell_Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#tool{background-color:rgb(84,92,100);}\n"
""));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tool = new QWidget(centralwidget);
        tool->setObjectName(QString::fromUtf8("tool"));
        tool->setMinimumSize(QSize(0, 0));
        tool->setMaximumSize(QSize(150, 16777215));
        tool->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(tool);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_user = new QToolButton(tool);
        buttonGroup = new QButtonGroup(Cell_Main);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(btn_user);
        btn_user->setObjectName(QString::fromUtf8("btn_user"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_user->sizePolicy().hasHeightForWidth());
        btn_user->setSizePolicy(sizePolicy);
        btn_user->setMinimumSize(QSize(0, 55));
        btn_user->setMaximumSize(QSize(16777215, 16777215));
        btn_user->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	border:none;background-color:rgb(84,92,100);color:white;\n"
"	min-height:55px;font:14px \"\351\273\221\344\275\223\";padding-left 14px;\n"
"	padding-left: 12px;\n"
"}\n"
"QToolButton:checked\n"
"{\n"
"	background-color:rgb(67,74,80);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tool.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_user->setIcon(icon);
        btn_user->setCheckable(true);
        btn_user->setChecked(true);
        btn_user->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_user, 1, 0, 1, 1);

        btn_his = new QToolButton(tool);
        buttonGroup->addButton(btn_his);
        btn_his->setObjectName(QString::fromUtf8("btn_his"));
        sizePolicy.setHeightForWidth(btn_his->sizePolicy().hasHeightForWidth());
        btn_his->setSizePolicy(sizePolicy);
        btn_his->setMinimumSize(QSize(0, 55));
        btn_his->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	border:none;background-color:rgb(84,92,100);color:white;\n"
"	min-height:55px;font:14px \"\351\273\221\344\275\223\";padding-left 14px;\n"
"	padding-left: 15px;\n"
"}\n"
"QToolButton:checked\n"
"{\n"
"	background-color:rgb(67,74,80);\n"
"}"));
        btn_his->setIcon(icon);
        btn_his->setCheckable(true);
        btn_his->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_his, 3, 0, 1, 1);

        btn_book = new QToolButton(tool);
        buttonGroup->addButton(btn_book);
        btn_book->setObjectName(QString::fromUtf8("btn_book"));
        sizePolicy.setHeightForWidth(btn_book->sizePolicy().hasHeightForWidth());
        btn_book->setSizePolicy(sizePolicy);
        btn_book->setMinimumSize(QSize(0, 55));
        btn_book->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	border:none;background-color:rgb(84,92,100);color:white;\n"
"	min-height:55px;font:14px \"\351\273\221\344\275\223\";padding-left 14px;\n"
"	padding-left: 15px;\n"
"}\n"
"QToolButton:checked\n"
"{\n"
"	background-color:rgb(67,74,80);\n"
"}"));
        btn_book->setIcon(icon);
        btn_book->setCheckable(true);
        btn_book->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_book, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);


        gridLayout_2->addWidget(tool, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(stackedWidget, 1, 1, 1, 1);

        Cell_Main->setCentralWidget(centralwidget);

        retranslateUi(Cell_Main);

        QMetaObject::connectSlotsByName(Cell_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Cell_Main)
    {
        Cell_Main->setWindowTitle(QCoreApplication::translate("Cell_Main", "\347\224\250\346\210\267\347\252\227\345\217\243", nullptr));
        btn_user->setText(QCoreApplication::translate("Cell_Main", "  \347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btn_his->setText(QCoreApplication::translate("Cell_Main", "  \345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
        btn_book->setText(QCoreApplication::translate("Cell_Main", "  \345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_Main: public Ui_Cell_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_MAIN_H
