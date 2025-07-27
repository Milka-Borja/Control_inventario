#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

// Aquí va la estructura que te falta
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

    QFile archivo("productos.txt");
    if (!archivo.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "No se pudo abrir el archivo");
        return;
    }

    QTextStream out(&archivo);
    out << p.toLine();
    archivo.close();

    QMessageBox::information(this, "Guardado", "Producto guardado");
    ui->Codigo->clear();
    ui->Nombre->clear();
    ui->Precio->clear();
    ui->Categoria->setCurrentIndex(0);
    ui->Stock->setCurrentIndex(0);
}
