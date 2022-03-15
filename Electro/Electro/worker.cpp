#include "worker.h"
#include "ui_worker.h"
#include <QSqlQuery>
#include <QMessageBox>

worker::worker(QString fio, bool isEditing) :
    ui(new Ui::worker)
{
    ui->setupUi(this);
    worker::setWindowTitle("Worker");
    ui->fio_LineEdit->setText(fio);
    oldFio = fio;
    Editing = isEditing;
    QSqlDatabase SkladDB = QSqlDatabase::database("SkladDB");

    if (Editing)
    {
        QSqlQuery thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT passport from public.worker WHERE fio = :_currentFio");
        thisQuery.bindValue(":_currentFio", oldFio);
        thisQuery.exec();
        thisQuery.first();
        ui->passport_LineEdit->setText(thisQuery.value(0).toString());

        thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT wage from public.worker WHERE fio = :_currentFio");
        thisQuery.bindValue(":_currentFio", oldFio);
        thisQuery.exec();
        thisQuery.first();
        ui->wage_LineEdit->setText(thisQuery.value(0).toString());


        thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT mobile_number from public.worker WHERE fio = :_currentFio");
        thisQuery.bindValue(":_currentFio", oldFio);
        thisQuery.exec();
        thisQuery.first();
        ui->mobile_LineEdit->setText(thisQuery.value(0).toString());
    }
}

worker::~worker()
{
    delete ui;
}

void worker::on_saveButton_clicked()
{
    QSqlQuery myQuery = QSqlQuery(SkladDB);
    bool checker = true;

    if (ui->fio_LineEdit->text() == "")
    {
        checker = false;
        QMessageBox::about(this,"Error!", "No fio data provided!");
    }

    if (ui->passport_LineEdit->text() == "")
    {
        checker = false;
        QMessageBox::about(this,"Error!", "No passport provided!");
    }

    if (ui->wage_LineEdit->text() == "")
    {
        checker = false;
        QMessageBox::about(this,"Error!", "No wage provided!");
    }
    if (ui->mobile_LineEdit->text() == "")
    {
        checker = false;
        QMessageBox::about(this,"Error!", "No mobile provided!");
    }

    if (checker)
    {
        if (!Editing)

        {
            myQuery.prepare("SELECT * FROM add_worker(:_fio, :_passport,:_wage, :_mobile_number)");
            myQuery.bindValue(":_fio", ui->fio_LineEdit->text());
            myQuery.bindValue(":_passport", ui->passport_LineEdit->text());
            myQuery.bindValue(":_wage", ui->wage_LineEdit->text());
            myQuery.bindValue(":_mobile_number", ui->mobile_LineEdit->text());
            checker = myQuery.exec();
            if (checker)
            {
                QMessageBox::about(this,"Welcome!", "New Worker!");
                ui->fio_LineEdit->setText("");
                ui->passport_LineEdit->setText("");
                ui->wage_LineEdit->setText("");
                ui->mobile_LineEdit->setText("");
            }
            if (!checker)
                QMessageBox::about(this,"Error!", "Something went wrong!");
        }
        else
        {
            myQuery.prepare("SELECT * FROM change_worker(:_oldfio, :_newfio, :_newpassport,:_newwage, :_newmobile_number)");
            myQuery.bindValue(":_oldname", oldFio);
            myQuery.bindValue(":_newfio", ui->fio_LineEdit->text());
            myQuery.bindValue(":_newpassport", ui->passport_LineEdit->text());
            myQuery.bindValue(":_newwage", ui->wage_LineEdit->text());
            myQuery.bindValue(":_newmobile_number", ui->mobile_LineEdit->text());
            checker = myQuery.exec();
            if (checker)
            {
                trayIcon = new QSystemTrayIcon(this);
                trayIcon->setVisible(true);
                trayIcon->showMessage("We will miss them!", "You succesfully updated the worker info.");
            }
            if (!checker)
                QMessageBox::about(this,"Error!", "Something went wrong!");
        }

    }
}
