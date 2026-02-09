#include "Windows.h" // Meng-include header yang sudah diubah namanya
#include <QPushButton>
#include <QVBoxLayout>
#include <QRadioButton> 
#include <QButtonGroup>
#include <QLabel>
#include <QDebug>


Windows::Windows(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Contoh Button (C++)");
    resize(350, 100);

    tombolAksi = new QPushButton("Klik Saya!");
    lebelGender = new QLabel("Select Gender");
    groupGender = new QButtonGroup(this);
    radioLaki = new QRadioButton("Laki-laki", this);
    radioPerempuan = new QRadioButton("Perempuan", this);
    radioBinary = new QRadioButton("Non Binary",this);
    labelUsia = new QLabel("Select Usia");
    groupUsia = new QButtonGroup(this);
    radio1 = new QRadioButton("1",this);
    radio2 = new QRadioButton("2",this);


    groupGender->addButton(radioLaki, 1);
    groupGender->addButton(radioPerempuan, 2);
    groupGender->addButton(radioBinary,3);
    radioLaki->setChecked(true);

    groupUsia->addButton(radio1,1);
    groupUsia->addButton(radio2,2);
    radio1->setChecked(true);


    layoutUtama = new QVBoxLayout(this);
    layoutUtama->addWidget(lebelGender);
    layoutUtama->addWidget(radioLaki);
    layoutUtama->addWidget(radioPerempuan);
    layoutUtama->addWidget(radioBinary);
    layoutUtama->addWidget(labelUsia);
    layoutUtama->addWidget(radio1);
    layoutUtama->addWidget(radio2);
    layoutUtama->addWidget(tombolAksi);
    layoutUtama->setContentsMargins(20, 20, 20, 20);


    connect(tombolAksi, &QPushButton::clicked, this, &Windows::onTombolAksiClicked);
}


void Windows::onTombolAksiClicked() {
    qInfo() << "Tombol berhasil di-klik! Sebuah aksi sedang berjalan .....";
    if (radioLaki->isChecked()) {
        qInfo() << "Gender dipilih: Laki-laki";
    } else if (radioPerempuan->isChecked()) {
        qInfo() << "Gender dipilih: Perempuan";
    }
    if(radio1->isChecked()){
        qInfo() << "Usia : 1 tahun";
    }else if (radio2 -> isChecked()){
        qInfo() << "Usia : 2 tahun";
    }
}