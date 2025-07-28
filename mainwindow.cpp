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

    ui->groupBox_2->hide(); // Ocultar CRUD al iniciar
    ui->groupBox->show();    // Mostrar login
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Boton_guardar_clicked()
{
    QFile file("productos.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo para guardar.");
        return;
    }

    QTextStream out(&file);
    QString codigo = ui->Codigo->text();
    QString nombre = ui->Nombre->text();
    QString categoria = ui->Categoria->currentText();
    QString precio = ui->Precio->text();
    QString stock = ui->Stock->currentText();

    out << codigo << "|" << nombre << "|" << categoria << "|" << precio << "|" << stock << "\n";
    file.close();

    QMessageBox::information(this, "Guardado", "Producto guardado exitosamente.");
}

void MainWindow::on_Boton_mostrar_clicked()
{
    QFile file("productos.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "No se pudo abrir el archivo.");
        return;
    }

    QTextStream in(&file);
    ui->tabla_productos->setRowCount(0); // Limpiar tabla

    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList datos = line.split("|");
        if (datos.size() == 5) {
            ui->tabla_productos->insertRow(row);
            for (int col = 0; col < 5; ++col) {
                ui->tabla_productos->setItem(row, col, new QTableWidgetItem(datos[col].trimmed()));
            }
            row++;
        }
    }

    file.close();
}

void MainWindow::on_pushButton_login_clicked()
{
    QString Usuario = ui->lineEdit_usuario->text();
    QString Contraseña = ui->lineEdit_2_clave->text();
    if (Usuario == "admin" && Contraseña == "12345"){
        ui->statusbar->showMessage("Usuario y contraseña correctos", 6000);
        ui->groupBox->hide();
        ui->groupBox_2->show();
    } else {
        ui->statusbar->showMessage("Usuario y contraseña incorrectos", 6000);
    }
}


void MainWindow::on_Boton_eliminar_clicked()
{
    int filaSeleccionada = ui->tabla_productos->currentRow();
    if (filaSeleccionada == -1) {
        QMessageBox::warning(this, "Advertencia", "Seleccione un producto para eliminar.");
        return;
    }
    ui->tabla_productos->removeRow(filaSeleccionada);
}


void MainWindow::on_Boton_actualizar_clicked()
{
    int filaSeleccionada = ui->tabla_productos->currentRow();
    if (filaSeleccionada == -1) {
        QMessageBox::warning(this, "Advertencia", "Seleccione un producto para actualizar.");
        return;
    }


    QString nuevoCodigo = ui->Codigo->text();
    QString nuevoNombre = ui->Nombre->text();
    QString nuevaCategoria = ui->Categoria->currentText();
    QString nuevoPrecio = ui->Precio->text();
    QString nuevoStock = ui->Stock->currentText();


    ui->tabla_productos->item(filaSeleccionada, 0)->setText(nuevoCodigo);
    ui->tabla_productos->item(filaSeleccionada, 1)->setText(nuevoNombre);
    ui->tabla_productos->item(filaSeleccionada, 2)->setText(nuevaCategoria);
    ui->tabla_productos->item(filaSeleccionada, 3)->setText(nuevoPrecio);
    ui->tabla_productos->item(filaSeleccionada, 4)->setText(nuevoStock);

    ui->Codigo->clear();
    ui->Nombre->clear();
    ui->Precio->clear();
}

