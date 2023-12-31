#ifndef PAGE_LOGIN_H
#define PAGE_LOGIN_H

#include <QWidget>
#include "stusql.h"

namespace Ui {
class Page_Login;
}

class Page_Login : public QWidget
{
    Q_OBJECT

public:
    explicit Page_Login(QWidget *parent = nullptr);
    ~Page_Login();

private slots:
    void on_btn_login_clicked();

    void on_btn_exit_clicked();

signals:
    void sendLoginSuccess();
    // 发送登陆人员信息
    void sendInfo(UserInfo info);

private:
    Ui::Page_Login *ui;

    // 存储用户信息
    UserInfo userinfo;
};

#endif // PAGE_LOGIN_H
