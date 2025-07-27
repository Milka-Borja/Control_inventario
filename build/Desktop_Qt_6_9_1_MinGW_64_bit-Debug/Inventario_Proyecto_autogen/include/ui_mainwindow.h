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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_6;
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
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 60, 113, 22));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 131, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(340, 60, 131, 21));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(490, 60, 113, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 110, 61, 16));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(130, 110, 141, 22));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(390, 110, 113, 22));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 110, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(530, 110, 49, 16));
        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(580, 110, 69, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 160, 91, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 160, 101, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(410, 160, 101, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(580, 160, 101, 24));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(700, 100, 81, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 20, 201, 16));
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
        lineEdit_2_clave->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_2_clave);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName("pushButton_login");

        verticalLayout->addWidget(pushButton_login);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Perif\303\251ricos", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Componentes PC", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Accesorios", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Monitores", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Equipos", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Redes", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Gaming", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "Almacenamiento", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "Impresi\303\263n", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "Dom\303\263tica", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Precio:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Stock: ", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Disponible", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Agotado", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "Crear \342\236\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Actualizar \342\234\217\357\270\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Mostrar \360\237\221\200", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Eliminar \360\237\227\221\357\270\217", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Guardar \360\237\223\201", nullptr));
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
