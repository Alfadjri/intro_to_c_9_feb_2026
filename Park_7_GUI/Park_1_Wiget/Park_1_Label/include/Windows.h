#ifndef WINDOWS_H
#define WINDOWS_H
#include <QWidget> 

class QLabel;
class QVBoxLayout;

class Windows : public QWidget {
    Q_OBJECT 
public:
    Windows(QWidget *parent = nullptr);
private:
    QLabel *label;
    QVBoxLayout *layout;
};
#endif