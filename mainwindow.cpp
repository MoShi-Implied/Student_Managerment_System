#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QFile>
#include <QList>
#include <QCoreApplication>
#include <QString>
#include <QDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_ptrStuSql(nullptr)
{
    ui->setupUi(this);

    m_dlgLogin.show();

    // 信号槽机制，需要去看看
    auto f = [&](){
        this->show();
    };
    connect(&m_dlgLogin, &Page_Login::sendLoginSuccess, this, f);


    // 设置列数
    ui->treeWidget->setColumnCount(1);
    // 隐藏标头，不然默认会出现一个1
    ui->treeWidget->setHeaderHidden(true);
    QStringList l;
    l << "学生信息管理系统";

    QTreeWidgetItem* pf = new QTreeWidgetItem(ui->treeWidget, l);
    ui->treeWidget->addTopLevelItem(pf);

    l.clear();
    l << "学生管理";
    QTreeWidgetItem* p1 = new QTreeWidgetItem(pf, l);
    // ui->treeWidget->addTopLevelItem(p1);


    l.clear();
    l << "管理员管理";
    QTreeWidgetItem* p2 = new QTreeWidgetItem(pf, l);
    // ui->treeWidget->addTopLevelItem(p2);

    l.clear();
    pf->addChild(p1);
    pf->addChild(p2);

    ui->treeWidget->expandAll();
    ui->stackedWidget->setCurrentIndex(0);

    m_ptrStuSql = StuSql::getinstance();
    m_ptrStuSql->init();

    updateTable();


    // 将回车和搜索键绑定
    connect(ui->le_search, SIGNAL(returnPressed()), ui->btn_search, SLOT(click()), Qt::UniqueConnection);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    exit(0);
}


void MainWindow::on_btn_add_clicked()
{
    m_dlgAddStu.setType(true);
    // show的话，别的窗口还是可以动
    // m_dlgAddStu.show();
    // exec会阻塞其他窗口，该窗口必须先执行，该动作叫“模态”
    m_dlgAddStu.exec();
    updateTable();
}


void MainWindow::on_pushButton_5_clicked()
{
    // 先清空表
    m_ptrStuSql->clearStuTable();
    // 更新表数据
    updateTable();
}

void MainWindow::updateTable()
{
    ui->tableWidget->clear();
    QStringList l;

    ui->tableWidget->setColumnCount(9);
    l << "序号" << "id" << "姓名" << "年龄" << "年级" << "班级" << "学号" << "电话" << "WeChat";

    ui->tableWidget->setHorizontalHeaderLabels(l);
    // 选中单行
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    auto cnt = m_ptrStuSql->getStuCnt();
    QList<StuInfo> lStudents = m_ptrStuSql->getPageStu(0, cnt);

    ui->tableWidget->setRowCount(cnt);
    for(int i=0; i<lStudents.size(); i++){
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(lStudents[i].id)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(lStudents[i].name));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(lStudents[i].age)));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(lStudents[i].grade)));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(lStudents[i].uiclass)));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(lStudents[i].studentid)));
        ui->tableWidget->setItem(i, 7, new QTableWidgetItem(lStudents[i].phone));
        ui->tableWidget->setItem(i, 8, new QTableWidgetItem(lStudents[i].wechat));
    }
    ui->label_cnt->setText(QString("学生总数：%1").arg(cnt));
}


void MainWindow::on_btn_del_clicked()
{
    int i = ui->tableWidget->currentRow();
    if(i >= 0){
        int id = ui->tableWidget->item(i, 1)->text().toUInt();
        m_ptrStuSql->delStu(id);
        updateTable();
        QMessageBox::information(nullptr, "信息", "删除成功");
    }
}


void MainWindow::on_btn_update_clicked()
{
    StuInfo info;
    // 获取所在行
    int i = ui->tableWidget->currentRow();
    //
    qDebug() << i << "\n";

    if(i >= 0){
        info.id = ui->tableWidget->item(i, 1)->text().toUInt();
        info.name = ui->tableWidget->item(i, 2)->text();
        info.age = ui->tableWidget->item(i, 3)->text().toUInt();
        info.grade = ui->tableWidget->item(i, 4)->text().toUInt();
        info.uiclass = ui->tableWidget->item(i, 5)->text().toUInt();
        info.studentid = ui->tableWidget->item(i, 6)->text().toUInt();
        info.phone = ui->tableWidget->item(i, 7)->text();
        info.wechat = ui->tableWidget->item(i, 8)->text();

        //
        qDebug() << info.id << " " << info.name << " "  << info.age <<  "\n";

        m_dlgAddStu.setType(false, info);
        m_dlgAddStu.exec();
    }
    updateTable();
}

/*
    需要优化！
 */
void MainWindow::on_btn_search_clicked()
{

    QString strFilter = ui->le_search->text();
    if(strFilter.isEmpty()){
        QMessageBox::information(nullptr, "警告", "名字筛选为空");
        updateTable();
        return;
    }

    ui->tableWidget->clear();
    QStringList l;

    ui->tableWidget->setColumnCount(9);
    l << "序号" << "id" << "姓名" << "年龄" << "年级" << "班级" << "学号" << "电话" << "WeChat";
    ui->tableWidget->setHorizontalHeaderLabels(l);

    auto cnt = m_ptrStuSql->getStuCnt();
    QList<StuInfo> lStudents = m_ptrStuSql->getPageStu(0, cnt);

    int index = 0;
    for(int i=0; i<lStudents.size(); i++){
        if(!lStudents[i].name.contains(strFilter)){
            continue;
        }

        ui->tableWidget->setItem(index, 0, new QTableWidgetItem(QString::number(index)));
        ui->tableWidget->setItem(index, 1, new QTableWidgetItem(QString::number(lStudents[i].id)));
        ui->tableWidget->setItem(index, 2, new QTableWidgetItem(lStudents[i].name));
        ui->tableWidget->setItem(index, 3, new QTableWidgetItem(QString::number(lStudents[i].age)));
        ui->tableWidget->setItem(index, 4, new QTableWidgetItem(QString::number(lStudents[i].grade)));
        ui->tableWidget->setItem(index, 5, new QTableWidgetItem(QString::number(lStudents[i].uiclass)));
        ui->tableWidget->setItem(index, 6, new QTableWidgetItem(QString::number(lStudents[i].studentid)));
        ui->tableWidget->setItem(index, 7, new QTableWidgetItem(lStudents[i].phone));
        ui->tableWidget->setItem(index, 8, new QTableWidgetItem(lStudents[i].wechat));
        index++;
    }
    ui->tableWidget->setRowCount(index);
}

