/********************************************************************************
** Form generated from reading UI file 'provider.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROVIDER_H
#define UI_PROVIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_provider
{
public:
    QLineEdit *name_LineEdit;
    QLineEdit *email_LineEdit;
    QLineEdit *mobile_LineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *saveButton;

    void setupUi(QWidget *provider)
    {
        if (provider->objectName().isEmpty())
            provider->setObjectName(QString::fromUtf8("provider"));
        provider->resize(400, 300);
        name_LineEdit = new QLineEdit(provider);
        name_LineEdit->setObjectName(QString::fromUtf8("name_LineEdit"));
        name_LineEdit->setGeometry(QRect(130, 100, 113, 20));
        email_LineEdit = new QLineEdit(provider);
        email_LineEdit->setObjectName(QString::fromUtf8("email_LineEdit"));
        email_LineEdit->setGeometry(QRect(140, 160, 113, 20));
        mobile_LineEdit = new QLineEdit(provider);
        mobile_LineEdit->setObjectName(QString::fromUtf8("mobile_LineEdit"));
        mobile_LineEdit->setGeometry(QRect(140, 230, 113, 20));
        label = new QLabel(provider);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 20, 47, 13));
        label_2 = new QLabel(provider);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 47, 13));
        label_3 = new QLabel(provider);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 47, 13));
        label_4 = new QLabel(provider);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 230, 81, 16));
        saveButton = new QPushButton(provider);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(290, 240, 93, 28));

        retranslateUi(provider);

        QMetaObject::connectSlotsByName(provider);
    } // setupUi

    void retranslateUi(QWidget *provider)
    {
        provider->setWindowTitle(QCoreApplication::translate("provider", "Form", nullptr));
        label->setText(QCoreApplication::translate("provider", "Provider", nullptr));
        label_2->setText(QCoreApplication::translate("provider", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("provider", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("provider", "Mobile Number", nullptr));
        saveButton->setText(QCoreApplication::translate("provider", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class provider: public Ui_provider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROVIDER_H
