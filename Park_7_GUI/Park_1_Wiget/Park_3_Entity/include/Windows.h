#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>

class QLineEdit;
class QPushButton;
class QVBoxLayout;

class Windows : public QWidget {
    Q_OBJECT

public:
    Windows(QWidget *parent = nullptr);

private slots:
    void onTombolCetakClicked();

private:
    QLineEdit *inputNama;
    QPushButton *tombolCetak;
    QVBoxLayout *layoutUtama;
};

#endif // JENDELAUTAMA_H
