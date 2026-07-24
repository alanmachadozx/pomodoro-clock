#include "../include/main.hpp"
#include <QCoreApplication>
#include <QDebug>
#include <QTime>
#include <chrono>
#include <clocale>
#include <iostream>
#include <qdatetime.h>
#include <qobject.h>
#include <QTimer>
#include <QDebug>
#include <string>
#include <thread>

using namespace std;
int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    focus();
    rest();
}

void focus() {
    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, [](){});
    int time = 1500;
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
