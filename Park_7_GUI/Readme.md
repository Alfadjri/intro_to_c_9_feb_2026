# Qt GUI C++ Project - Label App

Proyek ini adalah contoh aplikasi GUI menggunakan **Qt C++**. Aplikasi ini menggunakan `.pro` file untuk konfigurasi build dan manajemen dependensi.

## 📦 Dependensi

- Qt (minimal Qt5)
- Compiler C++ (misalnya `g++` atau `clang++`)
- qmake (termasuk dalam Qt)

## 📁 Struktur Direktori

```
.
├── include/
│   └── Windows.h
├── src/
│   ├── main.cpp
│   └── Windows.cpp
├── build/                ← Folder hasil build (.app, .obj, .moc)
├── label.pro             ← File konfigurasi qmake (.pro)
```

## ⚙️ Penjelasan `label.pro`

```qmake
QT += core gui widgets
```
Menambahkan modul Qt:
- `core`: fitur dasar C++
- `gui`: sistem GUI Qt
- `widgets`: komponen antarmuka pengguna seperti tombol, label, dll.

```qmake
TARGET = label
```
Menentukan nama target aplikasi (`label.app` di macOS atau `label.exe` di Windows).

```qmake
DESTDIR = $$PWD/build
OBJECTS_DIR = $$PWD/build/.obj
MOC_DIR = $$PWD/build/.moc
UI_DIR = $$PWD/build/.ui
APP_EXT = .app
```
Pengaturan folder hasil build:
- `DESTDIR`: direktori output
- `OBJECTS_DIR`: folder objek `.o`
- `MOC_DIR`: hasil Meta-Object Compiler (Qt internal)
- `UI_DIR`: hasil konversi dari file desain `.ui`
- `APP_EXT`: ekstensi file untuk bundle macOS

```qmake
INCLUDEPATH += ./include
HEADERS += include/Windows.h
SOURCES += src/main.cpp src/Windows.cpp
```
- `INCLUDEPATH`: lokasi header tambahan
- `HEADERS`: file header yang digunakan
- `SOURCES`: file kode sumber utama proyek

### 🖥️ Perintah Jalankan Otomatis

```qmake
unix {
    macx|darwin {
        RUN_COMMAND = $$DESTDIR/$$TARGET$$APP_EXT/Contents/MacOS/$$TARGET
    }
}
win32:!macx {
    RUN_COMMAND = $${DESTDIR}/$${TARGET}.exe
}
```

- Pada macOS, aplikasi akan dijalankan dari `.app/Contents/MacOS/label`
- Pada Windows, dari `.exe`

```qmake
run.target = run
run.commands = $$RUN_COMMAND
QMAKE_EXTRA_TARGETS += run
```
Menambahkan perintah khusus `make run` untuk menjalankan aplikasi.

## 🚀 Cara Build dan Jalankan

1. **Jalankan `qmake`** untuk menghasilkan Makefile:
   ```bash
   qmake label.pro
   ```

2. **Build project:**
   ```bash
   make
   ```

3. **Jalankan aplikasi:**
   - **macOS:**
     ```bash
     ./build/label.app/Contents/MacOS/label
     ```

   - **atau gunakan shortcut:**
     ```bash
     make run
     ```

4. **Membersihkan build:**
   ```bash
   make clean
   ```

## ❗ Troubleshooting

Jika muncul error seperti:
```
build//Contents/MacOS/label: No such file or directory
```
Pastikan:
- Folder `.app` memang ada setelah `make`
- Jalur ke `.app` sudah tepat: `build/label.app/Contents/MacOS/label`
- Gunakan kembali `qmake` setelah mengedit `.pro`

---

## 📚 Referensi

- [Dokumentasi Qt (qt.io)](https://doc.qt.io/)
- [qmake Manual](https://doc.qt.io/qt-5/qmake-manual.html)
