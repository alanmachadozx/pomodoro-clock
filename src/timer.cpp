#include <QTimer>
#include <QDebug>
#include <qtmetamacros.h>
#include "../include/timer.hpp"

void timerInterface::focus() {
        
    static QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, this, [this](){
        if(focusTime > 0){
            focusTime--;
            emit timeChanged();
        }
    });
        timer.start(1000);
    
}


