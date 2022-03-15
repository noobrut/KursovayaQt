#include "product.h"
#include "ui_product.h"
#include <QSqlQuery>
#include <QMessageBox>

product::product(QString name, bool isEditing) :
    ui(new Ui::product)
{
    ui->setupUi(this);
    product::setWindowTitle("Product");
    ui->name_LineEdit->setText(name);
    oldName = name;
    Editing = isEditing;
    QSqlDatabase SkladDB = QSqlDatabase::database("SkladDB");

    if (Editing)
    {
        QSqlQuery thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT quantity from public.product WHERE name = :_currentName");
        thisQuery.bindValue(":_currentName", oldName);
        thisQuery.exec();
        thisQuery.first();
        ui->quantity_LineEdit->setText(thisQuery.value(0).toString());


    }
}

product::~product()
{
    delete ui;
}

void product::on_saveButton_clicked()
{
    QSqlQuery myQuery = QSqlQuery(SkladDB);
    bool checker = true;



    if (ui->name_LineEdit->text() == "")
    {
        checker = false;
        QMessageBox::about(this,"Error!", "No name provided!");
    }

    if (ui->quantity_LineEdit->text() == "")
    {
        checker = false;
        QMessageBox::about(this,"Error!", "No quantity provided!");
    }

    if (checker)
    {
        if (!Editing)

        {
            myQuery.prepare("SELECT * FROM add_product(:_name, :_quantity)");
            myQuery.bindValue(":_name", ui->name_LineEdit->text());
            myQuery.bindValue(":_quantity", ui->quantity_LineEdit->text());

            checker = myQuery.exec();
            if (checker)
            {
                QMessageBox::about(this,"Welcome!", "New product!");
                ui->name_LineEdit->setText("");
                ui->quantity_LineEdit->setText("");

            }
            if (!checker)
                QMessageBox::about(this,"Error!", "Something went wrong!");
        }
        else
        {
            myQuery.prepare("SELECT * FROM change_product(:_oldname, :_newname, :_newquantity)");
            myQuery.bindValue(":_oldname", oldName);
            myQuery.bindValue(":_newname", ui->name_LineEdit->text());
            myQuery.bindValue(":_newquantity", ui->quantity_LineEdit->text());
            checker = myQuery.exec();
            if (checker)
            {
                trayIcon = new QSystemTrayIcon(this);
                trayIcon->setVisible(true);
                trayIcon->showMessage("We will miss them!", "You succesfully updated the product info.");
            }
            if (!checker)
                QMessageBox::about(this,"Error!", "Something went wrong!");
        }

    }
}
