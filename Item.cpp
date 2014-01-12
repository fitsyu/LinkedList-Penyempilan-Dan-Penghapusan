#include "Item.h"

item::item(int p,BareList *s, QFrame *parent)
    :position(p), server(s), QLabel(parent)
{}

int item::getPosition () const{
    return position;
}

int item::getId () const{}
