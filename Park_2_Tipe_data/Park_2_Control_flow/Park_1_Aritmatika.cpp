#include<iostream>
using namespace std;

int main(){
    // int x = 3;
    // int y = 2;
    // int hasil;
    // float hasil_float;
    int x = 3 , y = 2 , hasil;
    float hasil_float;

    // penjumlahan
    hasil = x + y;
    cout << "Hasil tambah dari " << x << " + " << y << " = " << hasil << endl;

    // kurang
    hasil = x - y;
    cout << "Hasil kurang dari " << x << " - " << y << " = " << hasil << endl;

    // kali
    hasil = x * y;
    cout << "Hasil kali dari " << x << " * " << y << " = " << hasil << endl;

    // pembagian
    hasil = x / y;
    cout << "Hasil bagi dari " << x << " / " << y << " = " << hasil << endl;
    // conversi
    hasil_float = (float) x  / (float) y;
    cout << "Hasil bagi conversi dari " << (float) x << " / " << (float) y << " = " << hasil_float << endl;

    // sisa pembagian (modulus)
    hasil = x % y;
    cout << "Hasil modulus dari " << x << " % " << y << " = " << hasil << endl;

    // increment
    int min = 100;
    cout << "Nilai Awal dari min : " << min << endl;
    // min = min + 20;
    min++;
    cout << "Niali Setelah di tambah dengan 1 : " << min << endl;
    // decerment
    min--;
    cout << "Nilai setelah di kurang dengan 1 : " << min << endl;
    return 0;
}