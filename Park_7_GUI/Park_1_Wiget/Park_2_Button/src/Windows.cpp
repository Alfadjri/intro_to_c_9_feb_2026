#include "Windows.h" // Meng-include header yang sudah diubah namanya
#include <QPushButton>
#include <QVBoxLayout>
#include <QDebug>


Windows::Windows(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Contoh Button (C++)");
    resize(350, 100);

    tombolAksi = new QPushButton("Klik Saya!");

    layoutUtama = new QVBoxLayout(this);
    layoutUtama->addWidget(tombolAksi);
    layoutUtama->setContentsMargins(20, 20, 20, 20);


    connect(tombolAksi, &QPushButton::clicked, this, &Windows::onTombolAksiClicked);
}
void Windows::onTombolAksiClicked() {
    qInfo() << "Tombol berhasil di-klik! Sebuah aksi sedang berjalan .....";
}
