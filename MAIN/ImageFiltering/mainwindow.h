#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QGraphicsScene>
#include <mutex>
#include <condition_variable>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_OK_clicked();

    void on_selectFile_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    std::mutex mutex, mutex1;
    std::condition_variable cv, cv1;
    bool end = false;
    bool lock = true;
    int index = 0;
    unsigned int n = 0;
    signed char * serializeMatrix();
    inline unsigned char prepareASM(unsigned char *image, signed char *mask, unsigned int width, unsigned int index);
    void cppThread(unsigned char *image, signed char *mask, unsigned int width, unsigned int index, int begin,
                   int end);
    Ui::MainWindow *ui;
    QGraphicsScene scene;
    QGraphicsScene scene1;
    QPixmap pixmap;
    QImage image;
    QImage image1;
    int imageSize;
    uchar* imageTab;
    uchar* imageTab1;
    std::vector<uchar> imageR;
    std::vector<uchar> imageG;
    std::vector<uchar> imageB;

};
#endif // MAINWINDOW_H
