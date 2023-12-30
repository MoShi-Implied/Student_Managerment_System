#include "dlg_addstu.h"
#include "ui_dlg_addstu.h"
#include <QSqlDatabase>
#include "stusql.h"
#include <QMessageBox>

Dlg_AddStu::Dlg_AddStu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_AddStu)
{
    ui->setupUi(this);
}

Dlg_AddStu::~Dlg_AddStu()
{
    delete ui;
}

// 显示内容
void Dlg_AddStu::setType(bool isAdd, StuInfo info)
{
    m_isAdd = isAdd;
    m_info = info;
    ui->le_name->setText(info.name);
    ui->le_age->setValue(info.age);
    ui->le_class->setText(QString::number(info.uiclass));
    ui->le_grade->setText(QString::number(info.grade));
    ui->le_phone->setText(info.phone);
    ui->le_wechat->setText(info.wechat);
}

// 保存内容
void Dlg_AddStu::on_btn_save_clicked()
{
    // 没有获取到id
    StuInfo info = this->m_info;
    auto ptr = StuSql::getinstance();
    info.name = ui->le_name->text();
    info.age = ui->le_age->text().toInt();
    info.uiclass = ui->le_class->text().toUInt();
    info.grade = ui->le_grade->text().toUInt();
    info.studentid = ui->le_seq->text().toUInt();
    info.phone = ui->le_phone->text();
    info.wechat = ui->le_wechat->text();

    if(m_isAdd){
        ptr->addStu(info);
    }
    else{
        ptr->updateStuInfo(info);
    }

    QMessageBox::information(nullptr, "信息", QString("学生\"%1\"信息添加成功").arg(info.name));
    this->hide();
}


void Dlg_AddStu::on_pushButton_2_clicked()
{
    this->hide();
}

