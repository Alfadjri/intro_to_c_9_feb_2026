#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>


class QPushButton;
class QVBoxLayout;


class Windows : public QWidget {
    Q_OBJECT

public:
   
    Windows(QWidget *parent = nullptr);

private slots:
    void onTombolAksiClicked();

private:
    QPushButton *tombolAksi;
    QVBoxLayout *layoutUtama;
};

#endif // WINDOWS_H
