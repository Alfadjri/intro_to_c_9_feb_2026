QT += core gui widgets

TARGET = Entity

DESTDIR = $$PWD/build
OBJECTS_DIR = $$PWD/build/.obj
MOC_DIR = $$PWD/build/.moc
UI_DIR = $$PWD/build/.ui
APP_EXT = .app

INCLUDEPATH += ./include
HEADERS += include/Windows.h
SOURCES += src/main.cpp src/Windows.cpp

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
