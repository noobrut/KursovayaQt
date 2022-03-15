#include "buyer.h"
#include "ui_buyer.h"
#include <QSqlQuery>
#include <QMessageBox>

buyer::buyer(QString name_corp, bool isEditing) :
    ui(new Ui::buyer)
{
    ui->setupUi(this);
    buyer::setWindowTitle("Buyer");
    ui->name_LineEdit->setText(name_corp);
    oldName_corp = name_corp;
    Editing = isEditing;
    QSqlDatabase SkladDB = QSqlDatabase::database("SkladDB");

    if (Editing)
    {
        QSqlQuery thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT email from public.buyer WHERE name_corp = :_currentName_corp");
        thisQuery.bindValue(":_currentName_corp", oldName_corp);
        thisQuery.exec();
        thisQuery.first();
        ui->email_LineEdit->setText(thisQuery.value(0).toString());

        thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT mobile_number from public.buyer WHERE name_corp = :_currentName_corp");
        thisQuery.bindValue(":_currentName_corp", oldName_corp);
        thisQuery.exec();
        thisQuery.first();
        ui->mobile_LineEdit->setText(thisQuery.value(0).toString());
    }
}

buyer::~buyer()
{
    delete ui;
}

void buyer::on_saveButton_clicked()
{
    QSqlQuery myQuery = QSqlQuery(SkladDB);
    bool checker = true;

    if (ui->mobile_LineEdit->text() == "")
    {
        checker = false;
        QMessageBox::about(this,"Error!", "No mobile data provided!");
    }

    if (ui->name_LineEdit->text() == "")
    {
        checker = false;
        QMessageBox::about(this,"Error!", "No name provided!");
    }

    if (ui->email_LineEdit->text() == "")
    {
        checker = false;
        QMessageBox::about(this,"Error!", "No email provided!");
    }

    if (checker)
    {
        if (!Editing)

        {
            myQuery.prepare("SELECT * FROM add_buyer(:_name_corp, :_email, :_mobile_number)");
            myQuery.bindValue(":_name_corp", ui->name_LineEdit->text());
            myQuery.bindValue(":_email", ui->email_LineEdit->text());
            myQuery.bindValue(":_mobile_number", ui->mobile_LineEdit->text());
            checker = myQuery.exec();
            if (checker)
            {
                QMessageBox::about(this,"Welcome!", "New buyer!");
                ui->name_LineEdit->setText("");
                ui->email_LineEdit->setText("");
                ui->mobile_LineEdit->setText("");
            }
            if (!checker)
                QMessageBox::about(this,"Error!", "Something went wrong!");
        }
        else
        {
            myQuery.prepare("SELECT * FROM change_buyer(:_oldname_corp, :_newname_corp, :_newemail, :_newmobile_number)");
            myQuery.bindValue(":_oldname_corp", oldName_corp);
            myQuery.bindValue(":_newname_corp", ui->name_LineEdit->text());
            myQuery.bindValue(":_newemail", ui->email_LineEdit->text());
            myQuery.bindValue(":_newmobile_number", ui->mobile_LineEdit->text());
            checker = myQuery.exec();
            if (checker)
            {
                trayIcon = new QSystemTrayIcon(this);
                trayIcon->setVisible(true);
                trayIcon->showMessage("We will miss them!", "You succesfully updated the buyer info.");
            }
            if (!checker)
                QMessageBox::about(this,"Error!", "Something went wrong!");
        }

    }
}
