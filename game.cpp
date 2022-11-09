#include "game.h"
#include<QTimer>
#include <QGraphicsTextItem>
#include<QFont>
#include"MyRect.h"
//#include"enemy.h"
//#include<Qmultimedia>
//#include <QAudioOutput>
#include<QImage>
Game::Game(QWidget* parent)
{
    QGraphicsScene * scene = new QGraphicsScene();
    QImage Background("C:/Users/HP/Documents/Trial/background.jpg");
    //view->setBackgroundBrush(QBrush(Background));
    MyRect * player = new MyRect();
    player->setPos(400,500);
    scene->addItem(player);
    scene->addItem(player);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    QGraphicsView * view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(800,600);
    scene ->setSceneRect(0,0,800,600);
    view->setBackgroundBrush(QBrush(Background));
    score = new Score();
    scene->addItem(score);
    health = new Health();
    health->setPos(health->x(), health->y()+ 25);
    scene->addItem(health);
    QTimer * timer = new QTimer();
    //qDebug() << "Hi I am here";
    //player->spawn();
    QObject::connect(timer, SIGNAL(timeout()),player, SLOT(spawn()));
    //QObject::connect(timer,SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2000);
    //player->setPos(view->width()/2, view->height() - player->rect().height());


}
