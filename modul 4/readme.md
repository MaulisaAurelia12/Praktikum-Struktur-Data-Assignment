        LAPORAN PRAKTIKUM ALGORITMA SEARCHING
                Maulisa Aurelia Putri   

Dasar Teori
algoritma searching merupakan proses menemukan suatu nilai tertentu pada kumpulan data. Hasil searching tersebut terdiri dari tiga keadaan yaitu: data ditemukan, data ditemukan lebih dari satu, dan data tidak ditemukan. Terdapat 2 metode pada algoritma searching, yaitu:
1. Sequential Search (pencarian linear)
adalah algoritma yang pencariannya dilakukan secara beruntun(merupakan prose membandingkan setiap elemen array satu persatu secara berurutan). Algoritma ini bekerja dengan mencocokan data pada database dengan data yang dicari pencarian dilakukan secara beruntun dari data awal hingga data terakhir. Adapun langkah-langkah sequential search, yaitu:
    a. melakukan perbandingan beruntun pada kumpulan data dengan menggunakan keyword yang akan dicari.
    b. melakukan looping dari data pertama hingga jumlah data ke-n
    c. setiap perulangan dilakukan pencocokan data dengan keyword yang dicari.
    d. apabila terdapat kecocokan data dengan keyword yang dicari maka data berhasil ditemukan dan pencarian dihentikan. sebaliknya apabila tidak ada kecocokan data hingga data terakhir maka pencarian dihentikan dan data tidak ditemukan.

2. Binary Search
adalah algoritma yang dikembangkan dengan ide dasat berbeda untuk menangani masalah pencarian data pada pemrograman. Binary seaarch ini bekerja untuk pencarian data yang sudah terurut. berikut langkah-langkah binary search:
    a. mengurutkan data terlebih dahulu bisa secara ascending atau descending.
    b. membagi dua array atau keseluruhan data. Apabila data yang dicari lebih kecil dari data yang terletak ditengah, maka pencarian data akan berlanjut ke kiri. Apabila data yang dicari lebih besar dari data terletak ditengah, maka pencarian data akan berlanjut ke kanan, kemudian proses pencarian tersebut akan terus berulang sampai data yang dicari dapat ditemukan.

GUIDED 1
Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data. 
#include <iostream>
using namespace std;

int main() {
    int n = 10;   //variabel n untuk jumlah data
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};  //inputan data dari program
    int cari = 10;  //angka yang dicari = 10
    bool ketemu = false;   //variabel booblean ketemu
    int i;

    //algoritma sequential search
    for (i = 0; 1 < n; i++) {   //menggunakan perulangan for
        if (data[i] == cari) {   //mengecek apakah data yang dicari = cari
            ketemu = true;   //ketika hasil ketemu adalah false, program akan looping
            break;   //jika true maka program berhenti
        }
    }
    cout << "\t program sequential search sederhana\n" << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu) {
        cout << "\nAngka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << "tidak dapat ditemukan pada data." << endl;
    }

    return 0;
}

GUIDED 2
Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan binary search
#include <iostream>
#include <iomanip>  

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}

UNGUIDED
1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah diinput dengan menggunakan Binary Search!
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mengurutkan kalimat
void sortString(string& str) {
    int n = str.length();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (str[j] > str[j+1]) {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

// Fungsi untuk mencari huruf menggunakan Binary Search
int binarySearch(string str, char target) {
    int left = 0;
    int right = str.length() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (str[mid] == target) {
            return mid;
        } else if (str[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Huruf tidak ditemukan
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    char huruf;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    sortString(kalimat);

    int index = binarySearch(kalimat, huruf);
    if (index!= -1) {
        cout << "Huruf " << huruf << " ditemukan pada indeks " << index << endl;
    } else {
        cout << "Huruf " << huruf << " tidak ditemukan" << endl;
    }

    return 0;
}

Output
![alt text](image.png)
program ini menggunakan dua fungsi yaitu sortstring untuk mengurutkan kalimat dan binarySearch untuk mencari huruf menggunakan binary search. User menginput kalimat dan huruf yang ingin dicari. Kemudian fungsi sortSorting mengurutkan kalimat dalam urutan alfabet. Pada fungsi binarySearch juga mencari huruf yang ingin dicari dalam kalimat yang sudah diurutkan. Jika huruf ditemukan, program akan menampilkan indeks huruf tersebut. Jika tidak ditemukan, program akan menampilkan pesan bahwa huruf tidak ditemukan.

2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!
#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string kalimat;
  int jumlahVokal = 0;

  // Meminta input kalimat dari pengguna
  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  // Melakukan iterasi melalui setiap karakter dalam kalimat
  for (char huruf : kalimat) {
    // Memeriksa apakah huruf tersebut adalah vokal
    switch (huruf) {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        jumlahVokal++;
        break;
      default:
        break;
    }
  }

  // Menampilkan hasil perhitungan
  cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << endl;

  return 0;
}

Output
![alt text](image-1.png)
Mendeklarasikan program dengan dua variabel yaitu 'kalimat' untuk menyimpan kalimat yang diinput oleh user dan 'jumlahVokal' untuk menyimpan jumlah huruf vokal dalam kalimat. Selain itu, untuk menginput kalimat dari user menggunakan getline dan menyimpannya dalam variabel 'kalimat'. Saat melakukan iterasi melalui setiap karakter, gunakan perulangan for dan pemeriksaan huruf vokal menggunakan switch dan menghitung huruf vokal dengan benar kemudian ditambahkan 1 ke variabel 'jumlahVokal'. 

3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!
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

Output
![alt text](image-2.png)
Program yang dideklarasikan dengan array 'data' berisi 10 elemen, serta variabel n untuk meyimpan jumlah elemen dalam array dan variabel count untuk menghitung jumlah angka 4. Gunakan perulangan for untuk mengiterasi melalui setiap elemen dalam array 'data'. Kemudian periksa apakah elemen yang diiterasi adalah 4, jika iya maka dapat menabhakan 1 ke variabel count. Hasil perhitungan jumlah angka 4 dalam array 'data' menggunakan cout telah berhasil.


Referensi
[1]4569-Article Text-11739-1-10-20220305. (n.d.). [2]Ramadhan, H., & Avrilia Lantana, D. (n.d.). STRING (Satuan Tulisan Riset dan Inovasi Teknologi) PERBANDINGAN ALGORITMA BINARY SEARCH DAN SEQUENTIAL SEARCH UNTUK PENCARIAN PERSEDIAAN STOK BARANG BERBASIS WEB.