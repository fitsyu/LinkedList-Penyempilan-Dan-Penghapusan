#ifndef BOXTABLE_H
#define BOXTABLE_H
#include "Box.h"
#include "BareList.h"
#include "BareNode.h"
#include <QLinkedList>
class boxTable : public box
{
public:
    boxTable( BareList &bl , QWidget * parent=0);
    void convertNodes(vector<BareNode*> src);
    void setUp();
    void virtual drawitems ();

public slots:
    virtual void setSource();
private:
    BareList &Server;
    vector<item*> source;
    vector<item*>::iterator it;
};

#endif // BOXTABLE_H
