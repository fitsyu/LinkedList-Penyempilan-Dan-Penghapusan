#ifndef BAREBONE_H
#define BAREBONE_H
#include <QObject>
#include <QLinkedList>
#include "BareNode.h"
#include <vector>
using namespace std;
class BareList : public QObject
{
    Q_OBJECT
public :
    BareList(); //interactive construction
    BareList(  vector<BareNode*> );

    void insert(int pos, QString info);
    BareNode* remove(int pos);

    vector<BareNode*> getTable() const;
    QLinkedList<BareNode*> getLinkedList() const;
    QLinkedList<BareNode*> getAvail() const;

    void print();
protected:
    void extract();

signals:
    void changed();
    void iGotSomething();
    void iLackSomething();
public slots:
    void insertNode(int);
    void removeNode(int);

private:
    vector <BareNode*> table;
    QLinkedList<BareNode*> linkedlist;
    QLinkedList<BareNode*> avail;
    QLinkedList<BareNode*>::Iterator iter1;
    int llStart, availStart;
};

#endif // BAREBONE_H
