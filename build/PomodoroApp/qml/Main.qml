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
        id: focusTimer
    }

    Text{
        text: {
            let m =  focusTimer.minutes < 10 ? "0" + focusTimer.minutes : focusTimer.minutes;
            let s = focusTimer.seconds < 10 ? "0" + focusTimer.seconds : focusTimer.seconds; 
            return m + ":" + s;
        }
        font.pixelSize: 60
        color: "#D50048"
        anchors.centerIn: parent
    }
    Button {
        text: "Iniciar Foco"
        onClicked: focusTimer.focus()
        anchors.horizontalCenter: parent.horizontalCenter
        y: 450
    }
}