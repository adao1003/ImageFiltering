#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "cmake-build-debug/ImageFiltering_autogen/include/ui_mainwindow.h"
#include <iostream>
#include <QFileDialog>
#include <thread>
#include <fstream>
#include <thread>
#include "../../SO_C/library.h"
#include <chrono>
#include <thread>
//This code is self-documenting ;)
extern "C" int imageFilAsm(char*, char*, short int*);
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);
    ui->graphicsView_2->setScene(&scene1);
    ui->horizontalSlider->setValue(std::thread::hardware_concurrency());
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_OK_clicked()
{
    auto mat = serializeMatrix();
    int threadsnumber = ui->horizontalSlider->value();
    std::vector<std::thread> threads;
    int k = end / threadsnumber;
    int r = end % threadsnumber;
    image1 = image;
    imageTab1 = image1.bits();
    if(ui->comboBox->currentText() == QString("Cpp")){
        auto start = std::chrono::high_resolution_clock::now();
        unsigned int n = 0;
        for(int i = 2; i < image.height() + 2 ; i++)
            for(int j = 2; j < image.width() + 2; j++)
            {
                imageTab[n]=filterImage(imageB.data(), mat, image.width(), ((i-2) * (image.width()+4))+2*image.width() + j);
                imageTab[n+1]=filterImage(imageG.data(), mat, image.width(), ((i-2) * (image.width()+4))+2*image.width() + j);
                imageTab[n+2]=filterImage(imageR.data(), mat, image.width(), ((i-2) * (image.width()+4))+2*image.width() + j);
                n+=4;
            }
        pixmap= QPixmap::fromImage(image1);
        scene1.clear();
        scene1.addPixmap(pixmap);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff = end-start;
        ui->time->setText(QString(std::to_string(diff.count()).c_str()));
    }
    else if(ui->comboBox->currentText() == QString("ASM")){
        auto start = std::chrono::high_resolution_clock::now();
        unsigned int n = 0;
        for(int i = 2; i < image.height() + 2 ; i++)
            for(int j = 2; j < image.width() + 2; j++)
            {
                imageTab[n]=prepareASM(imageB.data(), mat, image.width(), ((i-2) * (image.width()+4))+2*image.width() + j);
                imageTab[n+1]=prepareASM(imageG.data(), mat, image.width(), ((i-2) * (image.width()+4))+2*image.width() + j);
                imageTab[n+2]=prepareASM(imageR.data(), mat, image.width(), ((i-2) * (image.width()+4))+2*image.width() + j);
                n+=4;
            }
        pixmap= QPixmap::fromImage(image);
        scene1.clear();
        scene1.addPixmap(pixmap);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff = end-start;
        ui->time->setText(QString(std::to_string(diff.count()).c_str()));
    }
    delete [] mat;
}

void MainWindow::on_selectFile_clicked()
{
    auto fileName = QFileDialog::getOpenFileName(this,
                                                 tr("Open Image"), "./", tr("Image Files (*.png *.jpg *.bmp)"));
    if(fileName.size()==0)
        return;
    pixmap = QPixmap(fileName);
    image = pixmap.toImage();
    scene.addPixmap(pixmap);
    imageTab = image.bits();
    imageSize = image.byteCount();
    for(int i = 0; i < image.width(); i++)
    {
        imageB.push_back(0);
        imageB.push_back(0);
        imageG.push_back(0);
        imageG.push_back(0);
        imageR.push_back(0);
        imageR.push_back(0);
    }
    imageB.push_back(0);
    imageB.push_back(0);
    imageG.push_back(0);
    imageG.push_back(0);
    imageR.push_back(0);
    imageR.push_back(0);
    for(int i = 0; i<imageSize;i+=4){
        if((i/4) % image.width() == 0 && i != 0){
            imageB.push_back(0);
            imageB.push_back(0);
            imageB.push_back(0);
            imageB.push_back(0);
            imageG.push_back(0);
            imageG.push_back(0);
            imageG.push_back(0);
            imageG.push_back(0);
            imageR.push_back(0);
            imageR.push_back(0);
            imageR.push_back(0);
            imageR.push_back(0);
        }
        imageB.push_back(imageTab[i]);
        imageG.push_back(imageTab[i+1]);
        imageR.push_back(imageTab[i+2]);
    }
    for(int i = 1; i < pixmap.toImage().width(); i++)
    {
        imageB.push_back(0);
        imageB.push_back(0);
        imageG.push_back(0);
        imageG.push_back(0);
        imageR.push_back(0);
        imageR.push_back(0);
    }
    std::ofstream ss("temp");
    for(int i = 0; i<imageR.size();i++)
    {
        ss << (int)imageR[i]<< " ";
    }
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->label->setText(QString::number(value));
}

signed char * MainWindow::serializeMatrix() {
    auto* tab = new signed char[32];
    tab[0] = ui->m00->value();
    tab[1] = ui->m01->value();
    tab[2] = ui->m02->value();
    tab[3] = ui->m03->value();
    tab[4] = ui->m04->value();
    tab[5] = ui->m10->value();
    tab[6] = ui->m11->value();
    tab[7] = ui->m12->value();
    tab[8] = ui->m13->value();
    tab[9] = ui->m14->value();
    tab[10] = ui->m20->value();
    tab[11] = ui->m21->value();
    tab[12] = ui->m22->value();
    tab[13] = ui->m23->value();
    tab[14] = ui->m24->value();
    tab[15] = ui->m30->value();
    tab[16] = ui->m31->value();
    tab[17] = ui->m32->value();
    tab[18] = ui->m33->value();
    tab[19] = ui->m34->value();
    tab[20] = ui->m40->value();
    tab[21] = ui->m41->value();
    tab[22] = ui->m42->value();
    tab[23] = ui->m43->value();
    tab[24] = ui->m44->value();
    for(int i = 25;i<32;i++){
        tab[i]=0;
    }
    return tab;
}

unsigned char MainWindow::prepareASM(unsigned char *image, signed char *mask, unsigned int width, unsigned int index) {
    char temp[32] = {};
    short temp1[20] = {};
    unsigned int n = 0;
    for(int i =-2;i<=2;i++)
        for(int j=-2;j<=2;j++)
        {
            temp[n] = image[index+(width*i+j)];
            n++;
        }
    return imageFilAsm(temp, reinterpret_cast<char *>(mask), temp1);
}

void MainWindow::cppThread(unsigned char *image, signed char *mask, unsigned int width, unsigned int index, int begin,
                           int end) {
    for(int i=begin; i<end;)
        imageTab1[n] = filterImage(imageB.data(), mask, width, index);
        imageTab1[n + 1] = filterImage(imageG.data(), mask, width, index);
        imageTab1[n + 2] = filterImage(imageR.data(), mask, width, index);
}
