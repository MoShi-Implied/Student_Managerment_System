#include "page_login.h"
#include "qobjectdefs.h"
#include "ui_page_login.h"
#include "stusql.h"
#include <QList>
#include <QString>
#include <QMessageBox>

Page_Login::Page_Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Page_Login)
{
    ui->setupUi(this);
    ui->le_password->setEchoMode(QLineEdit::Password);

    connect(ui->le_password, SIGNAL(returnPressed()), ui->btn_login, SLOT(click()), Qt::UniqueConnection);

}

Page_Login::~Page_Login()
{
    delete ui;
}

void Page_Login::on_btn_login_clicked()
{
    StuSql userSql;
    // 数据库查找用户名和密码
    QList<UserInfo> list = userSql.getAllUser();

    // 获取输入框所输入的信息
    this->userinfo.username = this->ui->le_username->text();
    this->userinfo.password = this->ui->le_password->text();

    // 遍历还是二分？
    for(QList<UserInfo>::iterator it = list.begin(); it != list.end() ; it++){
        if(this->userinfo.username == it->username){
            // 检查密码是否正确
            if(it->password == this->userinfo.password){
                this->userinfo.aut = it->aut;
                // 登录成功后，向MainWindow传值
                emit sendInfo(this->userinfo);

                // 发送信号
                emit sendLoginSuccess();
                // 成功进进入主界面
                this->hide();
                return;
            }
            else{
                QMessageBox::warning(nullptr, "密码错误", "请重新输入");
                // 清空输入的内容
                ui->le_password->clear();
                return;
            }
        }
    }

    // 没找到该用户
    QMessageBox::information(nullptr, "注意", "您未注册!!!请向管理员申请权限");
    return;
}


void Page_Login::on_btn_exit_clicked()
{

    // 使程序退出
    exit(0);
}

