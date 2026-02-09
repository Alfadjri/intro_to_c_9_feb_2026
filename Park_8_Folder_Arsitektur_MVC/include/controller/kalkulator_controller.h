#ifndef KALKULATOR_CONTROLLER_H
#define KALKULATOR_CONTROLLER_H

#include <QObject>

// Forward declaration
class KalkulatorModel;
class KalkulatorView;

class KalkulatorController : public QObject {
    Q_OBJECT

public:
    KalkulatorController(KalkulatorModel* model, KalkulatorView* view);

private slots:
    // Slot untuk menangani setiap aksi tombol
    void onTambah();
    void onKurang();
    void onKali();
    void onBagi();

private:
    KalkulatorModel* model;
    KalkulatorView* view;
};

#endif // KALKULATOR_CONTROLLER_H
