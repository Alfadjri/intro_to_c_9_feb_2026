#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>


class QLabel;
class QLineEdit;
class QPushButton;
class QGridLayout;

class Windows : public QWidget {
    Q_OBJECT

public:

    Windows(QWidget *parent = nullptr);

private slots:
    void onBagiButtonClicked();

private:
   
    QGridLayout *layoutGrid;
    QLabel *labelInfo1;
    QLineEdit *inputAngka1;

    QLabel *labelInfo2;
    QLineEdit *inputAngka2;

    QPushButton *tombolBagi;
    QLabel *labelHasil; 
};

#endif 
