#include<iostream>
#include<map>
#include<string>
using namespace std;

void cetak_nilai(string pesan , const map<string,int>& tree_map){
    cout << pesan << endl;
    if (tree_map.empty()){
        cout << "Map Kosong" << endl;
        return;
    }
    cout << " |Kunci\t|\tNilai\t|" << endl;
    for (const auto& value : tree_map){
        cout << "| " << value.first << "\t|\t" << value.second << "\t|" << endl;
    }

}

int main(){
    map<string,int> tree_map;
    // create
    tree_map["1"] = 1;
    tree_map["3"] = 3;
    tree_map["2"] = 2;
    tree_map["4"] = 4;

    cetak_nilai("Data tree map : ",tree_map);
    return 0;
}