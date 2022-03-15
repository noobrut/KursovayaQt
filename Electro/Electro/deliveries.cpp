#include "deliveries.h"
#include "ui_deliveries.h"
#include <QSqlDatabase>
#include <QSql>
#include <QMessageBox>
deliveries::deliveries(QString order_number, bool isEditing) :
    ui(new Ui::deliveries)
{
    ui->setupUi(this);
    deliveries::setWindowTitle("Deliveries");
    QSqlDatabase SkladDB = QSqlDatabase::database("SkladDB");

    worker = new QSqlQueryModel;
    QSqlQuery get_worker = QSqlQuery(SkladDB);
    get_worker.prepare("SELECT fio FROM public.worker");
    get_worker.exec();
    worker->setQuery(get_worker);
    ui->workerComboBox->setModel(worker);

    product = new QSqlQueryModel;
    QSqlQuery get_product = QSqlQuery(SkladDB);
    get_product.prepare("SELECT name FROM public.product");
    get_product.exec();
    product->setQuery(get_product);
    ui->productCombobox->setModel(product);

    provider = new QSqlQueryModel;
    QSqlQuery get_provider = QSqlQuery(SkladDB);
    get_provider.prepare("SELECT name FROM public.provider");
    get_provider.exec();
    provider->setQuery(get_provider);
    ui->providerCombobox->setModel(provider);



    Editing = isEditing;
    oldOrder = order_number;
    QSqlQuery thisQuery = QSqlQuery(SkladDB);
}

deliveries::~deliveries()
{
    delete ui;
}

void deliveries::on_pushButton_clicked()
{


    if (Editing)
    {
        QSqlQuery thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT * from change_deliveries(:_oldorder, :_newtime, :_newworker, :_newproduct, :_newprovider, :_newquantity, :_newdate,:_neworder_number)");
        thisQuery.bindValue(":_oldorder", oldOrder);
        thisQuery.bindValue(":_newtime", ui->timeEdit->text());
        thisQuery.bindValue(":_newquantity", ui->quantityEdit->text());
        thisQuery.bindValue(":_newdate", ui->dateEdit->text());
         thisQuery.bindValue(":_neworder_number", ui->orderEdit->text());
        thisQuery.bindValue(":_newworker", ui->workerComboBox->currentText());
        thisQuery.bindValue(":_newproduct", ui->productCombobox->currentText());
        thisQuery.bindValue(":_newprovider", ui->providerCombobox->currentText());
        bool checker = thisQuery.exec();
        if (checker)
        {
            QMessageBox::about(this,"Great!", "Deliveries changed!");
        }
        if (!checker)
            QMessageBox::about(this,"Error!", "Something went wrong!");
    }

    if (!Editing)
    {
        QSqlQuery thisQuery = QSqlQuery(SkladDB);

        thisQuery.prepare("SELECT * FROM add_deliveries(:_newtime, :_newworker, :_newproduct, :_newprovider, :_newquantity, :_newdate,:_neworder_number)");
        thisQuery.bindValue(":_newtime", ui->timeEdit->text());
        thisQuery.bindValue(":_newworker", ui->workerComboBox->currentText());
        thisQuery.bindValue(":_newproduct", ui->productCombobox->currentText());
        thisQuery.bindValue(":_newprovider", ui->providerCombobox->currentText());
        thisQuery.bindValue(":_newquantity", ui->quantityEdit->text());
        thisQuery.bindValue(":_newdate", ui->dateEdit->text()); 
        thisQuery.bindValue(":_neworder_number", ui->orderEdit->text());
        bool checker = thisQuery.exec();


        if (checker)
        {
            QMessageBox::about(this,"Great!", "New deliveries!");
        }
        if (!checker)
            QMessageBox::about(this,"Error!", "Something went wrong!");
    }
}
