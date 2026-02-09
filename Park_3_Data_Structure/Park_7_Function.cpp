#include<iostream>
#include<string>
using namespace std;

string check_nilai(vector<int> data,int value_check){
    for(int i= 0 ; i < data.size(); i++){
        if(data[i] == value_check){
            return "Data di temukan";
        }
    }
    return "Data tidak di temukan";
}

void cetak_data(vector<int> data,string pesan){
    cout << pesan << data.size() << " total"  << endl;
    cout << "Isi Data : ";
    for(int i= 0 ; i < data.size(); i++){
        cout << data[i] << ",";
    }
    cout << endl;
}

int main(){
    vector<int> array_dinamis;
    string status;
    array_dinamis.push_back(100);
    array_dinamis.push_back(300);
    array_dinamis.push_back(200);
    array_dinamis.push_back(400);
    // Fungsi / function
    // non-void
    // function yang dibuat untuk melakuakn kalkulasi dan mengelurkan tipe data yang harus sesuai 
    status = check_nilai(array_dinamis,100);
    cout << status << endl;
    // void
    // function yang di buat dengan tujuan untuk membungkus satu kegiatan dan tidak mengeluarkan hasil kalkulasi
    cetak_data(array_dinamis,"Data yang baru saja saya input : ");
    array_dinamis.push_back(500);
    cetak_data(array_dinamis,"Data setelah di input : ");
    // Read
    return 0;
}