#ifndef ITEMLINKER_H
#define ITEMLINKER_H
#include "Item.h"
#include "clickablelabel.h"
class itemLinker : public item
{
    Q_OBJECT
public:
    itemLinker(int, BareList *s, QFrame * = 0);

    void setUp();
    void virtual draw(int, int); // implement this!!!

    ClickableLabel *linker;
};

#endif // ITEMLINKER_H
