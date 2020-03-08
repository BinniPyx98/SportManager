#include "startwindow.h"
#include "ui_startwindow.h"
#include <QDesktopWidget>
#include "registr.h"
#include <QSqlQuery>
#include "grekorim.h"
#include <QMessageBox>
StartWindow::StartWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartWindow)
{

//--------------------Делаем стартовое окно по центу
    ui->setupUi(this);


    QDesktopWidget desktop;
    QRect rect = desktop.availableGeometry(this);
    QPoint center = rect.center();
    int x = center.x() - (width()/2);
    int y = center.y() - (height()/2);
    center.setX(x);
    center.setY(y);
    move(center);
    //-----Меняем размер шрифта
    QFont font=ui->label_3->font();
    font.setPixelSize(10);
    ui->label_3->setFont(font);
    //-----Так тут попытаемся установить фон для главного окна

    QPixmap pixmap1 =QPixmap (":/1.png");
    QPixmap pixmap13 =QPixmap (":/fifa.png");
    ui->label->setPixmap(pixmap13);
         QPalette palette;
        palette.setBrush(QPalette::Background, pixmap1);
          this->setPalette(palette);


        ui->label->setStyleSheet(
                    "QPushButton{ background-image:url(:/fifa.jpg); border-radius:3px;}"
                    "QPushButton:hover{background-color:red}");

//--------------------Тут пытаемся сделать фон для кнопки
    ui->pushButton_2->setStyleSheet(
                "QPushButton{ background-image:url(:/44.jpg); border-radius:3px;}"
                "QPushButton:hover{background-color:red}");



//--------------------Устанавливаем иконку кнопки закрытия стартового окна
    ui->pb_exit->setStyleSheet(
                "QPushButton{ background-image:url(:/pb_exit.png); border-radius:3px;}"
                "QPushButton:hover{background-color:red}");
    ui->pb_exit->setMinimumSize(15,15);
    ui->pb_exit->setMaximumSize(15,15);
 //--------------------Устанавливаем иконку кнопки закрытия стартового окна
        ui->pb_hide->setStyleSheet(
                    "QPushButton{ background-image:url(:/pb_hide.png); border-radius:3px;}"
                    "QPushButton:hover{background-color:red}");
    ui->pb_hide->setMinimumSize(15,15);
    ui->pb_hide->setMaximumSize(15,15);


       ////// закрепояем кнопку на правом крае окна (hl- layout)
//ui->hl->addWidget(ui->pb_exit, 0, Qt::AlignRight);
//ui->hl->addWidget(ui->pb_hide, 0, Qt::AlignRight);





  QPalette buttonTex;
  buttonTex.setColor(QPalette::ButtonText, Qt::red);
  ui->pushButton_2->setPalette(buttonTex);

//-----Отключаем рамку вокруг окна
this->setWindowFlags(Qt::FramelessWindowHint);
//-----Делаем окно не маштабируемым
this->setMinimumHeight(505);
this->setMaximumHeight(505);
this->setMinimumWidth(350);
this->setMaximumWidth(350);
}

StartWindow::~StartWindow()
{
    delete ui;
}


void StartWindow::on_pushButton_5_clicked()
{
   registr *reg=new registr;
   this->hide();
   reg->show();
}
//--------------------Кнопка крестик закрывает главное окно
void StartWindow::on_pb_exit_clicked(){

    QWidget::close();
}

void StartWindow::on_pushButton_2_clicked()
{
    //Слот для входа

    //-----Конектимся к бд серез класс
    DbConnect con;
    con.connect();
        //-----Создаем переменную через которую будем выполнять запросы
    QSqlQuery query=QSqlQuery(con.db);
        //-----Создаем переменные в которые сохраняем регистрационные данные пользователя
    QString mail=ui->lineEditLogin->text();
    QString pass=ui->lineEditPass->text();
    if(query.exec("SELECT name FROM users WHERE mail='"+mail+"'AND pass='"+pass+"'")){
        GrekoRim *GR=new GrekoRim;
        this->hide();
        GR->show();
    }
    else{
        QMessageBox::information(nullptr, "Message", "Неправильный логин или пароль ");
    }
}



