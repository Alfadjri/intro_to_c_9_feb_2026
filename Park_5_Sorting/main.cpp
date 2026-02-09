#include<iostream>
using namespace std;

void generateRandomNumber(int data[],int n){
    for(int i = 0 ; i < n ; i++){
        data[i] = rand() % 100 + 1;
    }
}
void print_format(string pesan , int data[],int n){
    cout << "===" << pesan << "===" << endl;
    for (int i = 0 ; i < n ; i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

void bobbleSort(int data[],int n){
    for(int i = 0 ; i < n - 1; i++){
        for(int j= 0; j < n - i - 1; j++){
            if (data[j] > data[j+1]){
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}
void selectionSort(int data[],int n){
    for(int i = 0 ; i < n - 1 ; i++){
        int index = i;
        for(int j = i + 1 ; j < n ; j++){
            if(data[j] < data[index]){
                index = j;
            }
        }
        int temp = data[index];
        data[index] = data[i];
        data[i] = temp;
    }
}
void insertSort(int data[],int n){
    int i , value , j;
    for(i = 1 ; i < n; i++){
        value = data[i];  
        j = i-1;
        while (j >= 0 && value < data[j]){
            data[j+1] = data[j]; 
            j = j - 1; 
        } 
        data[j+1] = value; 
    }
}
void mergeSort(int data[],int kiri, int tengah , int kanan){
    int jumlah_data_kiri = tengah - kiri + 1;
    int jumlah_data_kanan = kanan - tengah;
    int data_kiri[jumlah_data_kiri];
    int data_kanan[jumlah_data_kanan];

    for (int i = 0 ; i < jumlah_data_kiri ; i++){
        data_kiri[i] = data[kiri + i];
    }
    for (int j = 0 ; j < jumlah_data_kanan ; j++){
        data_kanan[j] = data[tengah + 1 + j];
    }

    int i = 0 , j = 0 , k = kiri;
    while(i < jumlah_data_kiri && j < jumlah_data_kanan){
        if (data_kiri[i] <= data_kanan[j]){
            data[k] = data_kiri[i];
            i++;
        }else{
            data[k] = data_kanan[j];
            j++;
        }
        k++;
    }

    while (i < jumlah_data_kiri){
        data[k] = data_kiri[i];
        i++;
        k++;
    }
    while (j < jumlah_data_kanan){
        data[k] = data_kanan[j];
        j++;
        k++;
    }
}

void merge_sort(int data[],int kiri , int kanan){
    if (kiri < kanan){
        int tengah = kiri + (kanan - kiri) / 2;
        merge_sort(data,kiri,tengah);
        merge_sort(data,tengah + 1 , kanan);
        mergeSort(data,kiri,tengah,kanan);
    }
}
void mergerSortWrapper(int data[],int n){
    merge_sort(data,0,n-1);
}

int main(){
    int jumlah_data;
    cout << "Masukan jumlah data yang ingin di buat : ";
    cin >> jumlah_data;
    int array[jumlah_data];
    generateRandomNumber(array,jumlah_data);
    print_format("Data sebelum di sorting",array,jumlah_data);
    cout << "Tekan Enter untuk melanjutkan ke tahap berikutnya ...." << endl;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin.get();
    // bobbleSort(array,jumlah_data);
    // selectionSort(array,jumlah_data);
    // insertSort(array,jumlah_data);
    // merge_sort(array,jumlah_data);
    mergerSortWrapper(array,jumlah_data);
    print_format("Data setelah di sorting",array,jumlah_data);
    return 0;
}