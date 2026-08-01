cmake_minimum_required(VERSION 3.16)
project(pomodoro_clock)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Quick Qml QuickControls2) 

qt_add_executable(program 
src/main.cpp 
src/timer.cpp 
include/timer.hpp
)

target_include_directories(program PRIVATE include)

qt_add_qml_module(program
    URI PomodoroApp
    VERSION 1.0
    QML_FILES 
        qml/Main.qml
)

target_link_libraries(program PRIVATE Qt6::Core Qt6::Gui
Qt6::Widgets Qt6::Quick Qt6::Qml Qt6::QuickControls2)