#include "BoxLinkedList.h"
#include "ItemNode.h"
#include "ItemLinker.h"
#include <QDebug>
boxLinkedList::boxLinkedList( BareList &bl , QWidget * parent)
    :box(parent), Server(bl)
{
    convertNodes (bl.getLinkedList ());
    setUp ();
    drawitems ();
}

void boxLinkedList::convertNodes(QLinkedList<BareNode*> src){
    QLinkedList<BareNode*>::Iterator bnIt;
    itemNode *node;
    itemLinker *linker;

    int pos=1;
    int id;
    QString info;
    int link;
    for (bnIt=src.begin (); bnIt!=src.end (); ++bnIt){
        id = (*bnIt)->getId();
        info = (*bnIt)->getInfo();
        link = (*bnIt)->getLink();
        node = new itemNode(&Server,pos,id,info,link, this);
        source << node;

        if (link){
            linker = new itemLinker(pos, &Server, this);
            source << linker;
        }
        ++pos;
    }
}

void boxLinkedList::setUp(){
    setFrameShape (QFrame::WinPanel);
    setFixedSize (800,250);
}

void  boxLinkedList::drawitems ()
{
    int x=190, y=30;

    QLabel *starter;
    itemLinker *starterLinker;

    starter = new QLabel(QString::number (source.first ()->getId ()),this);
    starterLinker = new itemLinker(0,&Server, this);

    starter->setFixedSize (30,30);
    starter->setAlignment (Qt::AlignCenter);
    starter->setFrameShape (QFrame::WinPanel);

    starter->move (20,30);
    starterLinker->draw(50,30);

    for(it=source.begin (); it!=source.end (); ++it){
        (*it)->draw(x,y);
        (*it)->show();
        x+=140;
        //qDebug() << (*it)->isHidden ();

        if ( this->width()-x < 150){
            x=20, y+=50;
        }
    }
}

void boxLinkedList::setSource()
{
    qDeleteAll(this->children ());

    source.clear ();
    convertNodes (Server.getLinkedList ());
    drawitems ();
}


