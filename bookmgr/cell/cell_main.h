#ifndef CELL_MAIN_H
#define CELL_MAIN_H

#include <QMainWindow>
#include"cell_user.h"
#include"cell_book.h"
#include"cell_record.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Cell_Main; }
QT_END_NAMESPACE

class Cell_Main : public QMainWindow
{
    Q_OBJECT

public:
    Cell_Main(QWidget *parent = nullptr);
    ~Cell_Main();

    void initPage();
    void dealMenu();

private:
    Ui::Cell_Main *ui;
    Cell_User *m_userPage;
    Cell_Book *m_bookPage;
    Cell_Record *m_recordPage;
};
#endif // CELL_MAIN_H
