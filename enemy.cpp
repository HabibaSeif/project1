#include "enemy.h"
#include "game.h"
#include <QTimer>
#include <QGraphicsScene>
extern Game* game;
Enemy::Enemy()
{
    //set random position
    int random_number = rand() % 500;
    setPos(700, random_number);
    setPixmap(QPixmap("C:/Users/HP/Documents/Trial/enemy.png"));
    setScale(0.25);

    //setRect(700,70,100,100);
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

}

void Enemy::move()
{
    setPos(x() - 5 , y());
     if(pos().x() < 0)
    {
         game->health->decrease();
        scene()->removeItem(this);
        //qDebug() << "Enemy got deleted";
        delete this;
    }
}
