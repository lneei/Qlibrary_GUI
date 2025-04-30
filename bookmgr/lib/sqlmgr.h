#ifndef SQLMGR_H
#define SQLMGR_H

#include<QtDebug>
#include<QSqlDatabase>
class SqlMgr
{
public:
    SqlMgr();
    ~SqlMgr();

    static SqlMgr* instance;
    static SqlMgr* getInstance() {
            if (nullptr==instance)
            {
                instance=new SqlMgr();
            }

            return instance;
        }

    void init();
    //登录
    bool login(QString strUser,QString strPass,int &Userid);

    //获取所有用户
    QVector<QStringList>getUser(QString strCondition="");

    //添加用户
    void AddUser(QVector<QStringList>v);

    //删除用户
    void delUser(QString strId);

    //获取所有图书
    QVector<QStringList>getBooks(QString strCondition="");

    //增加图书
    void AddBooks(QVector<QStringList>vec);

    //修改图书
    void UpdateBooks(QStringList ldata);

    //删除图书
    QString delBook(QString strId);

    //图书归还
    QString returnBook(QString strUserId,QString strBookId);

    //图书借阅
    QString borrowBook(QString strUserId,QString strBookId);

    //获取借阅记录
    QVector<QStringList>getRecoed(QString strCondition="");

    //清空借阅记录
    void clearRecord();

private:
    QSqlDatabase m_db;
};

#endif // SQLMGR_H
