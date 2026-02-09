#include "Windows.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QMessageBox> // Header untuk message box
#include <QDebug>

// Implementasi constructor
Windows::Windows(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Contoh Error Handling (C++)");
    layoutGrid = new QGridLayout(this);

    labelInfo1 = new QLabel("Masukkan Angka 1:");
    inputAngka1 = new QLineEdit();
    layoutGrid->addWidget(labelInfo1, 0, 0);
    layoutGrid->addWidget(inputAngka1, 0, 1);
    labelInfo2 = new QLabel("Masukkan Angka 2:");
    inputAngka2 = new QLineEdit();
    layoutGrid->addWidget(labelInfo2, 1, 0);
    layoutGrid->addWidget(inputAngka2, 1, 1);
    tombolBagi = new QPushButton("Bagi");
    layoutGrid->addWidget(tombolBagi, 2, 0, 1, 2); 
    labelHasil = new QLabel("");
    layoutGrid->addWidget(labelHasil, 3, 0, 1, 2);
    labelHasil->hide(); 
    connect(tombolBagi, &QPushButton::clicked, this, &Windows::onBagiButtonClicked);
}

void Windows::onBagiButtonClicked() {
    QString teks1 = inputAngka1->text();
    QString teks2 = inputAngka2->text();

    bool konversiOk1, konversiOk2;
    float x = teks1.toFloat(&konversiOk1);
    float y = teks2.toFloat(&konversiOk2);
    if (!konversiOk1 || !konversiOk2) {
        QMessageBox::critical(this, "Input Salah", "Harap masukkan angka yang valid.");
        return; 
    }
    if (y == 0.0f) {
        QMessageBox::critical(this, "Kesalahan Matematis", "Tidak bisa membagi dengan nol.");
        return; 
    }


    float hasil = x / y;

    labelHasil->setText(QString("Hasil : %1").arg(hasil));
    labelHasil->show();
}
