/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *OK;
    QPushButton *selectFile;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QSlider *horizontalSlider;
    QLabel *label;
    QTextEdit *m00;
    QTextEdit *m01;
    QTextEdit *m02;
    QTextEdit *m03;
    QTextEdit *m04;
    QTextEdit *m11;
    QTextEdit *m13;
    QTextEdit *m14;
    QTextEdit *m12;
    QTextEdit *m10;
    QTextEdit *m21;
    QTextEdit *m23;
    QTextEdit *m24;
    QTextEdit *m22;
    QTextEdit *m20;
    QTextEdit *m31;
    QTextEdit *m33;
    QTextEdit *m34;
    QTextEdit *m32;
    QTextEdit *m30;
    QTextEdit *m41;
    QTextEdit *m43;
    QTextEdit *m44;
    QTextEdit *m42;
    QTextEdit *m40;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1422, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(980, 510, 83, 32));
        OK = new QPushButton(centralwidget);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(980, 540, 88, 34));
        selectFile = new QPushButton(centralwidget);
        selectFile->setObjectName(QString::fromUtf8("selectFile"));
        selectFile->setGeometry(QRect(10, 540, 88, 34));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(30, 100, 511, 381));
        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(560, 100, 511, 381));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(260, 530, 561, 20));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(64);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 530, 58, 18));
        m00 = new QTextEdit(centralwidget);
        m00->setObjectName(QString::fromUtf8("m00"));
        m00->setGeometry(QRect(1130, 100, 51, 41));
        m01 = new QTextEdit(centralwidget);
        m01->setObjectName(QString::fromUtf8("m01"));
        m01->setGeometry(QRect(1190, 100, 51, 41));
        m02 = new QTextEdit(centralwidget);
        m02->setObjectName(QString::fromUtf8("m02"));
        m02->setGeometry(QRect(1250, 100, 51, 41));
        m03 = new QTextEdit(centralwidget);
        m03->setObjectName(QString::fromUtf8("m03"));
        m03->setGeometry(QRect(1310, 100, 51, 41));
        m04 = new QTextEdit(centralwidget);
        m04->setObjectName(QString::fromUtf8("m04"));
        m04->setGeometry(QRect(1370, 100, 51, 41));
        m11 = new QTextEdit(centralwidget);
        m11->setObjectName(QString::fromUtf8("m11"));
        m11->setGeometry(QRect(1190, 150, 51, 41));
        m13 = new QTextEdit(centralwidget);
        m13->setObjectName(QString::fromUtf8("m13"));
        m13->setGeometry(QRect(1310, 150, 51, 41));
        m14 = new QTextEdit(centralwidget);
        m14->setObjectName(QString::fromUtf8("m14"));
        m14->setGeometry(QRect(1370, 150, 51, 41));
        m12 = new QTextEdit(centralwidget);
        m12->setObjectName(QString::fromUtf8("m12"));
        m12->setGeometry(QRect(1250, 150, 51, 41));
        m10 = new QTextEdit(centralwidget);
        m10->setObjectName(QString::fromUtf8("m10"));
        m10->setGeometry(QRect(1130, 150, 51, 41));
        m21 = new QTextEdit(centralwidget);
        m21->setObjectName(QString::fromUtf8("m21"));
        m21->setGeometry(QRect(1190, 200, 51, 41));
        m23 = new QTextEdit(centralwidget);
        m23->setObjectName(QString::fromUtf8("m23"));
        m23->setGeometry(QRect(1310, 200, 51, 41));
        m24 = new QTextEdit(centralwidget);
        m24->setObjectName(QString::fromUtf8("m24"));
        m24->setGeometry(QRect(1370, 200, 51, 41));
        m22 = new QTextEdit(centralwidget);
        m22->setObjectName(QString::fromUtf8("m22"));
        m22->setGeometry(QRect(1250, 200, 51, 41));
        m20 = new QTextEdit(centralwidget);
        m20->setObjectName(QString::fromUtf8("m20"));
        m20->setGeometry(QRect(1130, 200, 51, 41));
        m31 = new QTextEdit(centralwidget);
        m31->setObjectName(QString::fromUtf8("m31"));
        m31->setGeometry(QRect(1190, 250, 51, 41));
        m33 = new QTextEdit(centralwidget);
        m33->setObjectName(QString::fromUtf8("m33"));
        m33->setGeometry(QRect(1310, 250, 51, 41));
        m34 = new QTextEdit(centralwidget);
        m34->setObjectName(QString::fromUtf8("m34"));
        m34->setGeometry(QRect(1370, 250, 51, 41));
        m32 = new QTextEdit(centralwidget);
        m32->setObjectName(QString::fromUtf8("m32"));
        m32->setGeometry(QRect(1250, 250, 51, 41));
        m30 = new QTextEdit(centralwidget);
        m30->setObjectName(QString::fromUtf8("m30"));
        m30->setGeometry(QRect(1130, 250, 51, 41));
        m41 = new QTextEdit(centralwidget);
        m41->setObjectName(QString::fromUtf8("m41"));
        m41->setGeometry(QRect(1190, 300, 51, 41));
        m43 = new QTextEdit(centralwidget);
        m43->setObjectName(QString::fromUtf8("m43"));
        m43->setGeometry(QRect(1310, 300, 51, 41));
        m44 = new QTextEdit(centralwidget);
        m44->setObjectName(QString::fromUtf8("m44"));
        m44->setGeometry(QRect(1370, 300, 51, 41));
        m42 = new QTextEdit(centralwidget);
        m42->setObjectName(QString::fromUtf8("m42"));
        m42->setGeometry(QRect(1250, 300, 51, 41));
        m40 = new QTextEdit(centralwidget);
        m40->setObjectName(QString::fromUtf8("m40"));
        m40->setGeometry(QRect(1130, 300, 51, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1422, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Cpp", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "ASM", nullptr));

        OK->setText(QApplication::translate("MainWindow", "OK", nullptr));
        selectFile->setText(QApplication::translate("MainWindow", "SelectFile", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        m00->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m01->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m02->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m03->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m04->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m11->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m13->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m14->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m12->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m10->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m21->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m23->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m24->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m22->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m20->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m31->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m33->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m34->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m32->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m30->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m41->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m43->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m44->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m42->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        m40->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
