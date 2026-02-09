QT += core gui widgets


TARGET = ProyekKalkulator


DESTDIR     = $$PWD/build
OBJECTS_DIR = $$PWD/build/.obj
MOC_DIR     = $$PWD/build/.moc
UI_DIR      = $$PWD/build/.ui
APP_EXT = .app

unix {
    macx|darwin {
        RUN_COMMAND =$$DESTDIR/$$TARGET$$APP_EXT/Contents/MacOS/$$TARGET
    }
}

win32:!macx {
    RUN_COMMAND = $${DESTDIR}/$${TARGET}.exe
}
run.target = run
run.commands = $$RUN_COMMAND
QMAKE_EXTRA_TARGETS += run


INCLUDEPATH += ./include


HEADERS += \
    include/model/kalkulator_model.h \
    include/view/kalkulator_view.h \
    include/controller/kalkulator_controller.h


SOURCES += \
    src/main.cpp \
    src/model/kalkulator_model.cpp \
    src/view/kalkulator_view.cpp \
    src/controller/kalkulator_controller.cpp
