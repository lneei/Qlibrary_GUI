#include "cell_record.h"
#include "ui_cell_record.h"
#include"dlg_bookgs.h"
#include<lib/sqlmgr.h>
#include"QMessageBox"
Cell_Record::Cell_Record(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cell_Record)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Cell_Record::~Cell_Record()
{
    delete ui;
}

void Cell_Record::initPage(QString strCondtion)
{

    auto l= SqlMgr::getInstance()->getRecoed(strCondtion);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"借阅编号","数量","图书编号","借阅时间","归还时间","用户编号","部门","职位","昵称","用户名","密码","书名","价格","类型1","类型2","类型3","剩余数量","图片"});
    for(int i=0;i<l.size();i++)
    {
        QList<QStandardItem*> items;
        for(int j=0;j<l[i].size();j++)
        {
            items.append(new QStandardItem(l[i][j]));
        }
        m_model.appendRow(items);
    }
}

void Cell_Record::on_btn_clear_clicked()
{
    SqlMgr::getInstance()->clearRecord();
    initPage();
}

void Cell_Record::on_btn_bk_clicked()
{
    int r=ui->tableView->currentIndex().row();
    if(r<0)
    {
        return;
    }
    auto id=m_model.item(r,2)->text();
    Dlg_BookGS dlg;
    dlg.setType(true);
    dlg.setBookId(id.toInt());
    int ret=dlg.exec();
    QMessageBox::information(nullptr,"信息",ret?"归还成功":"归还失败");
    if(ret)
    {
        initPage();
    }
}

void Cell_Record::on_le_search_textChanged(const QString &arg1)
{
    initPage(arg1);
}


