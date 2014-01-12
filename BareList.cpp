#include "BareList.h"
#include <QInputDialog>
#include <QDebug>
#include <iostream>

BareList::BareList(){
    int size = QInputDialog::getInt (0,"Size", "Please enter the size!",0,0,12);
    table.resize(size);

    QString info;
    int link;
    for (int loop=0; loop < table.size(); ++loop){
        // just place holder
        info =  QInputDialog::getText (0,QString::number (loop+1),\
                                      "Type in format\n \
                                      [name]:[link]" \
                                      ,QLineEdit::Normal,":");
        // extracting info
        link = info.mid (info.indexOf (":")+1).toInt ();
        info = info.mid(0,info.indexOf (":"));

        BareNode * bn = new BareNode(loop+1,info,link);
        table[loop] = bn;
    }
    llStart = QInputDialog::getInt (0,"Start", "Linked List Start:",0,0,12)-1;
    availStart = QInputDialog::getInt (0,"Start", "Avail Start:",0,0,12)-1;
    extract ();
}

BareList::BareList(vector<BareNode *> vn) : table(vn) {
    llStart = QInputDialog::getInt (0,"Start", "Linked List Start:",0,0,12)-1;
    availStart = QInputDialog::getInt (0,"Start", "Avail Start:",0,0,12)-1;
    extract();
}

void BareList::extract (){
    linkedlist << table[llStart];
    iter1 = linkedlist.begin ();
    int next = (*iter1)->getLink();
    while (next){
        linkedlist << table[next-1];
        ++iter1;
        next = (*iter1)->getLink();
    }


    avail << table[availStart];
    iter1 = avail.begin ();
    next = (*iter1)->getLink();
    while (next){
        avail << table[next-1];
        ++iter1;
        next = (*iter1)->getLink();
    }
}

void BareList::insert (int pos, QString info){
    iter1 = linkedlist.begin ();
    iter1 += pos-1;

    int id = avail.takeFirst ()->getId();
    QString name = info;
    int link = (*iter1)->getId();

    BareNode *toInsert;
    toInsert = new BareNode(id,name,link);
    linkedlist.insert (iter1, toInsert);

    --iter1;
    --iter1;
    (*iter1)->setLink(toInsert->getId());

    table[id-1]->setInfo(info);
    table[id-1]->setLink(link);
}

BareNode* BareList::remove (int pos){


    iter1 = linkedlist.begin ();
    if (pos!=1) iter1 += pos-1;
    int oldlink = (*iter1)->getLink();

    --iter1;
    (*iter1)->setLink(oldlink);


    ++iter1;
    int id = (*iter1)->getId();
    int link = avail.first ()->getId ();
    BareNode * newAvail = new BareNode(id,"",link);
    avail.push_front (newAvail);

    BareNode *takeThis = (*iter1);
    linkedlist.erase (iter1);

    table[id-1]->setInfo(avail.first ()->getInfo());
    table[id-1]->setLink(avail.first ()->getLink ());
    return takeThis;
}

void BareList::print (){
    std::cout << endl << endl;
    QLinkedListIterator<BareNode*> it(linkedlist);
    iter1 = linkedlist.begin ();
    std::cout << "Linked List Print Out\n";
    while(it.hasNext ()){
        std::cout << (*iter1)->getInfo().toStdString ()<< " : " << (*iter1)->getLink() << " --> ";
        ++iter1;
        it.next ();
    }
    std::cout << endl<< endl;

    QLinkedListIterator<BareNode*> it2(avail);
    iter1 = avail.begin ();
    std::cout << "Avail Print Out\n";
    while(it2.hasNext ()){
        std::cout << (*iter1)->getInfo().toStdString ()<< " : " << (*iter1)->getLink() << " --> ";
        ++iter1;
        it2.next ();
    }
    std::cout << endl << endl;
}

vector<BareNode*> BareList::getTable () const{
    return table;
}
QLinkedList<BareNode*> BareList::getLinkedList () const{
    return linkedlist;
}

QLinkedList<BareNode*> BareList::getAvail ()const{
    return avail;
}

void BareList::iGotSomething (){
    emit changed ();
}

void BareList::insertNode (int pos){
    bool ok;
    QString info = QInputDialog::getText (0,"Insert", "Enter a name:",QLineEdit::Normal,"someOne",&ok);
    if (ok) insert(pos+1,info);
    //this->print ();
    emit iGotSomething ();
}

void BareList::removeNode (int pos){
   // this->print ();
    remove(pos)->getInfo ();
    emit iGotSomething ();
}
