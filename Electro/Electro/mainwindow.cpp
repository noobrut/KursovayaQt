#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowTitle("Sklad");

    ui->Password_lineEdit->setEchoMode(QLineEdit::Password);

    myResources = new resources;
}

MainWindow::~MainWindow()
{
    delete ui;
    login = "";
    password = "";
}


void MainWindow::on_pushButton_clicked()
{
    login = ui->Login_lineEdit->text();
    password = ui->Password_lineEdit->text();
    SkladDB = QSqlDatabase::addDatabase("QPSQL");
    SkladDB.setHostName("localhost");
    SkladDB.setDatabaseName("kurs_db");
    SkladDB.setUserName(login);
    SkladDB.setPassword(password);
    bool checker = SkladDB.open();
    if (checker)
    {
        mySklad = new Sklad();
        mySklad->show();
        this->close();
    }
    else
        QMessageBox::about(this, "Error", ";*( Oops... Something went wrong!");
    ui->Login_lineEdit->setText("");
    ui->Password_lineEdit->setText("");
}

void MainWindow::on_pushButton_2_clicked()
{
    myResources->show();
}
