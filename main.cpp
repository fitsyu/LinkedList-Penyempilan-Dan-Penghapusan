#include <QApplication>
#include "banner.h"
#include "widget.h"
#include "BareList.h"
#include "BoxLinkedList.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    
    //BareList bl;
    Banner baner;
    Widget w;

    w.show ();
    return a.exec();
}

//vector<BareNode*> vgn(12);
//vgn[0] = new BareNode(1,"Kirk", 7);
//vgn[1] = new BareNode(2,"", 6);
//vgn[2] = new BareNode(3,"Dean",11);
//vgn[3] = new BareNode(4, "Maxwell", 12);
//vgn[4] = new BareNode(5,"Adams",3);
//vgn[5] = new BareNode(6,"",0);
//vgn[6] = new BareNode(7,"Lane",4);
//vgn[7] = new BareNode(8,"Green",1);
//vgn[8] = new BareNode(9,"Samuels",0);
//vgn[9] = new BareNode(10,"",2);
//vgn[10] = new BareNode(11,"Fields",8);
//vgn[11] = new BareNode(12,"Nelson",9);

//    BareList bl(vgn);
