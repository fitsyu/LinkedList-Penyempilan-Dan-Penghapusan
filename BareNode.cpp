#include "BareNode.h"
#include <QInputDialog>
BareNode::BareNode(){/*
    setId( QInputDialog::getInt (0,"id",));
    setInfo ( QInputDialog::getText (0));
    setLink ( QInputDialog::getInt (0));*/
}

BareNode::BareNode(int i, QString inf, int l)
    :id(i), info(inf), link(l)
{}

int BareNode::getId()  const {return id;}
QString BareNode::getInfo() const {return info;}
int BareNode::getLink() const {return link;}

void BareNode::setId(int i) {id=i;}
void BareNode::setInfo(QString inf) {info = inf;}
void BareNode::setLink(int l) {link = l;}
