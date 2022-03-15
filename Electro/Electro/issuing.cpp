#include "issuing.h"
#include "ui_issuing.h"
#include <QSqlDatabase>
#include <QSql>
#include <QMessageBox>
issuing::issuing(int issuing_id, bool isEditing) :
    ui(new Ui::issuing)
{
    ui->setupUi(this);
    issuing::setWindowTitle("Issuing");
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
    ui->productComboBox->setModel(product);

    buyer = new QSqlQueryModel;
    QSqlQuery get_buyer = QSqlQuery(SkladDB);
    get_buyer.prepare("SELECT name FROM public.buyer");
    get_buyer.exec();
    buyer->setQuery(get_buyer);
    ui->buyerComboBox->setModel(buyer);

    Editing = isEditing;
    oldID = issuing_id;
    QSqlQuery thisQuery = QSqlQuery(SkladDB);
}

issuing::~issuing()
{
    delete ui;
}

void issuing::on_pushButton_clicked()
{
    if (Editing)
    {
        QSqlQuery thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT * from change_deliveries(:_oldtime, :_newtime, :_newworker, :_newproduct, :_newbuyer, :_newquatity, :_newdate);");
        thisQuery.bindValue(":_oldtime", oldID);
        thisQuery.bindValue(":_newtime", ui->timeEdit->text());
        thisQuery.bindValue(":_newquantity", ui->quantityEdit->text());
        thisQuery.bindValue(":_newdate", ui->dateEdit->text());
        thisQuery.bindValue(":_newworker", ui->workerComboBox->currentText());
        thisQuery.bindValue(":_newproduct", ui->productComboBox->currentText());
        thisQuery.bindValue(":_newbuyer", ui->buyerComboBox->currentText());
        bool checker = thisQuery.exec();
        if (checker)
        {
            QMessageBox::about(this,"Great!", "Issuing changed!");
        }
        if (!checker)
            QMessageBox::about(this,"Error!", "Something went wrong!");
    }

    if (!Editing)
    {
        QSqlQuery thisQuery = QSqlQuery(SkladDB);
        thisQuery.prepare("SELECT * from add_issuing(:_newtime, :_newworker, :_newproduct, :_newbuyer, :_newquatity, :_newdate);");
        thisQuery.bindValue(":_newtime", ui->timeEdit->text());
        thisQuery.bindValue(":_newquantity", ui->quantityEdit->text());
        thisQuery.bindValue(":_newdate", ui->dateEdit->text());
        thisQuery.bindValue(":_newworker", ui->workerComboBox->currentText());
        thisQuery.bindValue(":_newproduct", ui->productComboBox->currentText());
        thisQuery.bindValue(":_newbuyer", ui->buyerComboBox->currentText());
        bool checker = thisQuery.exec();
        if (checker)
        {
            QMessageBox::about(this,"Great!", "New issuing!");
        }
        if (!checker)
            QMessageBox::about(this,"Error!", "Something went wrong!");
    }
}
