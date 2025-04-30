#ifndef CELL_BOOK_H
#define CELL_BOOK_H

#include <QWidget>
#include<QStandardItemModel>
namespace Ui {
class Cell_Book;
}

class Cell_Book : public QWidget
{
    Q_OBJECT

public:
    explicit Cell_Book(QWidget *parent = nullptr);
    ~Cell_Book();
    void initPage(QString strCondtion="");


private slots:
    void on_btn_add_clicked();

    void on_btn_updata_clicked();

    void on_btn_del_clicked();

    void on_le_search_textChanged(const QString &arg1);

    void on_btn_get_clicked();

private:
    Ui::Cell_Book *ui;
    QStandardItemModel m_model;
};

#endif // CELL_BOOK_H
