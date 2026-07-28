#include "../include/widget.hpp"
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include <qquickwidget.h>
#include <qwidget.h>
#include <QQuickWidget>
#include <QUrl>

void interface(){
    
    static QWidget *window = nullptr;
    window = new QWidget;
    
    QVBoxLayout *layout = new QVBoxLayout(window);
    QQuickWidget *view = new QQuickWidget;
    
    window ->show();
}