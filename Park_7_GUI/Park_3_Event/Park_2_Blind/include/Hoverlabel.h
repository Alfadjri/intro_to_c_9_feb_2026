#ifndef HOVERLABEL_H
#define HOVERLABEL_H

#include <QLabel> 

class HoverLabel : public QLabel {
    Q_OBJECT

public:
    explicit HoverLabel(const QString &text, QWidget *parent = nullptr);

protected:
    void enterEvent(QEvent *event) override;
};

#endif 
