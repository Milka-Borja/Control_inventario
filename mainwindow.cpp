#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>

struct Producto {
    QString codigo;
    QString nombre;
    QString categoria;
    QString precio;
    QString stock;

    QString toLine() const {
        return codigo + "|" + nombre + "|" + categoria + "|" + precio + "|" + stock + "\n";
    }
};

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

void MainWindow::on_Boton_guardar_clicked()
{
    Producto p;
    p.codigo = ui->Codigo->text();
    p.nombre = ui->Nombre->text();
    p.categoria = ui->Categoria->currentText();
    p.precio = ui->Precio->text();
    p.stock = ui->Stock->currentText();

    if (p.codigo.isEmpty() || p.nombre.isEmpty()) {
        QMessageBox::warning(this, "Error", "El código y nombre son obligatorios");
        return;
    }

    QString rutaArchivo = QFileDialog::getSaveFileName(this, "Guardar producto", "", "Archivos de texto (*.txt)");
    if (rutaArchivo.isEmpty()) {
        return;
    }

    QFile archivo(rutaArchivo);
    if (!archivo.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "No se pudo abrir el archivo");
        return;
    }

    QTextStream out(&archivo);
    out << p.toLine();
    archivo.close();

    QMessageBox::information(this, "Guardado", "Producto guardado correctamente");

    ui->Codigo->clear();
    ui->Nombre->clear();
    ui->Precio->clear();
    ui->Categoria->setCurrentIndex(0);
    ui->Stock->setCurrentIndex(0);
}

void MainWindow::on_Boton_mostrar_clicked()
{
    QString rutaArchivo = QFileDialog::getOpenFileName(this, "Abrir archivo", "", "Archivos de texto (*.txt)");
    if (rutaArchivo.isEmpty()) {
        return;
    }

    QFile archivo(rutaArchivo);
    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "No se pudo abrir");
        return;
    }

    QTextStream in(&archivo);
    QString contenido = in.readAll();
    archivo.close();

    ui->mostrar_produ->setPlainText(contenido);
}

void MainWindow::on_pushButton_login_clicked()
{
    QString Usuario = ui->lineEdit_usuario->text();
    QString Contraseña = ui->lineEdit_2_clave->text();
    if (Usuario == "admin" && Contraseña == "12345"){
        ui->statusbar->showMessage("Usuario y contraseña correctos", 6000);
    } else {
        ui->statusbar->showMessage("Usuario y contraseña incorrectos", 6000);
    }
}

