#ifndef SKLAD_H
#define SKLAD_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <deliveries.h>
#include <product.h>
#include <provider.h>
#include <worker.h>
#include <issuing.h>
#include <buyer.h>
#include <QSystemTrayIcon>
#include <reportplus.h>

namespace Ui {
class Sklad;
}

class Sklad : public QDialog
{
    Q_OBJECT
public slots:
public:
    explicit Sklad();
    ~Sklad();

private slots:
    void on_showBuyer_clicked();

    void on_showDeliveries_clicked();

    void on_showIssuing_clicked();

    void on_showProduct_clicked();
    void on_showProvider_clicked();

    void on_showWorker_clicked();


    void on_addButton_clicked();

    void on_editButton_clicked();

    void on_deleteButton_clicked();


    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_reportButtone_clicked();



    void on_pushButton_clicked();

private:
    Ui::Sklad *ui;
    QSqlDatabase SkladDB;
    QSqlTableModel* issuing;
    QSqlTableModel* deliveries;
    QSqlTableModel* worker;
    QSqlTableModel* product;
    QSqlTableModel* provider;
    QSqlTableModel* buyer;
    QSqlTableModel* logs;
    class issuing* myIssuing;
    class worker* myWorker;
    class deliveries* myDeliveries;
    class product* myProduct;
    class provider* myProvider;
    class buyer* myBuyer;

    QString chosenTable;
    QSystemTrayIcon* trayIcon;

    QSqlQueryModel* comboBoxModel;
    QSqlQueryModel* myView;
    reportPlus* report;
};

#endif // SKLAD_H
