#include "payment.h"
#include "ui_payment.h"

Payment::Payment(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Payment)
{
    ui->setupUi(this);
}

Payment::~Payment()
{
    delete ui;
}
