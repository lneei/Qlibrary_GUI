#include "cell_user.h"
#include "ui_cell_user.h"
#include"lib/sqlmgr.h"
#include<QMessageBox>
#include<QFileDialog>
#include<QByteArray>
#include<QFile>
#include<QString>
Cell_User::Cell_User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cell_User)
{
    ui->setupUi(this);

    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Cell_User::~Cell_User()
{
    delete ui;
}

void Cell_User::initPage(QString strCondition)
{
    //查询数据库并显示
    auto l= SqlMgr::getInstance()->getUser(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"用户id","年级","部门","职位","昵称","用户名","密码"});
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

QString convertUTF8(const QString &strGBK)
{
    for(int i=0;i<strGBK.size();i++)
    {
        QString utf8Data=strGBK.toUtf8();
    }
    return strGBK;
}
void Cell_User::on_btn_import_clicked()
{

    auto strPath=QFileDialog::getOpenFileName(nullptr,"输入文件路径");

    if(!strPath.isEmpty())
    {
        QFile f(strPath);
        f.open(QFile::ReadOnly);
        QVector<QStringList>vecData;
        while(!f.atEnd())
        {
            QString str = f.readLine();
            auto l = str.split(",");

            //todo gbk转utf8
            for(auto &itC:l)
            {
                itC=convertUTF8(itC);
            }
            if(l.size()!=6)
            {
                QMessageBox::information(nullptr,"信息","导入失败");
                return;
            }
            l[l.size()-1]=l[l.size()-1].chopped(2);
            vecData.push_back(l);
        }

        SqlMgr::getInstance()->AddUser(vecData);
        ui->le_search->clear();
        initPage();
    }
}

void Cell_User::on_btn_del_clicked()
{
    //删除
    int r=ui->tableView->currentIndex().row();
    if(r<0)
    {
        QMessageBox::information(nullptr,"信息","无选中用户");
    }
    else
    {
        auto id = m_model.item(r,0)->text();
        SqlMgr::getInstance()->delUser(id);
        initPage();
    }
}

void Cell_User::on_le_search_textChanged(const QString &arg1)
{
    QString strCond=QString("where username like '%%1%' or nickname like '%%1%'").arg(arg1);
    initPage(strCond);
}
