#ifndef ITEMNODE_H
#define ITEMNODE_H
#include "Item.h"
#include "clickablelabel.h"
class itemNode : public item
{
    Q_OBJECT
public:
    itemNode();  // interactive construction
    itemNode(BareList *s, int, int, QString, int, QFrame * = 0);

    void setUp();

    int getId()  const;
    QString getInfo() const;
    int getLink() const;

    void setId(int);
    void setInfo(QString);
    void setLink(int);

    void virtual draw(int, int); // implement this!!!
protected:
    void mousePressEvent (QMouseEvent *ev);
private:
    int id;
    QString info;
    int link;

    ClickableLabel *lbName;
    QLabel *lbLink;
};

#endif // ITEMNODE_H
