/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *show_username;
    QPushButton *pushButton;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QPushButton *btn_update;
    QCheckBox *checkBox;
    QLabel *label_cnt;
    QPushButton *btn_del;
    QPushButton *btn_add;
    QLineEdit *le_search;
    QPushButton *btn_search;
    QTableWidget *tableWidget;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 500);
        MainWindow->setMinimumSize(QSize(900, 500));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 98, 126);\n"
"color: white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(300, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Microsoft YaHei UI\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(200, 0));
        widget_2->setMaximumSize(QSize(200, 16777215));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(50, 50));
        label_2->setMaximumSize(QSize(50, 50));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/user.jpg);"));

        horizontalLayout->addWidget(label_2);

        show_username = new QLabel(widget_2);
        show_username->setObjectName("show_username");
        show_username->setEnabled(true);
        show_username->setMinimumSize(QSize(70, 0));
        show_username->setMaximumSize(QSize(70, 16777215));
        show_username->setStyleSheet(QString::fromUtf8("font: 15pt \"\346\245\267\344\275\223\";"));
        show_username->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(show_username);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(50, 0));
        pushButton->setMaximumSize(QSize(50, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 95, 32);\n"
""));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_2->addWidget(widget_2);


        gridLayout->addWidget(widget, 1, 0, 1, 4);

        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName("treeWidget");
        treeWidget->setMinimumSize(QSize(150, 0));
        treeWidget->setMaximumSize(QSize(150, 16777215));
        treeWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(67, 94, 121, 255);\n"
"font: 10pt \"Microsoft YaHei UI\";"));

        gridLayout->addWidget(treeWidget, 2, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName("gridLayout_2");
        btn_update = new QPushButton(page);
        btn_update->setObjectName("btn_update");
        btn_update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #47af9a;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: #34495e;\n"
"}"));

        gridLayout_2->addWidget(btn_update, 0, 5, 1, 1);

        checkBox = new QCheckBox(page);
        checkBox->setObjectName("checkBox");
        checkBox->setStyleSheet(QString::fromUtf8("color: #34495e;\n"
""));

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        label_cnt = new QLabel(page);
        label_cnt->setObjectName("label_cnt");
        label_cnt->setStyleSheet(QString::fromUtf8("color: red;\n"
""));

        gridLayout_2->addWidget(label_cnt, 2, 0, 1, 1);

        btn_del = new QPushButton(page);
        btn_del->setObjectName("btn_del");
        btn_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #47af9a;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: #34495e;\n"
"}"));

        gridLayout_2->addWidget(btn_del, 0, 6, 1, 1);

        btn_add = new QPushButton(page);
        btn_add->setObjectName("btn_add");
        btn_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #47af9a;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: #34495e;\n"
"}"));

        gridLayout_2->addWidget(btn_add, 0, 4, 1, 1);

        le_search = new QLineEdit(page);
        le_search->setObjectName("le_search");
        le_search->setStyleSheet(QString::fromUtf8("border : 2px solid #bdc3c7;\n"
"border-radius: 6;"));

        gridLayout_2->addWidget(le_search, 0, 7, 1, 1);

        btn_search = new QPushButton(page);
        btn_search->setObjectName("btn_search");
        btn_search->setMinimumSize(QSize(80, 0));
        btn_search->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: #47af9a;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: #34495e;\n"
"}"));

        gridLayout_2->addWidget(btn_search, 0, 8, 1, 1);

        tableWidget = new QTableWidget(page);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMinimumSize(QSize(200, 0));
        tableWidget->setStyleSheet(QString::fromUtf8("color: #34495e;"));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 9);

        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 95, 32);\n"
""));

        gridLayout_2->addWidget(pushButton_5, 2, 4, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QString());
        show_username->setText(QCoreApplication::translate("MainWindow", "text", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        pushButton->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btn_update->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        label_cnt->setText(QCoreApplication::translate("MainWindow", "Label_cnt", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        btn_del->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_add->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        btn_add->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        btn_search->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\255\246\347\224\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
