#include "bullet.h"
#include <QTimer>
#include<QList>
#include "enemy.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include "game.h"
//#include "MyRect.h"
extern Game * game;
bullet::bullet(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem(parent)
{

    QPixmap Bbullet("C:/Users/HP/Documents/Trial/bullet.png");
    setPixmap(Bbullet);
    setScale(0.05);
    //Bbullet.scaledToWidth(60);
    //Bbullet.scaledToHeight(70);
    //setRect(0,0,10,50);
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
    //setPos(x() + y() + 2);
}

void bullet::move()
{
    //if colliding remove the enemy
    QList <QGraphicsItem *> colliding_item = collidingItems();
    int n = colliding_item.size();
    for(int i = 0; i < n; ++i)
    {
        if(typeid(*(colliding_item[i])) == typeid(Enemy))
        {
            game->score->increase();
            scene()->removeItem(colliding_item[i]);
            scene()->removeItem(this);
            delete colliding_item[i];

            delete this;
            return;
        }
    }

    setPos(x() + 10, y());
    if(pos().x() <0 )
    {
        scene()->removeItem(this);
        delete this;
    }
}

