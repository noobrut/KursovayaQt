#ifndef PROVIDER_H
#define PROVIDER_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QString>
#include <QSystemTrayIcon>

namespace Ui {
class provider;
}

class provider : public QDialog
{
    Q_OBJECT

public:
    explicit provider(QString name, bool isEditing);
    ~provider();

private slots:
    void on_saveButton_clicked();

private:
    Ui::provider *ui;
    QSqlDatabase SkladDB;
    bool Editing;
    QString oldName;
    QSystemTrayIcon* trayIcon;

};

#endif // PROVIDER_H
