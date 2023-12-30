#include "mainwindow.h"
// #include "page_login.h"
#include <QApplication>
#include "stusql.h"

int main(int argc, char *argv[])
{
    if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
        QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling,true);

    QApplication a(argc, argv);
    MainWindow w;
    // 窗口创建了但是不显示
    // w.show();

    StuSql sql;
    return a.exec();
}
