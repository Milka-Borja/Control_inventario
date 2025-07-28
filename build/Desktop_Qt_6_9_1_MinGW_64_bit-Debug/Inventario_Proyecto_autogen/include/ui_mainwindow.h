/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QPushButton *Boton_actualizar;
    QPushButton *Boton_buscar;
    QPushButton *Boton_eliminar;
    QPushButton *Boton_guardar;
    QPushButton *Boton_mostrar;
    QComboBox *Categoria;
    QLineEdit *Codigo;
    QLineEdit *Nombre;
    QLineEdit *Precio;
    QComboBox *Stock;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTableWidget *tabla_productos;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *lineEdit_usuario;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *lineEdit_2_clave;
    QPushButton *pushButton_login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 961);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 140, 791, 541));
        Boton_actualizar = new QPushButton(groupBox_2);
        Boton_actualizar->setObjectName("Boton_actualizar");
        Boton_actualizar->setGeometry(QRect(240, 170, 101, 24));
        Boton_buscar = new QPushButton(groupBox_2);
        Boton_buscar->setObjectName("Boton_buscar");
        Boton_buscar->setGeometry(QRect(70, 170, 91, 24));
        Boton_eliminar = new QPushButton(groupBox_2);
        Boton_eliminar->setObjectName("Boton_eliminar");
        Boton_eliminar->setGeometry(QRect(560, 170, 101, 24));
        Boton_guardar = new QPushButton(groupBox_2);
        Boton_guardar->setObjectName("Boton_guardar");
        Boton_guardar->setGeometry(QRect(680, 70, 81, 24));
        Boton_mostrar = new QPushButton(groupBox_2);
        Boton_mostrar->setObjectName("Boton_mostrar");
        Boton_mostrar->setGeometry(QRect(400, 170, 101, 24));
        Categoria = new QComboBox(groupBox_2);
        Categoria->addItem(QString());
        Categoria->addItem(QString());
        Categoria->addItem(QString());
        Categoria->addItem(QString());
        Categoria->addItem(QString());
        Categoria->addItem(QString());
        Categoria->addItem(QString());
        Categoria->addItem(QString());
        Categoria->addItem(QString());
        Categoria->addItem(QString());
        Categoria->setObjectName("Categoria");
        Categoria->setGeometry(QRect(120, 120, 141, 22));
        Codigo = new QLineEdit(groupBox_2);
        Codigo->setObjectName("Codigo");
        Codigo->setGeometry(QRect(170, 70, 113, 22));
        Nombre = new QLineEdit(groupBox_2);
        Nombre->setObjectName("Nombre");
        Nombre->setGeometry(QRect(470, 70, 113, 22));
        Precio = new QLineEdit(groupBox_2);
        Precio->setObjectName("Precio");
        Precio->setGeometry(QRect(380, 120, 113, 22));
        Stock = new QComboBox(groupBox_2);
        Stock->addItem(QString());
        Stock->addItem(QString());
        Stock->setObjectName("Stock");
        Stock->setGeometry(QRect(580, 120, 69, 22));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 131, 21));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 70, 131, 21));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 120, 61, 16));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 120, 49, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(520, 120, 49, 16));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 30, 201, 16));
        tabla_productos = new QTableWidget(groupBox_2);
        if (tabla_productos->columnCount() < 6)
            tabla_productos->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla_productos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla_productos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla_productos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabla_productos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabla_productos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabla_productos->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tabla_productos->setObjectName("tabla_productos");
        tabla_productos->setGeometry(QRect(40, 220, 661, 221));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(230, 10, 341, 231));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 50, 211, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        lineEdit_usuario = new QLineEdit(layoutWidget);
        lineEdit_usuario->setObjectName("lineEdit_usuario");

        horizontalLayout->addWidget(lineEdit_usuario);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_2->addWidget(label_8);

        lineEdit_2_clave = new QLineEdit(layoutWidget);
        lineEdit_2_clave->setObjectName("lineEdit_2_clave");
        lineEdit_2_clave->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_2_clave);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName("pushButton_login");

        verticalLayout->addWidget(pushButton_login);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        Boton_actualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar \342\234\217\357\270\217", nullptr));
        Boton_buscar->setText(QCoreApplication::translate("MainWindow", "Buscar \360\237\224\215", nullptr));
        Boton_eliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar \360\237\227\221\357\270\217", nullptr));
        Boton_guardar->setText(QCoreApplication::translate("MainWindow", "Guardar \360\237\223\201", nullptr));
        Boton_mostrar->setText(QCoreApplication::translate("MainWindow", "Mostrar \360\237\221\200", nullptr));
        Categoria->setItemText(0, QCoreApplication::translate("MainWindow", "Perif\303\251ricos", nullptr));
        Categoria->setItemText(1, QCoreApplication::translate("MainWindow", "Componentes PC", nullptr));
        Categoria->setItemText(2, QCoreApplication::translate("MainWindow", "Accesorios", nullptr));
        Categoria->setItemText(3, QCoreApplication::translate("MainWindow", "Monitores", nullptr));
        Categoria->setItemText(4, QCoreApplication::translate("MainWindow", "Equipos", nullptr));
        Categoria->setItemText(5, QCoreApplication::translate("MainWindow", "Redes", nullptr));
        Categoria->setItemText(6, QCoreApplication::translate("MainWindow", "Gaming", nullptr));
        Categoria->setItemText(7, QCoreApplication::translate("MainWindow", "Almacenamiento", nullptr));
        Categoria->setItemText(8, QCoreApplication::translate("MainWindow", "Impresi\303\263n", nullptr));
        Categoria->setItemText(9, QCoreApplication::translate("MainWindow", "Dom\303\263tica", nullptr));

        Stock->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        Stock->setItemText(1, QCoreApplication::translate("MainWindow", "Agotado", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Codigo del producto: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre del producto:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Categoria:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Precio:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Stock: ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "TECHNOLOGY STORE", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabla_productos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Codigo", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabla_productos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabla_productos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Categoria", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabla_productos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Precio", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabla_productos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Stock", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "SignIn", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
