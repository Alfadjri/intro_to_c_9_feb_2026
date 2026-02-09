#include "../../include/view/kalkulator_view.h"
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>

KalkulatorView::KalkulatorView(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Kalkulator MVC (Format Dasar)");

    mainLayout = new QGridLayout(this);

    inputSatu = new QLineEdit();
    inputSatu->setPlaceholderText("Angka Pertama");

    inputDua = new QLineEdit();
    inputDua->setPlaceholderText("Angka Kedua");

    displayHasil = new QLineEdit();
    displayHasil->setReadOnly(true);
    displayHasil->setText("Hasil");

    tombolTambah = new QPushButton("+");
    tombolKurang = new QPushButton("-");
    tombolKali = new QPushButton("*");
    tombolBagi = new QPushButton("/");

    mainLayout->addWidget(new QLabel("Angka 1:"), 0, 0);
    mainLayout->addWidget(inputSatu, 0, 1);
    mainLayout->addWidget(new QLabel("Angka 2:"), 1, 0);
    mainLayout->addWidget(inputDua, 1, 1);
    mainLayout->addWidget(new QLabel("Hasil:"), 3, 0);
    mainLayout->addWidget(displayHasil, 3, 1);
    mainLayout->addWidget(tombolTambah, 2, 0);
    mainLayout->addWidget(tombolKurang, 2, 1);
    mainLayout->addWidget(tombolKali, 2, 2);
    mainLayout->addWidget(tombolBagi, 2, 3);
}

// Implementasi getter dan setter
QString KalkulatorView::getInputSatu() const { return inputSatu->text(); }
QString KalkulatorView::getInputDua() const { return inputDua->text(); }
void KalkulatorView::setHasil(const QString& hasil) { displayHasil->setText(hasil); }

QPushButton* KalkulatorView::getTombolTambah() const { return tombolTambah; }
QPushButton* KalkulatorView::getTombolKurang() const { return tombolKurang; }
QPushButton* KalkulatorView::getTombolKali() const { return tombolKali; }
QPushButton* KalkulatorView::getTombolBagi() const { return tombolBagi; }
