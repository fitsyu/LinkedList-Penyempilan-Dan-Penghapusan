#ifndef BANNER_H
#define BANNER_H

#include <QWidget>
#include <QLabel>
class Banner : public QWidget
{
    Q_OBJECT
public:
    explicit Banner(QWidget *parent = 0);
    void center();
signals:
    
public slots:
    
private:
    QLabel *flash;
};

#endif // BANNER_H
