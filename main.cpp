//#include "mainwindow.h"
#include <QApplication>
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include<QGraphicsView>
#include <QTimer>
#include<QWidget>
#include<QGraphicsItem>
//#include "MyRect.h"
//#include "qobjectdefs.h"
#include <QObject>
#include "game.h"

Game* game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    game = new Game();
    game->show();


//    QGraphicsScene * scene = new QGraphicsScene();
//    MyRect * player = new MyRect();
//    player->setRect(0,0,100,100);
//    scene->addItem(player);
//    scene->addItem(player);
//    player->setFlag(QGraphicsItem::ItemIsFocusable);
//    player->setFocus();
//    QGraphicsView * view = new QGraphicsView(scene);
//    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//    view->show();
//    view->setFixedSize(800,600);
//    scene ->setSceneRect(0,0,800,600);

//    QTimer * timer = new QTimer();
//    //qDebug() << "Hi I am here";
//    //player->spawn();
//    QObject::connect(timer, SIGNAL(timeout()),player, SLOT(spawn()));
//    //QObject::connect(timer,SIGNAL(timeout()), player, SLOT(spawn()));
//    timer->start(2000);
//    player->setPos(view->width()/2, view->height() - player->rect().height());
    //MainWindow w;
    //w.show();
    return a.exec();
}
