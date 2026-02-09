#include "../../include/controller/kalkulator_controller.h"
#include "../../include/model/kalkulator_model.h"
#include "../../include/view/kalkulator_view.h"
#include <QPushButton> // Diperlukan untuk mengakses sinyal 'clicked'
#include <QString>

KalkulatorController::KalkulatorController(KalkulatorModel* m, KalkulatorView* v)
    : model(m), view(v)
{
    // Menghubungkan sinyal dari widget di View ke slot di Controller ini
    connect(view->getTombolTambah(), &QPushButton::clicked, this, &KalkulatorController::onTambah);
    connect(view->getTombolKurang(), &QPushButton::clicked, this, &KalkulatorController::onKurang);
    connect(view->getTombolKali(), &QPushButton::clicked, this, &KalkulatorController::onKali);
    connect(view->getTombolBagi(), &QPushButton::clicked, this, &KalkulatorController::onBagi);
}

void KalkulatorController::onTambah() {
    bool ok1, ok2;
    double operand1 = view->getInputSatu().toDouble(&ok1);
    double operand2 = view->getInputDua().toDouble(&ok2);
    
    if(ok1 && ok2) {
        model->tambah(operand1, operand2);
        view->setHasil(QString::number(model->getHasil()));
    } else {
        view->setHasil("Input tidak valid");
    }
}

void KalkulatorController::onKurang() {
    bool ok1, ok2;
    double operand1 = view->getInputSatu().toDouble(&ok1);
    double operand2 = view->getInputDua().toDouble(&ok2);

    if(ok1 && ok2) {
        model->kurang(operand1, operand2);
        view->setHasil(QString::number(model->getHasil()));
    } else {
        view->setHasil("Input tidak valid");
    }
}

void KalkulatorController::onKali() {
    bool ok1, ok2;
    double operand1 = view->getInputSatu().toDouble(&ok1);
    double operand2 = view->getInputDua().toDouble(&ok2);

    if(ok1 && ok2) {
        model->kali(operand1, operand2);
        view->setHasil(QString::number(model->getHasil()));
    } else {
        view->setHasil("Input tidak valid");
    }
}

void KalkulatorController::onBagi() {
    bool ok1, ok2;
    double operand1 = view->getInputSatu().toDouble(&ok1);
    double operand2 = view->getInputDua().toDouble(&ok2);

    if(ok1 && ok2) {
        if (operand2 == 0) {
            view->setHasil("Error: Div by zero");
        } else {
            model->bagi(operand1, operand2);
            view->setHasil(QString::number(model->getHasil()));
        }
    } else {
        view->setHasil("Input tidak valid");
    }
}
