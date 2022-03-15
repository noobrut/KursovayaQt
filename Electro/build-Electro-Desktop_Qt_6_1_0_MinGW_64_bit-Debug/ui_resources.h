/********************************************************************************
** Form generated from reading UI file 'resources.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCES_H
#define UI_RESOURCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_resources
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *resources)
    {
        if (resources->objectName().isEmpty())
            resources->setObjectName(QString::fromUtf8("resources"));
        resources->resize(270, 119);
        label = new QLabel(resources);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 71));
        label_2 = new QLabel(resources);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 10, 71, 71));
        label_3 = new QLabel(resources);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 10, 71, 71));
        label_4 = new QLabel(resources);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 90, 151, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica Neue")});
        font.setPointSize(9);
        label_4->setFont(font);

        retranslateUi(resources);

        QMetaObject::connectSlotsByName(resources);
    } // setupUi

    void retranslateUi(QDialog *resources)
    {
        resources->setWindowTitle(QCoreApplication::translate("resources", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("resources", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("resources", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("resources", "TextLabel", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class resources: public Ui_resources {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCES_H
