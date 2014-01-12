#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "BareList.h"
#include "BoxTable.h"
#include "BoxLinkedList.h"
#include "BoxAvail.h"

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(BareList *s, QWidget *parent = 0);
    explicit Widget(QWidget *parent=0);
    void setUp();
signals:

public slots:
    void updateBoxes();
private:
    BareList *source;
    boxTable *tabel;
    boxLinkedList *linkedList;
    boxAvail *avail;
};

#endif // WIDGET_H
