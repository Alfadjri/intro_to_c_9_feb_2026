#include<iostream>
using namespace std;

int main(){
    bool a = true,b=false,hasil;
    // logika and (&&)
    // ketika kedua sisi benar 
    hasil = (a && b);
    cout << "Jika kondisi " << boolalpha << a << " and (&&) " << b << " adalah " << hasil << endl;
    // logika or (||)
    // ketiak salah satu kondisi benar
    hasil = (a || b);
    cout << "Jika kondisi " << boolalpha << a << " or (||) " << b << " adalah " << hasil << endl;
    // logika not (!)
    // kamu mau membalikan nilai
    hasil = (!a);
    cout << "Jika kondisi " << boolalpha << a << " not (!) dari " << a << " adalah " << hasil << endl;

    int c = 10 , d = 10 ;

    // besar dari 
    hasil = (c > d);
    cout << "Apakah nilai dari " << c << " besar (>) dari " << d << " adalah " << boolalpha << hasil << endl;
    // keci dari 
    hasil = (c < d);
    cout << "Apakah nilai dari " << c << " kecil (<) dari " << d << " adalah " << boolalpha << hasil << endl;
    // sama dengan (==)
    hasil = (c == d);
    cout << "Apakah nilai dari " << c << " sama dengan (==) dari " << d << " adalah " << boolalpha << hasil << endl;
    // besar sama dengan 
    hasil = (c >= d);
    cout << "Apakah nilai dari " << c << " besar sama dengan (>=) dari " << d << " adalah " << boolalpha << hasil << endl;
    // kecil sama dengan
    hasil = (c <= d);
    cout << "Apakah nilai dari " << c << " kecli sama dengan (<=) dari " << d << " adalah " << boolalpha << hasil << endl;
    return 0;
}