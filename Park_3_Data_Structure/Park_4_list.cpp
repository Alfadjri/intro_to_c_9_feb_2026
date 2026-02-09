#include<iostream>
#include<list>
#include<string>
using namespace std;

void cetak_data(list<int> data,string pesan){
    cout << "===="<<pesan<<"====" << endl;
    for(int value : data){
        cout << value << " ";
    }
    cout << endl;
}

int main(){
    cout << "=====Contoh list====" << endl;
    list<int> link_list;
    // create
    link_list.push_back(10);
    link_list.push_back(30);
    link_list.push_back(20);

    cetak_data(link_list,"Data baru di buat");

    return 0;
}