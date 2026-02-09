#include<iostream>
using namespace std;


struct Node{
    int angka;
    Node* next;
};

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // masukin data
    head->angka = 1;
    head->next = second;

    second->angka = 2;
    second->next = third;

    third->angka = 3;
    third->next = nullptr;

    // Read
    Node* masinis = head;
    cout << "Ada Berapa banyak data dalam gerbong" << endl;
    while(masinis != nullptr){
        cout << "Data yang ada : " << masinis->angka << endl;
        cout << "Data next : " << masinis->next << endl;
        masinis = masinis->next;
    };
    cout << endl;
    return 0;
}