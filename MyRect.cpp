#include "MyRect.h"
#include"bullet.h"
#include"enemy.h"
#include<QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include<QGraphicsItem>
MyRect::MyRect(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap("C:/Users/HP/Documents/Trial/Player.png"));
    setScale(0.25);
}

void MyRect::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left)
    {
        if(pos().x() > 0)
        setPos(x()-10, y());
    }
    else if(event->key() == Qt::Key_Right)
    {
        if(pos().x() + 100 < 800)
        setPos(x()+10, y());
    }
    else if(event->key() == Qt::Key_Up)
    {
        if(pos().y()>  0)
        setPos(x(), y()-10);
    }
    else if(event->key() == Qt::Key_Down)
    {
        if(pos().y() + 100 < 600)
        setPos(x(), y()+10);
    }
    else if(event->key()==Qt::Key_Space){
        bullet* Bullet = new bullet();
        Bullet->setPos(x() + 70,y() + 30);
        scene()->addItem(Bullet);
    }

}

void MyRect::spawn()
{
    Enemy* enemy = new Enemy();
    scene()->addItem(enemy);
}

int MyRect::getwidth()
{
    //width();
}
