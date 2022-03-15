/********************************************************************************
** Form generated from reading UI file 'sklad.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKLAD_H
#define UI_SKLAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sklad
{
public:
    QTableView *tableView;
    QComboBox *comboBox;
    QPushButton *showBuyer;
    QPushButton *showDeliveries;
    QPushButton *showIssuing;
    QPushButton *showWorker;
    QPushButton *showProduct;
    QPushButton *showProvider;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QPushButton *showLogs;

    void setupUi(QWidget *Sklad)
    {
        if (Sklad->objectName().isEmpty())
            Sklad->setObjectName(QString::fromUtf8("Sklad"));
        Sklad->resize(560, 400);
        Sklad->setMinimumSize(QSize(560, 400));
        Sklad->setMaximumSize(QSize(560, 400));
        QPalette palette;
        QBrush brush(QColor(0, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(0, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        Sklad->setPalette(palette);
        tableView = new QTableView(Sklad);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 60, 561, 341));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        tableView->setPalette(palette1);
        comboBox = new QComboBox(Sklad);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(490, 20, 69, 22));
        showBuyer = new QPushButton(Sklad);
        showBuyer->setObjectName(QString::fromUtf8("showBuyer"));
        showBuyer->setGeometry(QRect(0, 0, 93, 28));
        showDeliveries = new QPushButton(Sklad);
        showDeliveries->setObjectName(QString::fromUtf8("showDeliveries"));
        showDeliveries->setGeometry(QRect(0, 30, 93, 28));
        showIssuing = new QPushButton(Sklad);
        showIssuing->setObjectName(QString::fromUtf8("showIssuing"));
        showIssuing->setGeometry(QRect(100, 0, 93, 28));
        showWorker = new QPushButton(Sklad);
        showWorker->setObjectName(QString::fromUtf8("showWorker"));
        showWorker->setGeometry(QRect(100, 30, 93, 28));
        showProduct = new QPushButton(Sklad);
        showProduct->setObjectName(QString::fromUtf8("showProduct"));
        showProduct->setGeometry(QRect(200, 0, 93, 28));
        showProvider = new QPushButton(Sklad);
        showProvider->setObjectName(QString::fromUtf8("showProvider"));
        showProvider->setGeometry(QRect(200, 30, 93, 28));
        addButton = new QPushButton(Sklad);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(300, 0, 93, 28));
        editButton = new QPushButton(Sklad);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(300, 30, 93, 28));
        deleteButton = new QPushButton(Sklad);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(400, 0, 93, 28));
        showLogs = new QPushButton(Sklad);
        showLogs->setObjectName(QString::fromUtf8("showLogs"));
        showLogs->setGeometry(QRect(400, 30, 93, 28));

        retranslateUi(Sklad);

        QMetaObject::connectSlotsByName(Sklad);
    } // setupUi

    void retranslateUi(QWidget *Sklad)
    {
        Sklad->setWindowTitle(QCoreApplication::translate("Sklad", "Form", nullptr));
        showBuyer->setText(QCoreApplication::translate("Sklad", "Buyer", nullptr));
        showDeliveries->setText(QCoreApplication::translate("Sklad", "Deliveries", nullptr));
        showIssuing->setText(QCoreApplication::translate("Sklad", "Issuing", nullptr));
        showWorker->setText(QCoreApplication::translate("Sklad", "Worker", nullptr));
        showProduct->setText(QCoreApplication::translate("Sklad", "Product", nullptr));
        showProvider->setText(QCoreApplication::translate("Sklad", "Provider", nullptr));
        addButton->setText(QCoreApplication::translate("Sklad", "Add", nullptr));
        editButton->setText(QCoreApplication::translate("Sklad", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("Sklad", "Delete", nullptr));
        showLogs->setText(QCoreApplication::translate("Sklad", "Logs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sklad: public Ui_Sklad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKLAD_H
