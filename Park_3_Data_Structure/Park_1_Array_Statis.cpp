#include<iostream>
using namespace std;
int main(){
    // create
    const int size = 5;
    int number[size] = {1,2,3,4,5};
    cout << "valude baru dari inisialasisi" << endl;
    // Membaca datanya (Read)
    cout << number[0] << ",";
    cout << number[1] << ",";
    cout << number[2] << ",";
    cout << number[3] << ",";
    cout << number[4];
    cout << endl;
    //  update
    number[2] = 6;
    cout << "valude setelah di update" << endl;
    cout << number[0] << ",";
    cout << number[1] << ",";
    cout << number[2] << ",";
    cout << number[3] << ",";
    cout << number[4];
    cout << endl;
    // delete
    // buat aja nilainya 0 (null) (nullptr)
    number[2] = 0;
    cout << "valude setelah di delete" << endl;
    cout << number[0] << ",";
    cout << number[1] << ",";
    cout << number[2] << ",";
    cout << number[3] << ",";
    cout << number[4];
    cout << endl;

    return 0;
}