#include "grekorim.h"
#include "ui_grekorim.h"
#include "registr.h"
#include <QtDebug>
#include <QSqlQuery>
GrekoRim::GrekoRim(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GrekoRim)
{
    ui->setupUi(this);
}

GrekoRim::~GrekoRim()
{
    delete ui;
}

void GrekoRim::on_pushButton_clicked()
{
    QString ves=ui->lineEdit->text();
//ui->listWidget->addItem(ves);
QListWidgetItem *pitem = new QListWidgetItem(ui->listWidget);
pitem->setFlags(Qt::ItemIsEditable | Qt::ItemIsSelectable|Qt::ItemIsEnabled);
pitem->setText(ves);
}

void GrekoRim::on_pushButton_2_clicked()
{
    //-----Конектимся к бд серез класс
    DbConnect con;
    con.connect();
        //-----Создаем переменную через которую будем выполнять запросы
    QSqlQuery query=QSqlQuery(con.db);
        //нажимая на кнопку завершить создаем таблицы с кол-вом введенных весовых категорий
    for(int i=0; i<ui->listWidget->count();++i)
    {
          //QListWidgetItem *item = ui->listWidget->item(i);
QString str= ui->listWidget->item(i)->text();

              //-----Создаем переменные
        //  query.exec("CREATE TABLE weight('"+item+"' int,  );");

          QTextStream Qcout(stdout);
     Qcout << str;

    }

}
