/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Login
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLineEdit *le_username;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_password;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_login;
    QPushButton *btn_exit;
    QLabel *label;

    void setupUi(QWidget *Page_Login)
    {
        if (Page_Login->objectName().isEmpty())
            Page_Login->setObjectName("Page_Login");
        Page_Login->resize(250, 250);
        Page_Login->setMinimumSize(QSize(250, 250));
        Page_Login->setMaximumSize(QSize(250, 250));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Page_Login->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(Page_Login);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_2 = new QWidget(Page_Login);
        widget_2->setObjectName("widget_2");
        QFont font;
        font.setPointSize(10);
        widget_2->setFont(font);
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        le_username = new QLineEdit(widget_2);
        le_username->setObjectName("le_username");
        le_username->setStyleSheet(QString::fromUtf8("    border : 2px solid #bdc3c7;\n"
"    min-height: 22;\n"
"    border-radius: 6;"));
        le_username->setMaxLength(8);
        le_username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(le_username, 0, 1, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(52, 73, 94)"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(52, 73, 94)"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        le_password = new QLineEdit(widget_2);
        le_password->setObjectName("le_password");
        le_password->setStyleSheet(QString::fromUtf8("    border : 2px solid #bdc3c7;\n"
"    min-height: 22;\n"
"    border-radius: 6;"));
        le_password->setMaxLength(20);
        le_password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(le_password, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(Page_Login);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(15, 0, 15, 0);
        btn_login = new QPushButton(widget);
        btn_login->setObjectName("btn_login");
        btn_login->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_login->sizePolicy().hasHeightForWidth());
        btn_login->setSizePolicy(sizePolicy);
        btn_login->setMinimumSize(QSize(0, 30));
        btn_login->setMaximumSize(QSize(16777215, 30));
        btn_login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(70, 98, 126);\n"
"	color: white;\n"
"	font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #47af9a;\n"
"	font-weight: bold;\n"
"}"));

        horizontalLayout->addWidget(btn_login);

        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");
        sizePolicy.setHeightForWidth(btn_exit->sizePolicy().hasHeightForWidth());
        btn_exit->setSizePolicy(sizePolicy);
        btn_exit->setMinimumSize(QSize(0, 30));
        btn_exit->setMaximumSize(QSize(16777215, 30));
        btn_exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(70, 98, 126);\n"
"	color: white;\n"
"	font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #47af9a;\n"
"	font-weight: bold;\n"
"}"));

        horizontalLayout->addWidget(btn_exit);


        gridLayout_2->addWidget(widget, 3, 0, 1, 1);

        label = new QLabel(Page_Login);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 60));
        label->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(52, 73, 94)"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        retranslateUi(Page_Login);

        QMetaObject::connectSlotsByName(Page_Login);
    } // setupUi

    void retranslateUi(QWidget *Page_Login)
    {
        Page_Login->setWindowTitle(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
        le_username->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245", nullptr));
        label_2->setText(QCoreApplication::translate("Page_Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("Page_Login", "\345\257\206\347\240\201", nullptr));
        le_password->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245", nullptr));
        btn_login->setText(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("Page_Login", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("Page_Login", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Login: public Ui_Page_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
