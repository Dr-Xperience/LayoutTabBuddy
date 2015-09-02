#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SaveButton_clicked()
{
    ui->displayedit->setText(ui->nameEdit->text());
    ui->displayedit->append("\n"+ui->classEdit->text());
    ui->displayedit->append("\n"+ui->rollEdit->text());
}

void MainWindow::on_closeButton_clicked()
{
    MainWindow::close();
}
