#include "cell_book.h"
#include "ui_cell_book.h"
#include"lib/sqlmgr.h"
#include"dlg_bookau.h"
#include"dlg_bookgs.h"
#include<QMessageBox>

Cell_Book::Cell_Book(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cell_Book)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Cell_Book::~Cell_Book()
{
    delete ui;
}

void Cell_Book::initPage(QString strCondtion)
{
    //获取所有图书
    SqlMgr::getInstance()->getBooks(strCondtion);
    auto l= SqlMgr::getInstance()->getBooks(strCondtion);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"图书编号","名称","价格","类型1","类型2","类型3","数量","图片"});
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

void Cell_Book::on_btn_add_clicked()
{
    Dlg_BookAU dlg;
    dlg.exec();
    initPage();
}

void Cell_Book::on_btn_updata_clicked()
{
    int r=ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::information(nullptr,"信息","无选中图书");
    }
    else
    {
        auto id = m_model.item(r,0)->text();
        Dlg_BookAU dlg;
        dlg.setType(id.toInt());
        dlg.exec();
        initPage();
    }


}

void Cell_Book::on_btn_del_clicked()
{
    //删除
    int r=ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::information(nullptr,"信息","无选中图书");
    }
    else
    {
        auto id = m_model.item(r,0)->text();
        auto str = SqlMgr::getInstance()->delBook(id);

        QMessageBox::information(nullptr,"信息",str.isEmpty()?"删除成功":str);
        initPage();
    }
}

void Cell_Book::on_btn_get_clicked()
{
    int r= ui->tableView->currentIndex().row();
    if(r<0)
    {
        return;
    }
    auto id = m_model.item(r,0)->text();
    auto cnt = m_model.item(r,6)->text().toInt();
    if(cnt<=0)
    {
        QMessageBox::information(nullptr,"信息","借阅失败没有库存");
        return;
    }

    Dlg_BookGS dlg;
    dlg.setBookId(id.toInt());
    int ret=dlg.exec();
    QMessageBox::information(nullptr,"信息",ret?"借阅成功":"借阅失败");
    if(ret)
    {
        initPage();
    }

}

void Cell_Book::on_le_search_textChanged(const QString &arg1)
{
    QString strCond=QString("where name like '%%1%' or type1 like '%%1%'or type2 like '%%1%' or type3 like '%%1%'").arg(arg1);
    initPage(strCond);
}




