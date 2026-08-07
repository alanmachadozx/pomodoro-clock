
#include <QDebug>
#include <qobject.h>
#include <qtmetamacros.h>
#include "../include/timer.hpp"

timerInterface::timerInterface(QObject *parent) : QObject(parent) {
        
    timer = new QTimer(this);
    QObject::connect(timer, &QTimer::timeout, this, [this](){
        if(isFocus){
            if(focusTime > 0){
                focusTime--;
                emit timeChanged();
            }
            else{
                pause();
            }
        } else{
            if(pauseTime > 0){
                pauseTime--;
                emit timeChanged();
            } else{
                focusTime = 10;
                pauseTime = 3;
                focus();
                
            }
        }
    });
}

void timerInterface::focus(){
    isFocus = true;
    if(!timer->isActive()){
        timer->start(1000);
    }
}

void timerInterface::pause(){
    isFocus = false;
    if(!timer->isActive()){
        timer->start(1000);
    }
}