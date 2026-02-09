#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void cetak_nilai(string pesan , const unordered_map<string,int>& hash_map){
    cout << pesan << endl;
    if (hash_map.empty()){
        cout << "Map Kosong" << endl;
        return;
    }
    cout << " |Kunci\t|\tNilai\t|" << endl;
    for (const auto& value : hash_map){
        cout << "| " << value.first << "\t|\t" << value.second << "\t|" << endl;
    }

}

int main(){
    unordered_map<string,int> hash_map;
    // create
    hash_map["One"] = 1;
    hash_map["Three"] = 3;
    hash_map["Two"] = 2;
    cetak_nilai("Element yang awal : ", hash_map);
    // update
    hash_map["One"] = 10;
    cetak_nilai("Element yang sudah di update : ", hash_map);
    // delete
    hash_map.erase("One");
    cetak_nilai("Element yang sudah Hapus : ", hash_map);
    return 0;
}