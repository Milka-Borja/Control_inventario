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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *Codigo;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Nombre;
    QLabel *label_3;
    QComboBox *Categoria;
    QLineEdit *Precio;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *Stock;
    QPushButton *Boton_crear;
    QPushButton *Boton_actualizar;
    QPushButton *Boton_mostrar;
    QPushButton *Boton_eliminar;
    QPushButton *Boton_guardar;
    QLabel *label_6;
    QTextEdit *mostrar_produ;
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
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Codigo = new QLineEdit(centralwidget);
        Codigo->setObjectName("Codigo");
        Codigo->setGeometry(QRect(180, 60, 113, 22));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 131, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 60, 131, 21));
        Nombre = new QLineEdit(centralwidget);
        Nombre->setObjectName("Nombre");
        Nombre->setGeometry(QRect(490, 60, 113, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 110, 61, 16));
        Categoria = new QComboBox(centralwidget);
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
        Categoria->setGeometry(QRect(130, 110, 141, 22));
        Precio = new QLineEdit(centralwidget);
        Precio->setObjectName("Precio");
        Precio->setGeometry(QRect(390, 110, 113, 22));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 110, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(530, 110, 49, 16));
        Stock = new QComboBox(centralwidget);
        Stock->addItem(QString());
        Stock->addItem(QString());
        Stock->setObjectName("Stock");
        Stock->setGeometry(QRect(580, 110, 69, 22));
        Boton_crear = new QPushButton(centralwidget);
        Boton_crear->setObjectName("Boton_crear");
        Boton_crear->setGeometry(QRect(70, 160, 91, 24));
        Boton_actualizar = new QPushButton(centralwidget);
        Boton_actualizar->setObjectName("Boton_actualizar");
        Boton_actualizar->setGeometry(QRect(230, 160, 101, 24));
        Boton_mostrar = new QPushButton(centralwidget);
        Boton_mostrar->setObjectName("Boton_mostrar");
        Boton_mostrar->setGeometry(QRect(410, 160, 101, 24));
        Boton_eliminar = new QPushButton(centralwidget);
        Boton_eliminar->setObjectName("Boton_eliminar");
        Boton_eliminar->setGeometry(QRect(580, 160, 101, 24));
        Boton_guardar = new QPushButton(centralwidget);
        Boton_guardar->setObjectName("Boton_guardar");
        Boton_guardar->setGeometry(QRect(700, 100, 81, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 20, 201, 16));
        mostrar_produ = new QTextEdit(centralwidget);
        mostrar_produ->setObjectName("mostrar_produ");
        mostrar_produ->setGeometry(QRect(50, 220, 631, 261));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(250, 320, 271, 191));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 50, 211, 131));
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
        lineEdit_2_clave->setEchoMode(QLineEdit::Password);

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
        label->setText(QCoreApplication::translate("MainWindow", "Codigo del producto: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre del producto:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Categoria:", nullptr));
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

        label_4->setText(QCoreApplication::translate("MainWindow", "Precio:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Stock: ", nullptr));
        Stock->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        Stock->setItemText(1, QCoreApplication::translate("MainWindow", "Agotado", nullptr));

        Boton_crear->setText(QCoreApplication::translate("MainWindow", "Crear \342\236\225", nullptr));
        Boton_actualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar \342\234\217\357\270\217", nullptr));
        Boton_mostrar->setText(QCoreApplication::translate("MainWindow", "Mostrar \360\237\221\200", nullptr));
        Boton_eliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar \360\237\227\221\357\270\217", nullptr));
        Boton_guardar->setText(QCoreApplication::translate("MainWindow", "Guardar \360\237\223\201", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "TECHNOLOGY STORE", nullptr));
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
