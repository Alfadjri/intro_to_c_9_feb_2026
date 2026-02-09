#ifndef WINDOWS_H
#define WINDOWS_H

#include <QWidget>

class QPushButton;
class QVBoxLayout;

class Windows : public QWidget {
    Q_OBJECT

public:
    explicit Windows(QWidget *parent = nullptr);

private:
    // BINDING
    void bindEvents();

    // COMMAND
    void commandSapa();

private slots:
    // SLOT hanya penerus event
    void onSapaButtonClicked();

private:
    QPushButton *tombolSapa;
    QVBoxLayout *layoutUtama;
};

#endif