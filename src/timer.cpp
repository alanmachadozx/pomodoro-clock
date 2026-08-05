#include <QTimer>
#include <QDebug>
#include <qobject.h>
#include <qtmetamacros.h>
#include "../include/timer.hpp"

timerInterface::timerInterface(QObject *parent) : QObject(parent) {}

void timerInterface::focus(){
        
    static QTimer *timer = new QTimer(this);
    QObject::connect(timer, &QTimer::timeout, this, [this](){
        if(focusTime > 0){
            focusTime--;
            emit timeChanged();
        }
        else{
            timer->stop();
        }
    });
        timer->start(1000);
}
void timerInterface::pause(){
    
    static QTimer *timer = new QTimer(this);
    QObject::connect(timer, &QTimer::timeout, this, [this](){
        if(pauseTime > 0){
            pauseTime --;
            emit timeChanged();
        } else{
            timer->stop();
        }
    });
}

