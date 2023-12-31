#ifndef STUSQL_H
#define STUSQL_H

#include <QObject>
#include <QSqlDatabase>


struct StuInfo{
    int id;
    QString name;
    quint8 age;
    quint16 grade;
    quint16 uiclass;
    quint32 studentid;
    QString phone;
    QString wechat;
};

struct UserInfo{
    QString username;
    QString password;
    QString aut;
};


class StuSql : public QObject
{
    Q_OBJECT
public:
    explicit StuSql(QObject *parent = nullptr);

    static StuSql* ptrstuSql;

    static StuSql* getinstance(){
        // if语句小技巧，避免写出出现访问空指针
        if(nullptr == ptrstuSql){
            ptrstuSql = new StuSql;
        }
        return ptrstuSql;
    }

    // 初始化数据库连接
    void init();

    // 查询所有学生数量
    quint32 getStuCnt();

    // 查询第几页学生数据，页数从0开始
    QList<StuInfo> getPageStu(quint32 page, quint32 uiCnt);

    // 增加学生
    bool addStu(StuInfo info);

    // 删除学生
    bool delStu(int id);

    // 清空学生表
    bool clearStuTable();

    bool updateStuInfo(StuInfo info);

    // 查询所有用户
    QList<UserInfo> getAllUser();

    // 查询用户名是否存在
    bool isExit(QString strUser);

    // 更新用户信息
    bool updateUser(UserInfo info);

    // 添加单个用户
    bool addUser(UserInfo info);

    // 删除单个用户
    bool delUser(QString strUserName);

signals:

private:
    // 使用单例模式设计
    QSqlDatabase m_db;
};

#endif // STUSQL_H
