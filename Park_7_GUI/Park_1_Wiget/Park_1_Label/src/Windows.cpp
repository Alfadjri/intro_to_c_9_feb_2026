#include "Windows.h" 
#include <QLabel>         
#include <QVBoxLayout>   
#include <QFont>         


Windows::Windows(QWidget *parent) : QWidget(parent) {

    setWindowTitle("Contoh Label (C++)");
    resize(450, 150); 
    
    label = new QLabel("Selamat datang di gui baru");
    label->setFont(QFont("Helvetica", 18));

    layout = new QVBoxLayout(this); 
    layout->addWidget(label);  
    layout->setContentsMargins(20, 20, 20, 20);
}