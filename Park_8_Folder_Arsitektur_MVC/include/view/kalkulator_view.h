#ifndef KALKULATOR_VIEW_H
#define KALKULATOR_VIEW_H

#include <QWidget>

// Forward declaration untuk mempercepat kompilasi
class QLineEdit;
class QPushButton;
class QGridLayout;

class KalkulatorView : public QWidget {
    Q_OBJECT

public:
    KalkulatorView(QWidget *parent = nullptr);

    // Fungsi yang bisa dipanggil oleh Controller
    QString getInputSatu() const;
    QString getInputDua() const;
    void setHasil(const QString& hasil);

    // Getter untuk memberikan akses ke tombol kepada Controller
    QPushButton* getTombolTambah() const;
    QPushButton* getTombolKurang() const;
    QPushButton* getTombolKali() const;
    QPushButton* getTombolBagi() const;

private:
    QLineEdit *inputSatu;
    QLineEdit *inputDua;
    QLineEdit *displayHasil;
    QPushButton *tombolTambah;
    QPushButton *tombolKurang;
    QPushButton *tombolKali;
    QPushButton *tombolBagi;
    QGridLayout *mainLayout;
};

#endif // KALKULATOR_VIEW_H
