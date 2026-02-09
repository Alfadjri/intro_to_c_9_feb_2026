// =====================================================================
// Pola Arsitektur: MVC (Model-View-Controller)
// Contoh Kasus: Aplikasi Kalkulator Sederhana
//
// Penjelasan:
// - Model:      Bertanggung jawab untuk logika perhitungan (tambah, kurang, dll).
// - View:       Bertanggung jawab untuk menampilkan UI (tombol, layar).
// - Controller: Menjadi jembatan antara interaksi pengguna di View dan logika di Model.
// =====================================================================
#include <QApplication>
#include "../include/model/kalkulator_model.h"
#include "../include/view/kalkulator_view.h"
#include "../include/controller/kalkulator_controller.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // 1. Buat semua komponen MVC
    KalkulatorModel model;
    KalkulatorView view;
    KalkulatorController controller(&model, &view);

    // 2. Tampilkan View kepada pengguna
    view.show();

    // 3. Jalankan event loop aplikasi
    return app.exec();
}
