#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsRectItem>
#include<QGraphicsPixmapItem>
#include <QObject>
class MyRect:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT;
public:
    MyRect(QGraphicsItem * parent = 0);
    void keyPressEvent(QKeyEvent * event);
    int getwidth();
public slots:
    void spawn();
};

//class MyRect: public QGraphicsRectItem{
//    //Q_OBJECT;
//public:
//    void keyPressEvent(QKeyEvent * event);
//public slots:
//    void spawn();
//};

#endif // MYRECT_H
