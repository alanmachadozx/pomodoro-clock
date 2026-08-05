import QtQuick
import QtQuick.Controls
import PomodoroApp

ApplicationWindow {
    width: 900
    height: 800
    visible: true
    title: "Pomodoro Clock"
    color: "#000000"
    
    TimerInterface{
        id: timer
    }

    Text{
        text: {
            let m =  timer.focusMinutes < 10 ? "0" + timer.focusMinutes : timer.focusMinutes;
            let s = timer.focusSeconds < 10 ? "0" + timer.focusSeconds : timer.focusSeconds; 
            return m + ":" + s;
        }
        font.pixelSize: 60
        color: "#D50048"
        anchors.centerIn: parent
    }
    Button {
        text: "Iniciar Foco"
        onClicked: timer.focus()
        anchors.horizontalCenter: parent.horizontalCenter
        y: 450
    }
}