#ifndef DELIVERIES_H
#define DELIVERIES_H


#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>


namespace Ui {
class deliveries;
}
class deliveries : public QDialog
{
    Q_OBJECT

public:
    explicit deliveries(QString order_number, bool isEditing);
    ~deliveries();

private slots:
    void on_pushButton_clicked();

private:
    Ui::deliveries *ui;
    QSqlQueryModel* worker;
    QSqlQueryModel* product;
    QSqlQueryModel* provider;
    bool Editing;
    QSqlDatabase SkladDB;
    QString oldOrder;

};

#endif // DELIVERIES_H
