#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>

class QPushButton;

class Windows : public QWidget {
    Q_OBJECT

public:
    explicit Windows(QWidget *parent = nullptr);

private:
    QPushButton *tombolSatu;
    QPushButton *tombolDua;
};

#endif
