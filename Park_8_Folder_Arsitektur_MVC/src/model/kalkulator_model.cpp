#include "../../include/model/kalkulator_model.h"

KalkulatorModel::KalkulatorModel() : hasil(0.0) {}

void KalkulatorModel::tambah(double a, double b) {
    hasil = a + b;
}

void KalkulatorModel::kurang(double a, double b) {
    hasil = a - b;
}

void KalkulatorModel::kali(double a, double b) {
    hasil = a * b;
}

void KalkulatorModel::bagi(double a, double b) {
    if (b != 0) {
        hasil = a / b;
    } else {
        // Penanganan error sederhana
        hasil = 0; // Seharusnya menampilkan error di View
    }
}

double KalkulatorModel::getHasil() const {
    return hasil;
}
