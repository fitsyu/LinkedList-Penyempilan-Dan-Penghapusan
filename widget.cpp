#include "widget.h"
#include <QIcon>
Widget::Widget(BareList *s, QWidget *parent) :
    QWidget(parent),source(s)
{
    setWindowTitle ("Linked List Penyempilan & Penghapusan");
    linkedList = new boxLinkedList(*source, this);
    avail = new boxAvail(*source,this);
    tabel = new boxTable(*source, this);

    setUp();
    connect (source, SIGNAL(changed()), this, SLOT(updateBoxes()));
}

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    source = new BareList;
    linkedList = new boxLinkedList(*source, this);
    avail = new boxAvail(*source,this);
    tabel = new boxTable(*source, this);

    setUp();
    connect (source, SIGNAL(changed()), this, SLOT(updateBoxes()));
}
void Widget::setUp(){
    setWindowTitle ("Linked List Penyempilan & Penghapusan");
    linkedList->move (40,50);
    avail->move (40,350);
    tabel->move (900,50);

// ---------
    QLabel *llLogo, *availLogo, *tableLogo;
    llLogo = new QLabel(this);
    llLogo->setPixmap (QPixmap(":/Images/LinkedList.png"));
    llLogo->move (40,10);

    availLogo = new QLabel(this);
    availLogo->setPixmap (QPixmap(":/Images/Avail.png"));
    availLogo->move (40,310);

    tableLogo = new QLabel(this);
    tableLogo->setPixmap (QPixmap(":/Images/Table.png"));
    tableLogo->move (950,10);

    setWindowIcon (QIcon(*llLogo->pixmap ()));
}

void Widget::updateBoxes (){

    delete tabel;
    tabel = new boxTable(*source, this);
    tabel->show ();

    delete linkedList;
    linkedList = new boxLinkedList(*source, this);
    linkedList->show ();


    delete avail;
    avail = new boxAvail(*source, this);
    avail->show ();

    setUp();
}
