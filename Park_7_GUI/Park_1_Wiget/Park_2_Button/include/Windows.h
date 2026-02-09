#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>


class QPushButton;
class QRadioButton;
class QVBoxLayout; // layout
class QButtonGroup;
class QLabel;



class Windows : public QWidget {
    Q_OBJECT

public:
   
    Windows(QWidget *parent = nullptr);

private slots:
    void onTombolAksiClicked();

private:
    QPushButton *tombolAksi;
    QVBoxLayout *layoutUtama;

    // Radio button
    QLabel *lebelGender;
    QRadioButton *radioLaki;
    QRadioButton *radioPerempuan;
    QRadioButton *radioBinary;
    QButtonGroup *groupGender;

    // Radio Button Usia
    QLabel *labelUsia;
    QButtonGroup *groupUsia;
    QRadioButton *radio1;
    QRadioButton *radio2;


};

#endif // WINDOWS_H
