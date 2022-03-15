/********************************************************************************
** Form generated from reading UI file 'product.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_H
#define UI_PRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_product
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *name_LineEdit;
    QLineEdit *quantity_LineEdit;
    QPushButton *saveButton;

    void setupUi(QWidget *product)
    {
        if (product->objectName().isEmpty())
            product->setObjectName(QString::fromUtf8("product"));
        product->resize(400, 300);
        label = new QLabel(product);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 47, 13));
        label_2 = new QLabel(product);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 180, 47, 13));
        label_3 = new QLabel(product);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 47, 13));
        name_LineEdit = new QLineEdit(product);
        name_LineEdit->setObjectName(QString::fromUtf8("name_LineEdit"));
        name_LineEdit->setGeometry(QRect(90, 140, 113, 20));
        quantity_LineEdit = new QLineEdit(product);
        quantity_LineEdit->setObjectName(QString::fromUtf8("quantity_LineEdit"));
        quantity_LineEdit->setGeometry(QRect(100, 180, 113, 20));
        saveButton = new QPushButton(product);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(270, 250, 93, 28));

        retranslateUi(product);

        QMetaObject::connectSlotsByName(product);
    } // setupUi

    void retranslateUi(QWidget *product)
    {
        product->setWindowTitle(QCoreApplication::translate("product", "Form", nullptr));
        label->setText(QCoreApplication::translate("product", "Product", nullptr));
        label_2->setText(QCoreApplication::translate("product", "Quantity", nullptr));
        label_3->setText(QCoreApplication::translate("product", "Name", nullptr));
        saveButton->setText(QCoreApplication::translate("product", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class product: public Ui_product {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_H
