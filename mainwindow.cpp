#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString Usuario = ui->lineEdit_usuario->text();
    QString Contraseña = ui->lineEdit_2_clave->text();
    if (Usuario == "admin" && Contraseña == "12345"){
        //QMessageBox::information(this, "Login", "Usuario y contraseña correctos");
        ui->statusbar->showMessage("Usuario y contraseña correctos", 6000);
    }else{
        //QMessageBox::warning(this, "Login", "Usuario y contraseña incorrectos");
        ui->statusbar->showMessage("Usuario y contraseña incorrectos", 6000);
    }
}

