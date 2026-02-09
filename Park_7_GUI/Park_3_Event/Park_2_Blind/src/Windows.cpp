#include "Windows.h"
#include "Hoverlabel.h" 
#include <QVBoxLayout>
#include <QFont>

Windows::Windows(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Using Bind (C++)");
    labelHover = new HoverLabel("Arahkan mouse ke sini !");
    labelHover->setFont(QFont("Arial", 14));
    labelHover->setAlignment(Qt::AlignCenter);

    layoutUtama = new QVBoxLayout(this);
    layoutUtama->addWidget(labelHover);
    layoutUtama->setContentsMargins(10, 10, 10, 10);
}
