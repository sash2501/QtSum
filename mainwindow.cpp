#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPlainTextEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("color: white; background-color: black; selection-color: red;"
                        "QPushButton#pushButton_clear{ background-color: yellow }");
    //Qpus->setStyleSheet("QPushButton#pushButton_clear{ background-color: yellow }");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_add_clicked()
{
    //QStringList s;
    QString xtext =ui->lineEdit_x->text();
    double x= xtext.toDouble();
    QString ytext =ui->lineEdit_y->text();
    double y=ytext.toDouble();
   // int add=x+y;
    //s<<"the added value is"<<add;
   // QString result = QString("val1=%1 val2=%2 sum=%3").arg(x).arg(y).arg(x+y);
    //ui->label_sumshow->setText(result);
    double result = x + y;

    QString resultString = "";
    ui->label_sumshow->setText(resultString.setNum(result));

}

void MainWindow::on_pushButton_clear_clicked()
{
     ui->lineEdit_x->setText("");
      ui->lineEdit_y->setText("");
      ui->label_sumshow->setText("---");
}
