#include "Windows.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QDebug>

Windows::Windows(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Command vs Bind (C++)");
    resize(300, 100);

    // UI
    tombolSapa = new QPushButton("Sapa !");
    layoutUtama = new QVBoxLayout(this);
    layoutUtama->addWidget(tombolSapa);
    layoutUtama->setContentsMargins(10, 10, 10, 10);

    // BIND
    bindEvents();
}

// =====================
// BINDING (KABEL)
// =====================
void Windows::bindEvents() {
    connect(
        tombolSapa,
        &QPushButton::clicked,
        this,
        &Windows::onSapaButtonClicked
    );
}

// =====================
// SLOT → COMMAND
// =====================
void Windows::onSapaButtonClicked() {
    commandSapa();
}

// =====================
// COMMAND (LOGIKA)
// =====================
void Windows::commandSapa() {
    qInfo() << "Hello world!!!";
}
