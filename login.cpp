#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("Login");
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString usuario = ui->lineEdit_usuario->text();
    QString contraseña = ui->lineEdit_2_clave->text();

    if (usuario == "admin" && contraseña == "12345") {
        emit loginSuccess();
        accept();
    } else {
        QMessageBox::warning(this, "Error", "Usuario o contraseña incorrectos");
    }
}

