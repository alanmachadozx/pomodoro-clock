#include <QTimer>
#include <QDebug>
#include "../include/timer.hpp"

void focus() {
        
    static QTimer timer;
    static int focusTime = 1500;

    QObject::connect(&timer, &QTimer::timeout, [&](){
        if(focusTime > 0){
            
            int minutes = focusTime/60;
            int seconds = focusTime % 60;
            qDebug() << minutes << ":" << seconds ;
            focusTime--;
        }
    });
    timer.start(1000);
    
}