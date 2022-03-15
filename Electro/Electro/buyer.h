#ifndef BUYER_H
#define BUYER_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QString>
#include <QSystemTrayIcon>

namespace Ui {
class buyer;
}

class buyer : public QDialog
{
    Q_OBJECT

public:
    explicit buyer(QString name_corp, bool isEditing);
    ~buyer();

private slots:
    void on_saveButton_clicked();

private:
    Ui::buyer *ui;
    QSqlDatabase SkladDB;
    bool Editing;
    QString oldName_corp;
    QString oldEmail;
    QSystemTrayIcon* trayIcon;

};

#endif // BUYER_H
