/********************************************************************************
** Form generated from reading UI file 'issuing.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUING_H
#define UI_ISSUING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_issuing
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *timeEdit;
    QLineEdit *dateEdit;
    QLineEdit *quantityEdit;
    QComboBox *buyerComboBox;
    QComboBox *productComboBox;
    QComboBox *workerComboBox;
    QPushButton *pushButton;

    void setupUi(QWidget *issuing)
    {
        if (issuing->objectName().isEmpty())
            issuing->setObjectName(QString::fromUtf8("issuing"));
        issuing->resize(400, 300);
        label = new QLabel(issuing);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 47, 13));
        label_2 = new QLabel(issuing);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 47, 13));
        label_3 = new QLabel(issuing);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 47, 13));
        label_4 = new QLabel(issuing);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 47, 13));
        label_5 = new QLabel(issuing);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 140, 47, 13));
        label_6 = new QLabel(issuing);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 180, 47, 13));
        label_7 = new QLabel(issuing);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 220, 47, 13));
        label_8 = new QLabel(issuing);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 250, 47, 13));
        timeEdit = new QLineEdit(issuing);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(60, 90, 113, 20));
        dateEdit = new QLineEdit(issuing);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(60, 120, 113, 20));
        quantityEdit = new QLineEdit(issuing);
        quantityEdit->setObjectName(QString::fromUtf8("quantityEdit"));
        quantityEdit->setGeometry(QRect(70, 150, 113, 20));
        buyerComboBox = new QComboBox(issuing);
        buyerComboBox->setObjectName(QString::fromUtf8("buyerComboBox"));
        buyerComboBox->setGeometry(QRect(90, 180, 69, 22));
        productComboBox = new QComboBox(issuing);
        productComboBox->setObjectName(QString::fromUtf8("productComboBox"));
        productComboBox->setGeometry(QRect(90, 210, 69, 22));
        workerComboBox = new QComboBox(issuing);
        workerComboBox->setObjectName(QString::fromUtf8("workerComboBox"));
        workerComboBox->setGeometry(QRect(100, 250, 69, 22));
        pushButton = new QPushButton(issuing);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 260, 93, 28));

        retranslateUi(issuing);

        QMetaObject::connectSlotsByName(issuing);
    } // setupUi

    void retranslateUi(QWidget *issuing)
    {
        issuing->setWindowTitle(QCoreApplication::translate("issuing", "Form", nullptr));
        label->setText(QCoreApplication::translate("issuing", "Issuing", nullptr));
        label_2->setText(QCoreApplication::translate("issuing", "Time", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("issuing", "Date", nullptr));
        label_5->setText(QCoreApplication::translate("issuing", "Quantity", nullptr));
        label_6->setText(QCoreApplication::translate("issuing", "Buyer", nullptr));
        label_7->setText(QCoreApplication::translate("issuing", "Product", nullptr));
        label_8->setText(QCoreApplication::translate("issuing", "Worker", nullptr));
        pushButton->setText(QCoreApplication::translate("issuing", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class issuing: public Ui_issuing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUING_H
