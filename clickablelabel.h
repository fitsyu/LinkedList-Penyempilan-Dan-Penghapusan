#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H
#include "BareList.h"
#include <QLabel>

class ClickableLabel : public QLabel
{
    Q_OBJECT
public:
    explicit ClickableLabel(BareList *s, QFrame *parent = 0);
    explicit ClickableLabel(BareList *s, QString, QFrame *parent=0);

    void setPosition(int);
    int getPosition() const;

    void setServer(BareList *bl);
signals:
    void doubleClicked();
    void send(int);
public slots:
    void mouseDoubleClickEvent (QMouseEvent *);
private:
    BareList *Server;
    int position;
};

#endif // CLICKABLELABEL_H
