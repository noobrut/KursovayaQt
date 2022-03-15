#ifndef ISSUING_H
#define ISSUING_H


#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>


namespace Ui {
class issuing;
}
class issuing : public QDialog
{
    Q_OBJECT

public:
    explicit issuing(int issuing_id, bool isEditing);
    ~issuing();

private slots:
    void on_pushButton_clicked();

private:
    Ui::issuing *ui;
    QSqlQueryModel* worker;
    QSqlQueryModel* product;
    QSqlQueryModel* buyer;
    bool Editing;
    QSqlDatabase SkladDB;
    int oldID;

};

#endif // ISSUING_H
