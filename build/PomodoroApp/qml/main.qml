import QtQuick
import QtQuick.Controls

ApplicationWindow {
    width: 400
    height: 400
    visible: true
    title: "Pomodoro Clock"

    Text {
        anchors.centerIn: parent
        text: "25:00"
        font.pixelSize: 40
    }
}