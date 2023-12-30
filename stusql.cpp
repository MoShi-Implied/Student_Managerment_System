#include "stusql.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <QSqlError>

StuSql*  StuSql::ptrstuSql = nullptr;

StuSql::StuSql(QObject *parent)
    : QObject{parent}
{

}

void StuSql::init()
{
    if(QSqlDatabase::drivers().isEmpty()){
        QMessageBox::information(nullptr, tr("没有找到Database驱动"), tr("这个项目需要使用SqLite3驱动"));
    }

    // 选择数据库模式
    m_db = QSqlDatabase::addDatabase("QSQLITE");

    // 找到程序的输出目录路径
    auto str = QCoreApplication::applicationDirPath()+"/data.db";
    qDebug() << str;

    m_db.setDatabaseName(str);
    if(!m_db.open()){
        qDebug() << "DataBase not open!!!" << '\n';
        QMessageBox::warning(nullptr, tr("错误"), tr("未能成功打开Database"));
    }
}

quint32 StuSql::getStuCnt()
{
    QSqlQuery sql(m_db);
    sql.exec("select count(id) from student;");
    quint32 uiCnt = 0;
    while(sql.next()){
        uiCnt = sql.value(0).toUInt();
    }
    qDebug() << uiCnt;
    return uiCnt;
}

QList<StuInfo> StuSql::getPageStu(quint32 page, quint32 uiCnt)
{
    QList<StuInfo> l;
    QSqlQuery sql(m_db);
    QString strSql = QString("select * from student order by id limit %1 offset %2").
                  arg(uiCnt).
                  arg(page * uiCnt);
    sql.exec(strSql);

    StuInfo info;
    while(sql.next()){
        info.id =sql.value(0).toUInt();
        info.name =sql.value(1).toString();
        info.age =sql.value(2).toUInt();
        info.grade =sql.value(3).toUInt();
        info.uiclass =sql.value(4).toUInt();
        info.studentid =sql.value(5).toUInt();
        info.phone =sql.value(6).toString();
        info.wechat =sql.value(7).toString();
        l.push_back(info);
    }
    return l;
}

bool StuSql::addStu(StuInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("INSERT INTO student VALUES (NULL, '%1', %2, %3, %4, %5, '%6', '%7')").
                     arg(info.name).
                     arg(info.age).
                     arg(info.grade).
                     arg(info.uiclass).
                     arg(info.studentid).
                     arg(info.phone).
                     arg(info.wechat);
    return sql.exec(strSql);
}

bool StuSql::delStu(int id)
{
    QSqlQuery sql(m_db);
    return sql.exec(QString("delete from student where id = %1").arg(id));

    // QSqlQuery sql(m_db);
    // if (!sql.exec(QString("delete from student where id = %1").arg(id))) {
    //     qDebug() << "Error executing SQL query:" << sql.lastError().text();
    //     return false;
    // }
    // return true;

}

bool StuSql::clearStuTable()
{
    QSqlQuery sql(m_db);
    sql.exec("delete from student");
    return sql.exec("delete from sqlite_sequence where name = 'student'");
}

// 修改学生信息(没问题）
bool StuSql::updateStuInfo(StuInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("update student set name ='%1',age=%2,grade=%3,class=%4,studentid=%5,"
                             "phone='%6',wechat='%7' where id=%8").
                     arg(info.name).
                     arg(info.age).
                     arg(info.grade).
                     arg(info.uiclass).
                     arg(info.studentid).
                     arg(info.phone).
                     arg(info.wechat).
                     arg(info.id);
    bool ret = sql.exec(strSql);
    QSqlError err = sql.lastError();
    if(err.isValid()){
        qDebug() << err.text() << "\n";
    }
    return ret;
}

QList<UserInfo> StuSql::getAllUser()
{
    QList<UserInfo> l;
    QSqlQuery sql(m_db);
    QString strSql = QString("select * from username");
    sql.exec(strSql);

    UserInfo info;
    while(sql.next()){
        info.username =sql.value(0).toString();
        info.password =sql.value(1).toString();
        info.aut =sql.value(2).toString();
        l.push_back(info);
    }
    return l;
}

bool StuSql::isExit(QString strUser)
{
    QSqlQuery sql(m_db);
    sql.exec(QString("select * from username where username='%1'").arg(strUser));
    return sql.next();
}

bool StuSql::updateUser(UserInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("update username set password='%1',auth='%2' where username='%3'").
                     arg(info.password).
                     arg(info.aut).
                     arg(info.username);
    bool ret = sql.exec(strSql);
    QSqlError err = sql.lastError();
    if(err.isValid()){
        qDebug() << err.text() << "\n";
    }
    return ret;
}

bool StuSql::addUser(UserInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("insert into username values ('%1', '%2', '%3')").
                     arg(info.username).
                     arg(info.password).
                     arg(info.aut);
    return sql.exec(strSql);
}

bool StuSql::delUser(QString strUserName)
{
    QSqlQuery sql(m_db);
    return sql.exec(QString("delete from username where username='%1'").arg(strUserName));
}
