#include <iostream>

using namespace std;

int main() {
    int arr[10]; // deklarasi array dengan ukuran 10
    int genap[10]; // deklarasi array untuk menyimpan nomor genap
    int ganjil[10]; // deklarasi array untuk menyimpan nomor ganjil
    int nGenap = 0; // variabel untuk menyimpan jumlah nomor genap
    int nGanjil = 0; // variabel untuk menyimpan jumlah nomor ganjil

    // input data array dari user
    cout << "Masukkan data array (10 elemen): ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // proses data array untuk memisahkan nomor genap dan ganjil
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) { // jika nomor genap
            genap[nGenap] = arr[i];
            nGenap++;
        } else { // jika nomor ganjil
            ganjil[nGanjil] = arr[i];
            nGanjil++;
        }
    }

    // tampilkan output
    cout << "Data Array : ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < nGenap; i++) {
        cout << genap[i] << ", ";
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < nGanjil; i++) {
        cout << ganjil[i] << ", ";
    }
    cout << endl;

    return 0;
}