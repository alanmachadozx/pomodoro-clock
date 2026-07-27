#include "../include/widget.hpp"
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include <qwidget.h>

void interface(){
    
    static QWidget *window = nullptr;
    window = new QWidget;
    
    QVBoxLayout *layout = new QVBoxLayout(window);

    window ->show();
}