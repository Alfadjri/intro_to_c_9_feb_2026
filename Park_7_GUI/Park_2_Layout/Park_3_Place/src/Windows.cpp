#include "Windows.h"
#include <QPushButton>

Windows::Windows(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Contoh PLACE Layout (C++)");

    // Wajib: ukuran tetap (karena tidak ada layout)
    setFixedSize(400, 500);

    tombolSatu = new QPushButton("Tombol di posisi (x=30, y=50)", this);
    tombolSatu->move(30, 50);

    tombolDua = new QPushButton("Tombol di posisi (x=150, y=120)", this);
    tombolDua->move(150, 120);
}
