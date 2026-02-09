#include<iostream>
using namespace std;

int main(){
    // tipe data primitif
    // tipe data bilangan bulat
    short shortNumber = 9999;
    int integerNumber = 32768;
    long longNumber = 123456789;
    long long verylongNumber = 9876543210;

    cout << "Tipe data Short : " << shortNumber << " (max 4 digit)" << endl;
    cout << "Tipe data Integer (int) : " << integerNumber  << endl;
    cout << "Tipe data long : " << longNumber  << endl;
    cout << "Tipe data long long : " << verylongNumber  << endl;

    // Desimal
    float floatNumber = 3.14f;
    double doubleNumber = 2.718828;
    long double longDoubleNumber = 1.6180339887;

    cout << "Tipe data float : " << floatNumber  << endl;
    cout << "Tipe data double : " << doubleNumber  << endl;
    cout << "Tipe data long double : " << longDoubleNumber  << endl;

    // Karakter
    char karakter = 'A';
    karakter = 'B';
    cout << "Tipe data char : " << karakter  << endl;

    // Kondisi
    // true (1) or false (0)
    bool booleanNumber = 1;
    cout << "Tipe data boolean tampa boolalpha : " << booleanNumber << endl;
    cout << "Tipe data boolean : " << boolalpha << booleanNumber << endl;

    
    // non primitif
    char nama_lengkap[30] = "Alfadjri Dwi Fadhilah";
    cout << "Tipe data non primitif : " << nama_lengkap << endl;
    string nama_string = "Alfadjri Dwi Fadhilah";
    cout << "Tipe data string : " << nama_string << endl;

    return 0;
}