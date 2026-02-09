#include "Windows.h"
#include <QLineEdit>     
#include <QPushButton>   
#include <QVBoxLayout>
#include <QDebug>        

// Implementasi constructor
Windows::Windows(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Contoh Button (C++)");
    resize(400, 150);
    inputNama = new QLineEdit();
    inputNama->setPlaceholderText("Masukkan nama Anda di sini..."); 
    tombolCetak = new QPushButton("Cetak Input");
    layoutUtama = new QVBoxLayout(this);
    layoutUtama->addWidget(inputNama);
    layoutUtama->addWidget(tombolCetak);
    connect(tombolCetak, &QPushButton::clicked, this, &Windows::onTombolCetakClicked);
}


void Windows::onTombolCetakClicked() {
    QString dataPengguna = inputNama->text();
    qInfo() << "Teks yang diinput:" << dataPengguna;
}
