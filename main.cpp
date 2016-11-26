#include "mainwindow.h"
#include <QApplication>
//#include <QLabel>
//#include <QCamera>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QImage inImage("/Users/HZzone/Desktop/Dachuang2016/lena.png");
//    QLabel myLabel;
//    myLabel.setPixmap(QPixmap::fromImage(inImage));
//    myLabel.show();
//    QImage outImage = process(inImage);
//    outImage.save("/Users/HZzone/Desktop/Dachuang2016/canny.png");
    MainWindow w;
    w.show();
//    QCamera*  _camera = new QCamera();
//    CameraFrameGrabber* _cameraFrameGrabber = new CameraFrameGrabber();
//    _camera->setViewfinder(_cameraFrameGrabber);
//    _camera->start();

    return a.exec();
}
