#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>


class QLabel;
class QLineEdit;
class QGridLayout;

class Windows : public QWidget {
    Q_OBJECT

public:
    Windows(QWidget *parent = nullptr);

private:
    QGridLayout *layoutGrid;
    QLabel *labelNama;
    QLineEdit *inputNama;

    
    QLabel *labelEmail;
    QLineEdit *inputEmail;
};

#endif
