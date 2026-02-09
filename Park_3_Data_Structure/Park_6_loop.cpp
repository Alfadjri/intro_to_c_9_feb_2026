#include<iostream>
using namespace std;

int main(){
    // While
    // kondisi di mana putaran akan terjadi tetapi di check terlebih dahulu
    cout << "======while=====" << endl;
    int nomer_urut = 11;
    while(nomer_urut <= 10){
        cout << "Index of " << nomer_urut << endl;
        nomer_urut++;
    }
    // do while
    // kondisi di mana putaran di jalankan dulu baru di check 
    cout << "======do while=====" << endl;
    do{
        cout << "Index of " << nomer_urut << endl;
        nomer_urut++;
    }while(nomer_urut <= 10);

    cout << "======for=====" << endl;

    // for
    // saat kamu tau segalanya , syaratnya tau , jumlahnya tu , jalanya tau 
    for(int i = 1; i <= 5; i++){
        cout << "Index of " << i << endl;
    }
    // foreach
    // kita tidak perlu tau jumlah data tapi harus tau tipe data yang di gunakan
    cout << "======foreach=====" << endl;
    string buah[] = {"semangka","melon","nanas"};
    for(string value : buah){
        cout << "Value of : " << value << ", ";
    }
    cout << endl;
    cout << "=====break and continue========" <<endl;
    // break and continue
    // break di gunakan untuk memaksa berhenti
    // continue di gunakan untuk melewati 1 putaran atau 1 prosess
    for(int i = 1 ; i <= 100 ; i++){
        if (i % 2 == 0){
             continue;
        }   
        if (i >= 10){
            break; // memberhentikan looping secara paksa
        }
        cout << "Index of " << i << endl;
    }

    return 0;
}