#include "sqlmgr.h"
#include<QCoreApplication>
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlRecord>
#include<QDateTime>
#include<QString>
SqlMgr* SqlMgr::instance=nullptr;

SqlMgr::SqlMgr()
{

}
SqlMgr::~SqlMgr()
{

}

void SqlMgr::init()
{
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    qDebug()<<QSqlDatabase::drivers();
    QString strPath=QCoreApplication::applicationDirPath()+"/db/book.db";
    m_db.setDatabaseName(strPath);
    qDebug()<<m_db.open();
}
//登录
bool SqlMgr::login(QString strUser, QString strPass,int &Userid)
{
    QSqlQuery q(m_db);
    QString strSql=QString("select * from user where username='%1' and password='%2'").arg(strUser).arg(strPass);
    bool ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    else
    {
        ret=q.next();
        if(ret)
        {
            Userid=q.value(0).toInt();
        }
    }
    return ret;
}
//获取所有用户
QVector<QStringList> SqlMgr::getUser(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql=QString("select * from user %1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    else
    {
        int iCols=q.record().count();
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i=0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}
//添加用户
void SqlMgr::AddUser(QVector<QStringList>v)
{
    m_db.transaction();
    QSqlQuery q(m_db);
    for(auto it:v)
    {
        QString strSql=QString("insert into user VALUES(NULL,'%1','%2','%3','%4','%5','%6');")
                .arg(it[0])
                .arg(it[1])
                .arg(it[2])
                .arg(it[3])
                .arg(it[4])
                .arg(it[5]);
        bool ret =q.exec(strSql);
        if(!ret)
        {
            qDebug()<<q.lastError().text();
        }
    }
    m_db.commit();
}
//删除用户
void SqlMgr::delUser(QString strId)
{
    QSqlQuery q(m_db);
    QString strSql=QString("delete from user where userid =%1").arg(strId);
    bool ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}
//获取所有图书
QVector<QStringList> SqlMgr::getBooks(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql=QString("select * from book %1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    else
    {
        int iCols=q.record().count();
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i=0;i<iCols;i++)
            {
                l<<q.value(i).toString();//遍历所有获取到的数据
            }
            vec.push_back(l);
        }
    }
    return vec;
}
//添加图书
void SqlMgr::AddBooks(QVector<QStringList> vec)
{
    if(0==vec.size())
    {
        return;
    }
    auto ldata=vec[0];
    QSqlQuery q(m_db);
    QString strSql = QString("INSERT INTO book values(null,'%1','%2','%3','%4','%5','%6','')")
            .arg(ldata[1])
            .arg(ldata[2])
            .arg(ldata[3])
            .arg(ldata[4])
            .arg(ldata[5])
            .arg(ldata[6]);
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}
//修改图书
void SqlMgr::UpdateBooks(QStringList ldata)
{
    QSqlQuery q(m_db);
    QString strSql=QString("UPDATE book set name ="
                           "'%1',press='%2',type1='%3',type1='%4',type1='%5',cnt='%6'"
                           "where bookid=%7")
            .arg(ldata[1])
            .arg(ldata[2])
            .arg(ldata[3])
            .arg(ldata[4])
            .arg(ldata[5])
            .arg(ldata[6])
            .arg(ldata[0]);

    bool ret=q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }

}

//删除图书
QString SqlMgr::delBook(QString strId)
{
    QString strRet;
    QSqlQuery q(m_db);
    QString strSql=QString("delete from book where bookid =%1").arg(strId);
    bool ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
        strRet="删除失败";
    }
    return strRet;
}
//图书归还
QString SqlMgr::returnBook(QString strUserId, QString strBookId)
{
    QSqlQuery q(m_db);
    QString strSql=QString("update book set cnt=cnt+1 where bookid=%1;").arg(strBookId);
    bool ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }

    strSql = QString("delete from record where bookid =%1 and userid=%2").arg(strBookId).arg(strUserId);
    ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }

    return QString("");
}
//图书借阅
QString SqlMgr::borrowBook(QString strUserId, QString strBookId)
{

    QSqlQuery q(m_db);
    QString strSql=QString("update book set cnt=cnt-1 where bookid=%1;").arg(strBookId);
    bool ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }

    strSql = QString("insert into record values(null,%1,%2,%3,%4)")
            .arg(strUserId)
            .arg(strBookId)
            .arg(QDateTime::currentSecsSinceEpoch())
            .arg(QDateTime::currentSecsSinceEpoch()+3600*24*10);
    ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }

    return QString("");

}
//获取借阅记录
QVector<QStringList> SqlMgr::getRecoed(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql=QString("select * from record join user using(userid) join book using(bookid) %1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret =q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    else
    {
        int iCols=q.record().count();
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i=0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}
//清空借阅记录
void SqlMgr::clearRecord()
{
    QSqlQuery q(m_db);

    // 删除 book 表中的所有数据
    bool ret = q.exec("DELETE FROM record");
    if (!ret) {
        qDebug() << q.lastError().text();
    }

    // 重置 record 表的自增序列
    ret = q.exec("DELETE FROM sqlite_sequence WHERE name = 'record'");
    if (!ret) {
        qDebug() << q.lastError().text();
    }
}


