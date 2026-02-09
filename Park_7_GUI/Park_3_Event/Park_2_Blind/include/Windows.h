#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>
#include "Hoverlabel.h" 

class QVBoxLayout;

class Windows : public QWidget {
    Q_OBJECT

public:
    Windows(QWidget *parent = nullptr);

private:
    
    HoverLabel *labelHover;
    QVBoxLayout *layoutUtama;
};

#endif 
