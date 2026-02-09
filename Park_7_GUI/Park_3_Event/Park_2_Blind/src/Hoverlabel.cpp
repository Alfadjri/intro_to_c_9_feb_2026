#include "Hoverlabel.h"
#include <QDebug>

HoverLabel::HoverLabel(const QString &text, QWidget *parent)
    : QLabel(text, parent) {
}

void HoverLabel::enterEvent(QEvent *event) {
    qInfo() << "Hello world!!!";
    QLabel::enterEvent(event);
}
