#ifndef ITEM_H
#define ITEM_H
#include "BareList.h"
#include <QFrame>
#include <QLabel>
#include <QString>
#include <QLinkedList>
class item : public QLabel
{
    Q_OBJECT
public:
    item(int, BareList *s,QFrame *);
    void virtual draw(int, int) = 0; // you got to implement this
    //~item();
    int virtual getId() const;
    int getPosition() const;
    int position;
private:
    BareList *server;

};

#endif // ITEM_H
