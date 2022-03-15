#include "provider.h"
#include "ui_provider.h"
#include <QSqlQuery>
#include <QMessageBox>

provider::provider(QString name, bool isEditing) :
    ui(new Ui::provider)
{
    ui->setupUi(this);
    provider::setWindowTitle("Provider");
    ui->name_LineEdit->setText(name);
    oldName = name;
    Editing = isEditing;
    QSqlDatabase SkladDB = QSqlDatabase::database("SkladDB");

    if (Editing)
    {
        QSqlQuery thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT email from public.provider WHERE name = :_currentName");
        thisQuery.bindValue(":_currentName", oldName);
        thisQuery.exec();
        thisQuery.first();
        ui->email_LineEdit->setText(thisQuery.value(0).toString());

        thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT mobile_number from public.provider WHERE name = :_currentName");
        thisQuery.bindValue(":_currentName", oldName);
        thisQuery.exec();
        thisQuery.first();
        ui->mobile_LineEdit->setText(thisQuery.value(0).toString());
    }
}

provider::~provider()
{
    delete ui;
}

void provider::on_saveButton_clicked()
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
            myQuery.prepare("SELECT * FROM add_provider(:_name, :_email, :_mobile_number)");
            myQuery.bindValue(":_name", ui->name_LineEdit->text());
            myQuery.bindValue(":_email", ui->email_LineEdit->text());
            myQuery.bindValue(":_mobile_number", ui->mobile_LineEdit->text());
            checker = myQuery.exec();
            if (checker)
            {
                QMessageBox::about(this,"Welcome!", "New provider!");
                ui->name_LineEdit->setText("");
                ui->email_LineEdit->setText("");
                ui->mobile_LineEdit->setText("");
            }
            if (!checker)
                QMessageBox::about(this,"Error!", "Something went wrong!");
        }
        else
        {
            myQuery.prepare("SELECT * FROM change_provider(:_oldname, :_newname, :_newemail, :_newmobile_number)");
            myQuery.bindValue(":_oldname", oldName);
            myQuery.bindValue(":_newname", ui->name_LineEdit->text());
            myQuery.bindValue(":_newemail", ui->email_LineEdit->text());
            myQuery.bindValue(":_newmobile_number", ui->mobile_LineEdit->text());
            checker = myQuery.exec();
            if (checker)
            {
                trayIcon = new QSystemTrayIcon(this);
                trayIcon->setVisible(true);
                trayIcon->showMessage("We will miss them!", "You succesfully updated the provider info.");
            }
            if (!checker)
                QMessageBox::about(this,"Error!", "Something went wrong!");
        }

    }
}
