#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>

// forward declaration (hemat include)
class QVBoxLayout;
class QHBoxLayout;
class QLabel;
class QLineEdit;

class Windows : public QWidget {
    Q_OBJECT

public:
    explicit Windows(QWidget *parent = nullptr);

private:
    QVBoxLayout *layoutUtama;

    QHBoxLayout *barisNama;
    QHBoxLayout *barisEmail;

    QLabel *labelNama;
    QLabel *labelEmail;

    QLineEdit *inputNama;
    QLineEdit *inputEmail;
};

#endif
