#include "../include/main.hpp"
#include <QApplication>
#include <QDebug>
#include <QTime>
#include <QWidget>
#include <qdatetime.h>
#include <qlogging.h>
#include <qobject.h>
#include <QTimer>
#include <QDebug>
#include <qwidget.h>
#include "../include/widget.hpp"


using namespace std;
int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    focus();
    interface();
    return app.exec();
}

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
    
    /* int time = 1500;
    while (time > 0) {

    int minutes = time / 60;
    int seconds = time % 60;
    int elapsed_time = 1500 - time;
    int progress = elapsed_time * 100 / 1500;

    cout << minutes << ":";

    if (seconds < 10) {
      cout << "0";
    }

    cout << seconds << "\n";

    std::string progress_bar = "";
    for (int i = 0; i <= progress; i++) {
      progress_bar += "█";
    }

    std::string empty_bar = "";
    for (int i = 0; i <= 100; i++) {
      empty_bar += "░";
    }
    cout << progress_bar << empty_bar << " " << progress << "%" << "\033[K"
         << "\n";
    cout << "\033[2A" << flush;
    this_thread::sleep_for(chrono::seconds(1));
    time = time - 1;
  }
}

void rest() {
  int time = 300;

  while (time > 0) {
    int minutes = time / 60;
    int seconds = time % 60;
    int elapsed_time = 300 - time;
    int progress = elapsed_time * 100 / 300;

    cout << minutes << ":";

    if (seconds < 10) {
      cout << "0";
    }

    cout << seconds << "\n";

    std::string progress_bar = "";
    for (int i = 0; i <= progress; i++) {
      progress_bar += "█";
    }

    std::string empty_bar = "";
    for (int i = 0; i <= 100; i++) {
      empty_bar += "░";
    }
    cout << progress_bar << empty_bar << " " << progress << "%" << "\033[K"
         << "\n";
    cout << "\033[2A" << flush;
    this_thread::sleep_for(chrono::seconds(1));
    time = time - 1;
  }
}
*/