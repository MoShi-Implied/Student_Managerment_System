/********************************************************************************
** Form generated from reading UI file 'dlg_addstu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDSTU_H
#define UI_DLG_ADDSTU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_AddStu
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *le_name;
    QLabel *label_2;
    QSpinBox *le_age;
    QLabel *label_3;
    QLineEdit *le_grade;
    QLabel *label_4;
    QLineEdit *le_class;
    QLabel *label_5;
    QLineEdit *le_seq;
    QLabel *label_6;
    QLineEdit *le_phone;
    QLabel *label_7;
    QLineEdit *le_wechat;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_save;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dlg_AddStu)
    {
        if (Dlg_AddStu->objectName().isEmpty())
            Dlg_AddStu->setObjectName("Dlg_AddStu");
        Dlg_AddStu->resize(220, 300);
        Dlg_AddStu->setMinimumSize(QSize(220, 300));
        Dlg_AddStu->setMaximumSize(QSize(220, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add_stu_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Dlg_AddStu->setWindowIcon(icon);
        Dlg_AddStu->setStyleSheet(QString::fromUtf8("color: rgb(52, 73, 94)"));
        gridLayout = new QGridLayout(Dlg_AddStu);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Dlg_AddStu);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_name = new QLineEdit(Dlg_AddStu);
        le_name->setObjectName("le_name");
        le_name->setStyleSheet(QString::fromUtf8("border : 2px solid #bdc3c7;\n"
"border-radius: 6;\n"
"background-color: rgb(230, 230, 230);"));

        gridLayout->addWidget(le_name, 0, 1, 1, 1);

        label_2 = new QLabel(Dlg_AddStu);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        le_age = new QSpinBox(Dlg_AddStu);
        le_age->setObjectName("le_age");
        le_age->setStyleSheet(QString::fromUtf8("border : 2px solid #bdc3c7;\n"
"border-radius: 6;\n"
"background-color: rgb(230, 230, 230);\n"
"color: black;"));

        gridLayout->addWidget(le_age, 1, 1, 1, 1);

        label_3 = new QLabel(Dlg_AddStu);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        le_grade = new QLineEdit(Dlg_AddStu);
        le_grade->setObjectName("le_grade");
        le_grade->setStyleSheet(QString::fromUtf8("border : 2px solid #bdc3c7;\n"
"border-radius: 6;\n"
"background-color: rgb(230, 230, 230);"));

        gridLayout->addWidget(le_grade, 2, 1, 1, 1);

        label_4 = new QLabel(Dlg_AddStu);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        le_class = new QLineEdit(Dlg_AddStu);
        le_class->setObjectName("le_class");
        le_class->setStyleSheet(QString::fromUtf8("border : 2px solid #bdc3c7;\n"
"border-radius: 6;\n"
"background-color: rgb(230, 230, 230);"));

        gridLayout->addWidget(le_class, 3, 1, 1, 1);

        label_5 = new QLabel(Dlg_AddStu);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        le_seq = new QLineEdit(Dlg_AddStu);
        le_seq->setObjectName("le_seq");
        le_seq->setStyleSheet(QString::fromUtf8("border : 2px solid #bdc3c7;\n"
"border-radius: 6;\n"
"background-color: rgb(230, 230, 230);"));

        gridLayout->addWidget(le_seq, 4, 1, 1, 1);

        label_6 = new QLabel(Dlg_AddStu);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        le_phone = new QLineEdit(Dlg_AddStu);
        le_phone->setObjectName("le_phone");
        le_phone->setStyleSheet(QString::fromUtf8("border : 2px solid #bdc3c7;\n"
"border-radius: 6;\n"
"background-color: rgb(230, 230, 230);"));

        gridLayout->addWidget(le_phone, 5, 1, 1, 1);

        label_7 = new QLabel(Dlg_AddStu);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        le_wechat = new QLineEdit(Dlg_AddStu);
        le_wechat->setObjectName("le_wechat");
        le_wechat->setStyleSheet(QString::fromUtf8("border : 2px solid #bdc3c7;\n"
"border-radius: 6;\n"
"background-color: rgb(230, 230, 230);"));

        gridLayout->addWidget(le_wechat, 6, 1, 1, 1);

        widget = new QWidget(Dlg_AddStu);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 30));
        widget->setMaximumSize(QSize(16777215, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(10, 0, 10, 0);
        btn_save = new QPushButton(widget);
        btn_save->setObjectName("btn_save");
        btn_save->setMinimumSize(QSize(0, 30));
        btn_save->setMaximumSize(QSize(16777215, 30));
        btn_save->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: #47af9a;\n"
"}"));

        horizontalLayout->addWidget(btn_save);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 30));
        pushButton_2->setMaximumSize(QSize(16777215, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton:pressed {\n"
"    background-color: #47af9a;\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addWidget(widget, 7, 0, 1, 2);

        QWidget::setTabOrder(le_name, le_age);
        QWidget::setTabOrder(le_age, le_grade);
        QWidget::setTabOrder(le_grade, le_class);
        QWidget::setTabOrder(le_class, le_seq);
        QWidget::setTabOrder(le_seq, le_phone);
        QWidget::setTabOrder(le_phone, le_wechat);
        QWidget::setTabOrder(le_wechat, btn_save);
        QWidget::setTabOrder(btn_save, pushButton_2);

        retranslateUi(Dlg_AddStu);

        QMetaObject::connectSlotsByName(Dlg_AddStu);
    } // setupUi

    void retranslateUi(QDialog *Dlg_AddStu)
    {
        Dlg_AddStu->setWindowTitle(QCoreApplication::translate("Dlg_AddStu", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("Dlg_AddStu", "\345\247\223\345\220\215\357\274\232", nullptr));
        le_name->setText(QString());
        label_2->setText(QCoreApplication::translate("Dlg_AddStu", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_AddStu", "\345\271\264\347\272\247\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_AddStu", "\347\217\255\347\272\247\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Dlg_AddStu", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Dlg_AddStu", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Dlg_AddStu", "WeChat\357\274\232", nullptr));
        btn_save->setText(QCoreApplication::translate("Dlg_AddStu", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dlg_AddStu", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_AddStu: public Ui_Dlg_AddStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDSTU_H
