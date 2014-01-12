#include "banner.h"
#include <QMovie>
#include <QDebug>
Banner::Banner(QWidget *parent) :
    QWidget(parent)
{
    flash = new QLabel(this);
    QMovie *movie = new QMovie(":/Images/Banner.gif");
    flash->setMovie (movie);
    movie->start ();
    setWindowFlags (Qt::FramelessWindowHint);
    setFixedSize (800,600);
    center ();
    show();

    connect(movie, SIGNAL(finished()), this, SLOT(close()));
   // connect(movie, SIGNAL(finished()), parentWidget (), SLOT(show()));
}

#include <QDesktopWidget>
#include <QApplication>
void Banner::center()
{
    int x, y;
    int screenWidth;
    int screenHeight;
    int WIDTH = 800;
    int HEIGHT = 600;
    QDesktopWidget *desktop = QApplication::desktop();
    screenWidth = desktop->width();
    screenHeight = desktop->height();
    x = (screenWidth - WIDTH) / 2;
    y = (screenHeight - HEIGHT) / 2;
    setGeometry(x, y, WIDTH, HEIGHT);
    setFixedSize(WIDTH, HEIGHT);
}
