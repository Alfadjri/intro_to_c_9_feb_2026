QT += core gui widgets

TARGET = Blind

DESTDIR = $$PWD/build
OBJECTS_DIR = $$PWD/build/.obj
MOC_DIR = $$PWD/build/.moc
UI_DIR = $$PWD/build/.ui
APP_EXT = .app

INCLUDEPATH += ./include
HEADERS += \
        include/Windows.h \
        include/Hoverlabel.h
SOURCES += \
        src/main.cpp \
        src/Windows.cpp \
        src/Hoverlabel.cpp

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
