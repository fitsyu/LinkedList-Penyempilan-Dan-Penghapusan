#include "ItemLinker.h"
#include <QDebug>
#include <QInputDialog>
itemLinker::itemLinker(int p, BareList *s, QFrame * parent)
    :item(p,s,parent)
{
    linker = new ClickableLabel(s,parent);
    setUp();
}

void itemLinker::setUp(){
    linker->setStyleSheet ("color: black");
    linker->setFrameShape(QFrame::WinPanel);
    linker->setStyleSheet ("background-color: black");
    linker->setFixedSize (140,4);
    //linker->setMaximumSize (140,4);
    linker->setCursor (QCursor(Qt::PointingHandCursor));
    linker->setToolTip ("Click to insert");
    linker->setPosition (this->getPosition ());

}

void itemLinker::draw (int x, int y){
    linker->move (x,y+10);
}

