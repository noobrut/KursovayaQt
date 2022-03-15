/********************************************************************************
** Form generated from reading UI file 'worker.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKER_H
#define UI_WORKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_worker
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *fio_LineEdit;
    QLineEdit *passport_LineEdit;
    QLineEdit *wage_LineEdit;
    QLineEdit *mobile_LineEdit;

    void setupUi(QWidget *worker)
    {
        if (worker->objectName().isEmpty())
            worker->setObjectName(QString::fromUtf8("worker"));
        worker->resize(400, 300);
        label = new QLabel(worker);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 10, 47, 13));
        label_2 = new QLabel(worker);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 47, 13));
        label_3 = new QLabel(worker);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 150, 47, 13));
        label_4 = new QLabel(worker);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 190, 47, 13));
        label_5 = new QLabel(worker);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 220, 71, 16));
        fio_LineEdit = new QLineEdit(worker);
        fio_LineEdit->setObjectName(QString::fromUtf8("fio_LineEdit"));
        fio_LineEdit->setGeometry(QRect(110, 110, 113, 20));
        passport_LineEdit = new QLineEdit(worker);
        passport_LineEdit->setObjectName(QString::fromUtf8("passport_LineEdit"));
        passport_LineEdit->setGeometry(QRect(110, 140, 113, 20));
        wage_LineEdit = new QLineEdit(worker);
        wage_LineEdit->setObjectName(QString::fromUtf8("wage_LineEdit"));
        wage_LineEdit->setGeometry(QRect(110, 190, 113, 20));
        mobile_LineEdit = new QLineEdit(worker);
        mobile_LineEdit->setObjectName(QString::fromUtf8("mobile_LineEdit"));
        mobile_LineEdit->setGeometry(QRect(110, 220, 113, 20));

        retranslateUi(worker);

        QMetaObject::connectSlotsByName(worker);
    } // setupUi

    void retranslateUi(QWidget *worker)
    {
        worker->setWindowTitle(QCoreApplication::translate("worker", "Form", nullptr));
        label->setText(QCoreApplication::translate("worker", "Worker", nullptr));
        label_2->setText(QCoreApplication::translate("worker", "Fio", nullptr));
        label_3->setText(QCoreApplication::translate("worker", "Passport", nullptr));
        label_4->setText(QCoreApplication::translate("worker", "Wage", nullptr));
        label_5->setText(QCoreApplication::translate("worker", "Mobile Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class worker: public Ui_worker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKER_H
