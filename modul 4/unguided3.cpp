#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
  int n = sizeof(data) / sizeof(data[0]); // Menentukan jumlah elemen dalam array
  int count = 0; // Menginisialisasi variabel untuk menghitung jumlah angka 4

  // Algoritma Sequential Search
  for (int i = 0; i < n; i++) {
    if (data[i] == 4) {
      count++; // Menambahkan 1 ke count jika elemen yang ditemukan adalah 4
    }
  }

  // Menampilkan hasil
  cout << "Jumlah angka 4 dalam data: " << count << endl;

  return 0;
}
