cmake_minimum_required(VERSION 3.16)
project(pomodoro_clock)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets) 

add_executable(program src/main.cpp src/widget.cpp)

target_link_libraries(program PRIVATE Qt6::Core Qt6::Gui
Qt6::Widgets Qt6::QuickWidgets)