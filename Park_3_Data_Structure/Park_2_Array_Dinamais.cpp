#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<int> array_dinamis;
    cout << "Ukuran Awal : " << array_dinamis.size()  << endl;
    // Create
    array_dinamis.push_back(100);
    array_dinamis.push_back(300);
    array_dinamis.push_back(200);
    array_dinamis.push_back(400);
    // Read
    cout << "Ukuran setalah di input : " << array_dinamis.size()  << endl;
    cout << "Isi Data : ";
    for(int i= 0 ; i < array_dinamis.size(); i++){
        cout << array_dinamis[i] << ",";
    }
    cout << endl;


    // Delete
    array_dinamis.pop_back();
    cout << "Ukuran setalah di input : " << array_dinamis.size()  << endl;
    cout << "Isi Data : ";
    for(int i= 0 ; i < array_dinamis.size(); i++){
        cout << array_dinamis[i] << ",";
    }
    cout << endl;

    array_dinamis.erase(array_dinamis.begin() + 1);
    cout << "Ukuran setalah di input : " << array_dinamis.size()  << endl;
    cout << "Isi Data : ";
    for(int i= 0 ; i < array_dinamis.size(); i++){
        cout << array_dinamis[i] << ",";
    }
    cout << endl;
    

    return 0;
}