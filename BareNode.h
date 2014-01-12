#ifndef BARENODE_H
#define BARENODE_H
#include <QString>
class BareNode
{
public :
    BareNode(); // interactive mode
    BareNode(int, QString, int);

    int getId()  const;
    QString getInfo() const;
    int getLink() const;

    void setId(int);
    void setInfo(QString);
    void setLink(int);

private:
    int id;
    QString info;
    int link;
};
#endif // BARENODE_H
