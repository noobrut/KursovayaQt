#ifndef PRODUCT_H
#define PRODUCT_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QString>
#include <QSystemTrayIcon>

namespace Ui {
class product;
}

class product : public QDialog
{
    Q_OBJECT

public:
    explicit product(QString name, bool isEditing);
    ~product();

private slots:
    void on_saveButton_clicked();

private:
    Ui::product *ui;
    QSqlDatabase SkladDB;
    bool Editing;
    QString oldName;
    QSystemTrayIcon* trayIcon;

};

#endif // PRODUCT_H
