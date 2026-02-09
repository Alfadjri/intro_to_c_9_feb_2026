#include "Windows.h"
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout> 


Windows::Windows(QWidget *parent) : QWidget(parent) {
    
    setWindowTitle("Contoh grid() (C++)");
    layoutGrid = new QGridLayout(this);
    labelNama = new QLabel("Nama :");
    inputNama = new QLineEdit();
    labelEmail = new QLabel("Email :");
    inputEmail = new QLineEdit();
    layoutGrid->addWidget(labelNama, 0, 0, Qt::AlignLeft);
    layoutGrid->addWidget(inputNama, 0, 1);
    layoutGrid->addWidget(labelEmail, 1, 0, Qt::AlignLeft);
    layoutGrid->addWidget(inputEmail, 1, 1);

    layoutGrid->setHorizontalSpacing(5);
    layoutGrid->setVerticalSpacing(5);
}
