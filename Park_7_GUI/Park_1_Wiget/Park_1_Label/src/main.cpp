#include <QApplication>
#include "Windows.h" 

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Windows jendela;
    jendela.show();
    return app.exec();
}
