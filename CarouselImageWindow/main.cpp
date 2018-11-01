#include <QtWidgets/QApplication>
#include "CarouselImageWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CarouselImageWindow w;
    w.addImage(":/Resources/1.jpg");
    w.addImage(":/Resources/2.jpg");
    w.addImage(":/Resources/3.jpg");
    w.addImage(":/Resources/4.jpg");
    w.addImage(":/Resources/5.jpg");
    w.addImage(":/Resources/6.jpg");
    w.addImage(":/Resources/7.jpg");
    w.addImage(":/Resources/8.jpg");
    w.setControlButtonColor(Qt::yellow);
    w.setBorderColor(Qt::red);
    w.setImageChangeDuration(2000);
    w.startPlay();
    w.show();
    return a.exec();
}
