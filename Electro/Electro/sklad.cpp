#include "sklad.h"
#include "ui_sklad.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QShortcut>
#include <QSqlQuery>

Sklad::Sklad ():
 ui(new Ui::Sklad)
{
    ui->setupUi(this);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    Sklad::setWindowTitle("Sklad");


    ui->tableView->verticalHeader()->hide();

    QSqlDatabase SkladDB = QSqlDatabase::database("kurs_db");
    myDeliveries = new class deliveries (0, false);
    myIssuing = new class issuing (0, false);
    myWorker = new class worker("", false);
    myProduct = new class product("", false);
    myProvider = new class provider("", false);
    myBuyer = new class buyer("", false);
    chosenTable = "none";
    report = new reportPlus;
}

Sklad::~Sklad()
{
    delete ui;
    delete myDeliveries;
    delete myIssuing;
    delete myWorker;
    delete myProduct;
    delete myProvider;
    delete myBuyer;
}

void Sklad::on_showDeliveries_clicked()
{
    ui->comboBox->setCurrentIndex(0);
    deliveries = new QSqlTableModel(this,SkladDB);
    QSqlQuery get_deliv = QSqlQuery(SkladDB);
    get_deliv.prepare("select deliveries_id, time_d, (select fio from worker where worker_id = del_worker_id), (select name from product where product_id = del_product_id), (select name from provider where provider_id = del_provider_id), quantity, date, order_number from deliveries");
    get_deliv.exec();
    deliveries->setQuery(get_deliv);
//    deliveries->setTable("deliveries");
//    deliveries->select();
    deliveries->setHeaderData(0, Qt::Horizontal, tr("ID"));
    deliveries->setHeaderData(1, Qt::Horizontal, tr("Time"));
    deliveries->setHeaderData(2, Qt::Horizontal, tr("Worker"));
    deliveries->setHeaderData(3, Qt::Horizontal, tr("Product"));
    deliveries->setHeaderData(4, Qt::Horizontal, tr("Provider"));
    deliveries->setHeaderData(5, Qt::Horizontal, tr("Quantity"));
    deliveries->setHeaderData(6, Qt::Horizontal, tr("Date"));
    deliveries->setHeaderData(7, Qt::Horizontal, tr("Order Number"));
    ui->tableView->setModel(deliveries);
    chosenTable = "deliveries";
    myIssuing->hide();
    myWorker->hide();

    comboBoxModel = new QSqlQueryModel;
    QSqlQuery get_deliveries = QSqlQuery(SkladDB);
    get_deliveries.prepare("SELECT order_number FROM public.deliveries");
    get_deliveries.exec();
    comboBoxModel->setQuery(get_deliveries);
    ui->comboBox->setModel(comboBoxModel);
    ui->tableView->setColumnHidden(0, false);
}

void Sklad::on_showBuyer_clicked()
{
    ui->comboBox->setCurrentIndex(0);
    buyer = new QSqlTableModel(this,SkladDB);
    buyer->setTable("buyer");
    buyer->select();
    buyer->setHeaderData(0, Qt::Horizontal, tr("ID"));
    buyer->setHeaderData(1, Qt::Horizontal, tr("Name"));
    buyer->setHeaderData(2, Qt::Horizontal, tr("Email"));
    buyer->setHeaderData(3, Qt::Horizontal, tr("Mobile Number"));

    ui->tableView->setModel(buyer);
    chosenTable = "buyer";
    myDeliveries->hide();
    myIssuing->hide();
    myWorker->hide();
    myProduct->hide();
    myProvider->hide();

    comboBoxModel = new QSqlQueryModel;
    QSqlQuery get_buyer = QSqlQuery(SkladDB);
    get_buyer.prepare("SELECT name_corp FROM public.buyer");
    get_buyer.exec();
    comboBoxModel->setQuery(get_buyer);
    ui->comboBox->setModel(comboBoxModel);
    ui->tableView->setColumnHidden(0, true);
}

void Sklad::on_showIssuing_clicked()
{
    ui->comboBox->setCurrentIndex(0);
    myDeliveries->hide();
    myBuyer->hide();
    myWorker->hide();
    myProduct->hide();
    myProvider->hide();
    issuing = new QSqlTableModel(this,SkladDB);
    issuing->setTable("issuing");
    issuing->select();
    ui->tableView->setModel(issuing);
    chosenTable = "issuing";

    comboBoxModel = new QSqlQueryModel;
    QSqlQuery get_issuing = QSqlQuery(SkladDB);
    get_issuing.prepare("SELECT issuing_id FROM issuing");
    get_issuing.exec();
    comboBoxModel->setQuery(get_issuing);
    ui->comboBox->setModel(comboBoxModel);
}

void Sklad::on_showProduct_clicked()
{
    ui->comboBox->setCurrentIndex(0);
    product = new QSqlTableModel(this,SkladDB);
    product->setTable("product");
    product->select();
    ui->tableView->setModel(product);
    chosenTable = "product";

    comboBoxModel = new QSqlQueryModel;
    QSqlQuery get_product = QSqlQuery(SkladDB);
    get_product.prepare("SELECT name FROM publi.product");
    get_product.exec();
    comboBoxModel->setQuery(get_product);
    ui->comboBox->setModel(comboBoxModel);
}

void Sklad::on_showProvider_clicked()
{
    ui->comboBox->setCurrentIndex(0);
    provider = new QSqlTableModel(this,SkladDB);
    provider->setTable("provider");
    provider->select();
    provider->setHeaderData(0, Qt::Horizontal, tr("ID"));
    provider->setHeaderData(1, Qt::Horizontal, tr("Name"));
    provider->setHeaderData(2, Qt::Horizontal, tr("Email"));
    provider->setHeaderData(3, Qt::Horizontal, tr("Mobile Number"));

    ui->tableView->setModel(provider);
    chosenTable = "provider";
    myDeliveries->hide();
    myIssuing->hide();
    myWorker->hide();
    myProduct->hide();
    myBuyer->hide();

    comboBoxModel = new QSqlQueryModel;
    QSqlQuery get_provider = QSqlQuery(SkladDB);
    get_provider.prepare("SELECT name FROM public.provider");
    get_provider.exec();
    comboBoxModel->setQuery(get_provider);
    ui->comboBox->setModel(comboBoxModel);
}
void Sklad::on_showWorker_clicked()
{
    ui->comboBox->setCurrentIndex(0);
    worker = new QSqlTableModel(this,SkladDB);
    worker->setTable("worker");
    worker->select();
    worker->setHeaderData(0, Qt::Horizontal, tr("ID"));
    worker->setHeaderData(1, Qt::Horizontal, tr("Fio"));
    worker->setHeaderData(2, Qt::Horizontal, tr("Passport"));
    worker->setHeaderData(3, Qt::Horizontal, tr("Wage"));
    worker->setHeaderData(4, Qt::Horizontal, tr("Mobile Number"));

    ui->tableView->setModel(worker);
    chosenTable = "worker";
    myDeliveries->hide();
    myIssuing->hide();
    myBuyer->hide();
    myProduct->hide();
    myProvider->hide();

    comboBoxModel = new QSqlQueryModel;
    QSqlQuery get_worker = QSqlQuery(SkladDB);
    get_worker.prepare("SELECT fio FROM public.worker");
    get_worker.exec();
    comboBoxModel->setQuery(get_worker);
    ui->comboBox->setModel(comboBoxModel);
}

void Sklad::on_addButton_clicked()
{
    if (chosenTable == "none")
    {
        QMessageBox::about(this, "Error", "Choose table which you want to add to first!");
    }

    if (chosenTable == "deliveries")
    {
        myDeliveries->show();
    }

    if (chosenTable == "buyer")
    {
        delete myBuyer;
        myBuyer = new class buyer ("", false);
        myBuyer->show();
    }

    if (chosenTable == "issuing")
    {

        myIssuing->show();
    }

    if (chosenTable == "product")
    {
        myProduct = new class product ("", false);
        myProduct->show();
    }
    if (chosenTable == "provider")
    {
        myProvider = new class provider ("", false);
        myProvider->show();
    }
    if (chosenTable == "worker")
    {
        myWorker = new class worker ("", false);
        myWorker->show();
    }
}


void Sklad::on_editButton_clicked()
{
    if (chosenTable == "none")
    {
        QMessageBox::about(this, "Error", "Choose table which you want to edit first!");
    }

    if (chosenTable == "buyer")
    {
        delete myBuyer;
        myBuyer = new class buyer (ui->comboBox->currentText(), true);
        myBuyer->show();
    }

    if (chosenTable == "product")
    {
        delete myProduct;
        myProduct = new class product (ui->comboBox->currentText(), true);
        myProduct->show();
    }

    if (chosenTable == "worker")
    {
        delete myWorker;
        myWorker = new class worker (ui->comboBox->currentText(), true);
        myWorker->show();
    }

    if (chosenTable == "provider")
    {
        delete myProvider;
        myProvider = new class provider (ui->comboBox->currentText(), true);
        myBuyer->show();
    }
    if (chosenTable == "deliveries")
    {
        delete myDeliveries;
        myDeliveries = new class deliveries((ui->comboBox->currentText()), true);
        myDeliveries->show();
    }
    if (chosenTable == "issuing")
    {
        delete myIssuing;
        myIssuing = new class issuing(ui->comboBox->currentText().toInt(), true);
        myIssuing->show();
    }

}


void Sklad::on_deleteButton_clicked()
{
    QSqlQuery deleteQuery = QSqlQuery(SkladDB);
    QString item = ui->comboBox->currentText();
    bool checker;
    if (chosenTable == "buyer")
    {
        deleteQuery.prepare("SELECT * FROM public.delete_buyer(:_name_corp)");
        deleteQuery.bindValue(":_name_corp", item);
        checker = deleteQuery.exec();
        qDebug()<<checker;
        if (!checker)
            QMessageBox::about(this,"Error", "Error! Buyer " + item + " can not be deleted!");
        else
        {
            trayIcon = new QSystemTrayIcon(this);
            trayIcon->setVisible(true);
            trayIcon->showMessage("We will miss them!", "You succesfully deleted " +item + " buyer.");
        }
    }

    if (chosenTable == "deliveries")
    {
        deleteQuery.prepare("SELECT * FROM public.delete_deliveries(:_id)");
        deleteQuery.bindValue(":_id", item.toInt());
        checker = deleteQuery.exec();
        if (!checker)
            QMessageBox::about(this,"Error", "Error!" + item + "Deliveries can not be deleted!");
        else
        {
            trayIcon = new QSystemTrayIcon(this);
            trayIcon->setVisible(true);
            trayIcon->showMessage("Lost!", "The deliveries has been deleted");
        }
    }

    if (chosenTable == "issuing")
    {
        deleteQuery.prepare("SELECT * FROM public.delete_issuing(:_id)");
        deleteQuery.bindValue(":_id", item.toInt());
        checker = deleteQuery.exec();
        if (!checker)
            QMessageBox::about(this,"Error", "Error!" + item + "Issuing can not be deleted!");
        else
        {
            trayIcon = new QSystemTrayIcon(this);
            trayIcon->setVisible(true);
            trayIcon->showMessage("Lost!", "The issuing has been deleted");
        }
    }

    if (chosenTable == "product")
    {
        deleteQuery.prepare("SELECT * FROM public.delete_product(:_name)");
        deleteQuery.bindValue(":_name", item);
        checker = deleteQuery.exec();
        if (!checker)
            QMessageBox::about(this,"Error", "Error!" + item + " Product can not be deleted!");
        else
        {
            trayIcon = new QSystemTrayIcon(this);
            trayIcon->setVisible(true);
            trayIcon->showMessage("It's been great!", "The payment product has been deleted");
        }
    }


    if (chosenTable == "provider")
    {
        deleteQuery.prepare("SELECT * FROM public.delete_provider(:_name)");
        deleteQuery.bindValue(":_name", item);
        checker = deleteQuery.exec();
        if (!checker)
            QMessageBox::about(this,"Error", "Error! Provider " + item + " can not be deleted!");
        else
        {
            trayIcon = new QSystemTrayIcon(this);
            trayIcon->setVisible(true);
            trayIcon->showMessage("We will miss them!", "You succesfully deleted " +item + " provider.");
        }
    }
    if (chosenTable == "worker")
    {
        deleteQuery.prepare("SELECT * FROM public.delete_worker(:_fio)");
        deleteQuery.bindValue(":_fio", item);
        checker = deleteQuery.exec();
        if (!checker)
            QMessageBox::about(this,"Error", "Error! Worker " + item + " can not be deleted!");
        else
        {
            trayIcon = new QSystemTrayIcon(this);
            trayIcon->setVisible(true);
            trayIcon->showMessage("We will miss them!", "You succesfully deleted " +item + " worker.");
        }
    }


}

void Sklad::on_tableView_doubleClicked(const QModelIndex &index)
{
    ui->comboBox->setCurrentIndex(index.row());
}

void Sklad::on_reportButtone_clicked()
{
    report->hide();
    report->show();

}


void Sklad::on_pushButton_clicked()
{
    logs = new QSqlTableModel(this,SkladDB);
    logs->setTable("logs");
    logs->select();
    ui->tableView->setModel(logs);
    chosenTable = "logs";

    comboBoxModel = new QSqlQueryModel;
    ui->comboBox->setModel(comboBoxModel);
}
