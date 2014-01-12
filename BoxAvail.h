#ifndef BOXAVAIL_H
#define BOXAVAIL_H
#include "Box.h"
#include "BareList.h"
#include "BareNode.h"
#include <QLinkedList>
class boxAvail : public box
{
public:
    boxAvail( BareList &bl , QWidget * parent=0);
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

#endif // BOXAVAIL_H
