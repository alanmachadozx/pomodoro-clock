import QtQuick
import QtQuick.Controls
import PomodoroApp

ApplicationWindow {
    width: 900
    height: 800
    visible: true
    title: "Pomodoro Clock"
    color: "purple"
    
    TimerInterface{
        id: focusTimer
    }

    Text{
        text: focusTimer.minutes + ":" + (focusTimer.seconds < 10 ? "0" : "") + focusTimer.seconds
        font.pixelSize: 60
    }
}