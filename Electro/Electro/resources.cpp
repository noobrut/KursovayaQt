#include "resources.h"
#include "ui_resources.h"

resources::resources(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resources)
{
    ui->setupUi(this);
    resources::setWindowTitle("Resources");


    ui->label->setScaledContents( true );
    ui->label->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );


    ui->label_2->setScaledContents( true );
    ui->label_2->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );


    ui->label_3->setScaledContents( true );
    ui->label_3->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

}

resources::~resources()
{
    delete ui;
}
