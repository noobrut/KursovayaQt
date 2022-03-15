#ifndef WORKER_H
#define WORKER_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QString>
#include <QSystemTrayIcon>

namespace Ui {
class worker;
}

class worker : public QDialog
{
    Q_OBJECT

public:
    explicit worker(QString fio, bool isEditing);
    ~worker();

private slots:
    void on_saveButton_clicked();

private:
    Ui::worker *ui;
    QSqlDatabase SkladDB;
    bool Editing;
    QString oldFio;
    QSystemTrayIcon* trayIcon;

};

#endif // WORKER_H
