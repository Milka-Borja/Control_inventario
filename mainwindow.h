#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
struct producto {
QString codigo;
QString nombre;
QString categoria;
QString precio;
QString stock;
QString toLine() const {
    return codigo + " | "+nombre+" | "+categoria+" | "+ precio +" | "+stock+"\n";
}
};
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Boton_guardar_clicked();
    void on_Boton_mostrar_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
