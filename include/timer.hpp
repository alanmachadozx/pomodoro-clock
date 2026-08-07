#include <qobject.h>
#include <qqmlintegration.h>
#include <qtmetamacros.h>
#include <QTimer>

class timerInterface : public QObject{
    Q_OBJECT
    QML_ELEMENT
    QML_NAMED_ELEMENT(TimerInterface)

    Q_PROPERTY(int focusMinutes READ getFocusMinutes NOTIFY timeChanged)
    Q_PROPERTY(int focusSeconds READ getFocusSeconds NOTIFY timeChanged)
    Q_PROPERTY(int pauseMinutes READ getPauseMinutes NOTIFY timeChanged)
    Q_PROPERTY(int pauseSeconds READ getPauseSeconds NOTIFY timeChanged)
    public:

        //wait only objects type QOBJECT
        explicit timerInterface(QObject *parent = nullptr);
    
        int getFocusMinutes() const{
            return focusTime/60;
        }
        int getFocusSeconds() const{
            return focusTime % 60;   
        }
        int getPauseMinutes() const{
            return pauseTime/60;
        }
        int getPauseSeconds() const{
            return pauseTime % 60;
        }    
        //allow start the function on click
        Q_INVOKABLE void focus();
        void pause(); 

        
    signals:
        void timeChanged();
    
    private:
        int focusTime = 10;
        int pauseTime = 3;

        QTimer *timer = nullptr;
        bool isFocus = true;
};