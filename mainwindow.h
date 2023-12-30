#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "page_login.h"
#include "stusql.h"
#include "dlg_addstu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_btn_add_clicked();

    void on_pushButton_5_clicked();

    void on_btn_del_clicked();

    void on_btn_update_clicked();
    void on_btn_search_clicked();

private:
    void updateTable();

    Ui::MainWindow *ui;
    Page_Login m_dlgLogin;
    StuSql* m_ptrStuSql;

    // 为什么这里不是指针类型？
    Dlg_AddStu m_dlgAddStu;
};
#endif // MAINWINDOW_H
