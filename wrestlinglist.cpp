#include "wrestlinglist.h"
#include "ui_wrestlinglist.h"

WrestlingList::WrestlingList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WrestlingList)
{
    ui->setupUi(this);
}

WrestlingList::~WrestlingList()
{
    delete ui;
}
