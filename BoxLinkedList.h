#ifndef BOXLINKEDLIST_H
#define BOXLINKEDLIST_H
#include "Box.h"
#include "BareList.h"
#include "BareNode.h"
#include <QLinkedList>
class boxLinkedList : public box
{
public:
    boxLinkedList( BareList &bl , QWidget * parent=0);
    void convertNodes(QLinkedList<BareNode*> src);
    void setUp();
    void virtual drawitems ();

public slots:
    virtual void setSource();
private:
    BareList &Server;
    QLinkedList<item*> source;
    QLinkedList<item*>::Iterator it;
};

#endif // BOXLINKEDLIST_H
