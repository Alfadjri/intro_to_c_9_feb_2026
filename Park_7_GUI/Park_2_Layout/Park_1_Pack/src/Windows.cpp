#include "Windows.h"
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>

Windows::Windows(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Contoh PACK Layout (C++)");

    // PACK UTAMA
    layoutUtama = new QVBoxLayout(this);

    // BARIS NAMA
    barisNama = new QHBoxLayout();
    labelNama = new QLabel("Nama :");
    inputNama = new QLineEdit();
    barisNama->addWidget(labelNama);
    barisNama->addWidget(inputNama);

    // BARIS EMAIL
    barisEmail = new QHBoxLayout();
    labelEmail = new QLabel("Email :");
    inputEmail = new QLineEdit();
    barisEmail->addWidget(labelEmail);
    barisEmail->addWidget(inputEmail);

    // PACK KE LAYOUT UTAMA
    layoutUtama->addLayout(barisNama);
    layoutUtama->addLayout(barisEmail);

    layoutUtama->setSpacing(5);
}
