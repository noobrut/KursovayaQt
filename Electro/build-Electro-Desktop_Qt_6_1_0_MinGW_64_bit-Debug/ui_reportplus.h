/********************************************************************************
** Form generated from reading UI file 'reportplus.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTPLUS_H
#define UI_REPORTPLUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_reportPlus
{
public:
    QTableView *tableView;
    QLabel *label;
    QLabel *logo;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QDialog *reportPlus)
    {
        if (reportPlus->objectName().isEmpty())
            reportPlus->setObjectName(QString::fromUtf8("reportPlus"));
        reportPlus->resize(690, 459);
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica Neue")});
        reportPlus->setFont(font);
        tableView = new QTableView(reportPlus);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 50, 641, 381));
        tableView->setFont(font);
        label = new QLabel(reportPlus);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 121, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font1.setPointSize(15);
        font1.setItalic(true);
        label->setFont(font1);
        logo = new QLabel(reportPlus);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(0, 0, 51, 51));
        label_2 = new QLabel(reportPlus);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(590, 440, 71, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font2.setPointSize(9);
        label_2->setFont(font2);
        label_3 = new QLabel(reportPlus);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 440, 561, 16));
        label_3->setFont(font2);
        pushButton = new QPushButton(reportPlus);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 10, 121, 31));
        pushButton_2 = new QPushButton(reportPlus);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 10, 111, 32));
        QFont font3;
        font3.setPointSize(10);
        pushButton_2->setFont(font3);
        pushButton_3 = new QPushButton(reportPlus);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 10, 112, 32));
        pushButton_4 = new QPushButton(reportPlus);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(470, 10, 112, 32));
        pushButton_5 = new QPushButton(reportPlus);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(570, 10, 91, 32));
        pushButton_6 = new QPushButton(reportPlus);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(650, 60, 41, 32));
        pushButton_7 = new QPushButton(reportPlus);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(650, 90, 41, 32));
        pushButton_8 = new QPushButton(reportPlus);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(650, 120, 41, 32));
        pushButton_9 = new QPushButton(reportPlus);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(650, 150, 41, 32));
        pushButton_10 = new QPushButton(reportPlus);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(650, 180, 41, 32));
        pushButton_11 = new QPushButton(reportPlus);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(650, 210, 41, 32));

        retranslateUi(reportPlus);

        QMetaObject::connectSlotsByName(reportPlus);
    } // setupUi

    void retranslateUi(QDialog *reportPlus)
    {
        reportPlus->setWindowTitle(QCoreApplication::translate("reportPlus", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("reportPlus", "Available reports:", nullptr));
        logo->setText(QCoreApplication::translate("reportPlus", "Logo", nullptr));
        label_2->setText(QCoreApplication::translate("reportPlus", "May 2020 beta", nullptr));
        label_3->setText(QCoreApplication::translate("reportPlus", "This is a rought beta version of the upcoming reports feature. To get more details please contact the developer.", nullptr));
        pushButton->setText(QCoreApplication::translate("reportPlus", "Grafton street", nullptr));
        pushButton_2->setText(QCoreApplication::translate("reportPlus", "Invoice per office", nullptr));
        pushButton_3->setText(QCoreApplication::translate("reportPlus", "amount > avg", nullptr));
        pushButton_4->setText(QCoreApplication::translate("reportPlus", "max > $50", nullptr));
        pushButton_5->setText(QCoreApplication::translate("reportPlus", "Cupertino", nullptr));
        pushButton_6->setText(QCoreApplication::translate("reportPlus", "1", nullptr));
        pushButton_7->setText(QCoreApplication::translate("reportPlus", "2", nullptr));
        pushButton_8->setText(QCoreApplication::translate("reportPlus", "3", nullptr));
        pushButton_9->setText(QCoreApplication::translate("reportPlus", "4", nullptr));
        pushButton_10->setText(QCoreApplication::translate("reportPlus", "5", nullptr));
        pushButton_11->setText(QCoreApplication::translate("reportPlus", "6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reportPlus: public Ui_reportPlus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTPLUS_H
