#include "ItemNode.h"
#include <QDebug>
itemNode::itemNode(BareList *s, int p, int i, QString inf, int l, QFrame * parent)
    :item(p,s, parent), id(i), info(inf), link(l)
{
    lbName = new ClickableLabel(s,info, parent);
    lbLink = new QLabel(QString::number (link), parent);
    setUp ();
}

void itemNode::setUp (){
    lbName->setFrameShape (QFrame::Panel);
    lbLink->setFrameShape (lbName->frameShape ());

    lbName->setFixedSize (100,30);
    lbLink->setFixedSize(40,30);

    lbName->setAlignment (Qt::AlignCenter);
    lbLink->setAlignment (lbName->alignment ());

    lbName->setPosition (this->getPosition ());
}

int itemNode::getId () const{
    return id;
}
QString itemNode::getInfo ()const{
    return info;
}

int itemNode::getLink () const{
    return link;
}
void itemNode::draw (int x, int y){
    lbName->move (x,y);
    lbLink->move (x+100,y);
}

void itemNode::mousePressEvent (QMouseEvent *ev){
    qDebug() << "hit";
}
