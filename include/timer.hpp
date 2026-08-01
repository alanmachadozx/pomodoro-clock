#include <qobject.h>
#include <qqmlintegration.h>
#include <qtmetamacros.h>
void focus();

class timerInterface : public QObject{
    Q_OBJECT
    QML_ELEMENT
    QML_NAMED_ELEMENT(TimerInterface)

    Q_PROPERTY(int minutes READ getminutes NOTIFY timeChanged)
    Q_PROPERTY(int seconds READ getseconds NOTIFY timeChanged)
    public:
        
    int getminutes() const{
        return focusTime/60;
    }
    int getseconds() const{
        return focusTime % 60;   
    }

    //allow start the function on click
    Q_INVOKABLE void focus();
    
    signals:
    void timeChanged();
    
    private:
    int focusTime = 1500;
};