#ifndef GAME_H
#define GAME_H

#include <QApplication>
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include<QGraphicsView>
#include <QTimer>
#include<QWidget>
#include<QGraphicsItem>
#include "MyRect.h"
//#include "qobjectdefs.h"
#include <QObject>
#include "score.h"
#include "health.h"
class Game: public QGraphicsView
{
public:
    Game(QWidget * parent = 0);
    QGraphicsScene * scene;
    MyRect * player;
    Score * score;
    Health* health;
};

#endif // GAME_H
