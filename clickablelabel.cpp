#include "clickablelabel.h"
#include <QDebug>
ClickableLabel::ClickableLabel(BareList *s, QFrame *parent) :
    QLabel(parent), Server(s)
{
    connect (this, SIGNAL(send(int)), Server, SLOT(insertNode(int)) );
}

ClickableLabel::ClickableLabel(BareList *s, QString info,  QFrame *parent) :
    QLabel(parent), Server(s)
{
    connect (this, SIGNAL(send(int)), Server, SLOT(removeNode(int)) );
    this->setText (info);
}

void ClickableLabel::setPosition (int p){
    position = p;
}

int ClickableLabel::getPosition () const{
    return position;
}

void ClickableLabel::setServer (BareList *bl){
    Server = bl;
}

void ClickableLabel::mouseDoubleClickEvent (QMouseEvent *e){
    emit doubleClicked ();
}

void ClickableLabel::doubleClicked (){
    emit send(getPosition());
}
