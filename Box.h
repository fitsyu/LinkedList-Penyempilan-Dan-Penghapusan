#ifndef BOX_H
#define BOX_H
#include <QLinkedList>
#include "BareNode.h"
#include "Item.h"
class box : public QFrame
{
    Q_OBJECT
public:
    box(QWidget *parent =0);
    void virtual drawitems();
public slots:
    virtual void setSource() =0;
};

#endif // BOX_H
