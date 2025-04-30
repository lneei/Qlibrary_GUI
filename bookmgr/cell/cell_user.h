#ifndef CELL_USER_H
#define CELL_USER_H

#include <QWidget>
#include<QStandardItemModel>

namespace Ui {
class Cell_User;
}

class Cell_User : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_User(QWidget *parent = nullptr);
    ~Cell_User();

    void initPage(QString strCondition="");

private slots:
    void on_btn_import_clicked();

    void on_btn_del_clicked();

    void on_le_search_textChanged(const QString &arg1);

private:
    Ui::Cell_User *ui;
    QStandardItemModel m_model;
};

#endif // CELL_USER_H
