#include "BoxTable.h"
#include "ItemNode.h"
#include "ItemLinker.h"
#include <QDebug>

boxTable::boxTable( BareList &bl , QWidget * parent)
    :box(parent), Server(bl)
{
    convertNodes (bl.getTable ());
    setUp ();
    drawitems ();
}

void boxTable::convertNodes(vector<BareNode *> src){
    vector<BareNode*>::iterator bnIt;
    itemNode *node;

    int pos=0;
    int id;
    QString info;
    int link;

    source.resize (src.size ());
    for (bnIt=src.begin (); bnIt!=src.end(); ++bnIt){
        id = (*bnIt)->getId();
        info = (*bnIt)->getInfo();
        link = (*bnIt)->getLink();
        node = new itemNode(&Server,pos,id,info,link, this);
        source[pos]= node;
        ++pos;
    }
}

void boxTable::setUp(){
    setFrameShape (QFrame::WinPanel);
    setFixedSize (250,550);
}

void  boxTable::drawitems ()
{
    int x=60, y=30;
    QLabel *index;
    int n;
    for(it=source.begin (); it!=source.end (); ++it){
        n = (*it)->getId();
        index = new QLabel(QString::number (n),this);
        index->setAlignment (Qt::AlignCenter);
        index->move (20,y+5);
     //   if (Server.linkedlist == n) qDebug() << "true";

        (*it)->draw(x,y);
        (*it)->show();
        y+=40;
    }
}

void boxTable::setSource(){}
