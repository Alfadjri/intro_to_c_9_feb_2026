#ifndef KALKULATOR_MODEL_H
#define KALKULATOR_MODEL_H

class KalkulatorModel {
private:
    double hasil;

public:
    KalkulatorModel();

    // Fungsi untuk melakukan operasi matematika
    void tambah(double a, double b);
    void kurang(double a, double b);
    void kali(double a, double b);
    void bagi(double a, double b);

    // Fungsi untuk mendapatkan hasil akhir
    double getHasil() const;
};

#endif // KALKULATOR_MODEL_H
