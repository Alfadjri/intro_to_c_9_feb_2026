#include<iostream>
using namespace std;

int main(){
    // nilai raport
    int siswa = 70 , kkm = 75;
    // if 
    cout << "======if======" << endl;
    // format dasarnya
    // if (kondisi){
    // jika terjadi sesuai dengan kondisi kamu mau melakukan apa ? 
    // }
    if (siswa >= kkm){
        cout << "Selamat kamu lulus ujian hari ini " << endl;
    }
    cout << "=====if-else===" << endl;
    if (siswa >= kkm){
        cout << "Selamat kamu lulus ujian hari ini " << endl;
    }else{
        cout << "Mohon maaf kamu tidak lulus silahkan pulang dan bawa orgtuamu ke sekolah!!!! " << endl;
    }
    cout << "====if- else if -else===" << endl;
    // nilai 
    // nilai 80 ~ 90 = A
    // nilai 70 ~ 80 = B
    // nilai 60 ~ 70 = C
    // nilai 50 ~ 60 = D
    // nilai 50 <= = D
    siswa = 30;
    if (siswa > 80) {
        cout << "Nilai A" << endl;
    }else if (siswa > 70){
        cout << "Nilai B" << endl;
    }else if (siswa > 60){
        cout << "Nilai C" << endl;
    }else {
        cout << "Nilai D" << endl;
    }
    char select;
    cout << "===Switch Case===" << endl;
    cout << "===Menu===" <<endl;
    cout << "1. Start" << endl;
    cout << "q. Quit" << endl;
    select = cin.get();
    switch (select){
        case '1':
            cout << "Start" << endl;
        break;
        case 'q':
            cout << "Quit" << endl;
        break;
        default:
            cout << "Input in valid" << endl;
    }

    return 0;
}