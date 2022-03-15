/********************************************************************************
** Form generated from reading UI file 'deliveries.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIVERIES_H
#define UI_DELIVERIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deliveries
{
public:
    QComboBox *workerComboBox;
    QComboBox *productCombobox;
    QComboBox *providerCombobox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *timeEdit;
    QLineEdit *quantityEdit;
    QLineEdit *dateEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_8;
    QLineEdit *orderEdit;

    void setupUi(QWidget *deliveries)
    {
        if (deliveries->objectName().isEmpty())
            deliveries->setObjectName(QString::fromUtf8("deliveries"));
        deliveries->resize(400, 300);
        workerComboBox = new QComboBox(deliveries);
        workerComboBox->setObjectName(QString::fromUtf8("workerComboBox"));
        workerComboBox->setGeometry(QRect(80, 180, 69, 22));
        productCombobox = new QComboBox(deliveries);
        productCombobox->setObjectName(QString::fromUtf8("productCombobox"));
        productCombobox->setGeometry(QRect(80, 210, 69, 22));
        providerCombobox = new QComboBox(deliveries);
        providerCombobox->setObjectName(QString::fromUtf8("providerCombobox"));
        providerCombobox->setGeometry(QRect(80, 240, 69, 22));
        label = new QLabel(deliveries);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 180, 47, 13));
        label_2 = new QLabel(deliveries);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 220, 47, 13));
        label_3 = new QLabel(deliveries);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 250, 47, 13));
        timeEdit = new QLineEdit(deliveries);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(70, 40, 113, 20));
        quantityEdit = new QLineEdit(deliveries);
        quantityEdit->setObjectName(QString::fromUtf8("quantityEdit"));
        quantityEdit->setGeometry(QRect(70, 80, 113, 20));
        dateEdit = new QLineEdit(deliveries);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(70, 120, 113, 20));
        label_4 = new QLabel(deliveries);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 40, 47, 13));
        label_5 = new QLabel(deliveries);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 80, 47, 13));
        label_6 = new QLabel(deliveries);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 120, 47, 13));
        label_7 = new QLabel(deliveries);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 10, 47, 13));
        pushButton = new QPushButton(deliveries);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 260, 93, 28));
        label_8 = new QLabel(deliveries);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 150, 81, 16));
        orderEdit = new QLineEdit(deliveries);
        orderEdit->setObjectName(QString::fromUtf8("orderEdit"));
        orderEdit->setGeometry(QRect(90, 150, 113, 22));

        retranslateUi(deliveries);

        QMetaObject::connectSlotsByName(deliveries);
    } // setupUi

    void retranslateUi(QWidget *deliveries)
    {
        deliveries->setWindowTitle(QCoreApplication::translate("deliveries", "Form", nullptr));
        label->setText(QCoreApplication::translate("deliveries", "Worker", nullptr));
        label_2->setText(QCoreApplication::translate("deliveries", "Product", nullptr));
        label_3->setText(QCoreApplication::translate("deliveries", "Provider", nullptr));
        label_4->setText(QCoreApplication::translate("deliveries", "Time", nullptr));
        label_5->setText(QCoreApplication::translate("deliveries", "Quantity", nullptr));
        label_6->setText(QCoreApplication::translate("deliveries", "Date", nullptr));
        label_7->setText(QCoreApplication::translate("deliveries", "Deliveries", nullptr));
        pushButton->setText(QCoreApplication::translate("deliveries", "Save", nullptr));
        label_8->setText(QCoreApplication::translate("deliveries", "Order number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deliveries: public Ui_deliveries {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVERIES_H
