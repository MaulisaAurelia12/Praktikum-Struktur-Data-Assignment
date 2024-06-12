    LAPORAN PRAKTIKUM SORTING
     Maulisa Aurelia Putri

Dasar Teori
Sorting atau pengurutan adalah proses menyusun elemen-elemen dari masukkan awal acak menjadi keluaran akhir tertata dengan urutan tertentu. Proses tersebut diimplementasikan dalam bermacam aplikasi. Contoh penerapan lain berupa rincian transaksi sesuai urutan tanggal dan jam pada perbankan, daftar hadir yang diurutkan berdasarkan nomor induk dan daftar pustaka, dll. Pengurutan juga bisa diterapkan secata tidak langsung pada sekelompok data seperti hendak mengurutkan nama dengan jumlah karakter paling kecil hingga karakter nama paling banyak. Sehingga dalam sorting harus terdapat data yang akan diurutkan dalam tipe yang sama atau setidaknya memperoleh perlakuan data yang sama dan aturan pengurutannya jelas. 
Adapun metode sorting antara lain bubble sort, selection sort, bi-derectional bubble sort, shaker sort, insertion sort, in-place merge sort, double storage merge sort, dan sebagainya. 

1. Insertion Sort
metode ini memiliki kecepatan rata-rata antara metode primitif (bubble dan selection) dan modern (merge dan quick). Cara pengurutannya dengan cara dicek satu per satu mulai dari kedua sampai dengan yang terakhir. Apabila ditemukan data yang lebih kecil dari data sebelumnya, maka data tersebut disisipkan pada posisi yang sesuai. 
#include <iostream>
using namespace std;

void insertion_sort(int arr[], int length) {
    int i, j, tmp;

        for (i = 1l i < length; i++) {
            j = 1;

            while (j > 0 && arr[j - 1] > arr[j]) {
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                j--;
            } //akhir dari perulangan while
        } //akhir dari perulangan for
}

void print_array(int a[], int length) {
    for(int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6;
    int a =[length] = {22, 10, 15, 3, 8, 2};

    insertion_sort(a, length);
    print_array(a, length);
}

Pada fungsi menggunakan tiga variabel yaitu i, j, dan tmp dengan i sebagai perulangan iterasi yang mengulang setiap elemen array mulai dari elemen 2, j sebagai perulangan yang membandingkan elemen saat ini dengan elemen sebelumnya, tmp sebagai variabel sementara yang digunakan untuk menyimpan nilai elemen selama penukaran. Perulangan akan terjadi dari i = 1 sanpai i < length. Pada perulangan while, selama j > 0 dan elemen pada arr[j - 1] > arr[j] benar, berarti elemen tersebut tidak perlu terurut. Setelah perulangan selesai (j mencapai nilai 0 atau elemen-elemen sudah berurutan), perulangan luar berpindah ke elemen berikutnya.

2. Bubble Sort
merupakan pengurutan dengan cara menukar dua elemen yang bersebelahan jika urutan dari data tersebut salah. Bubble sort mengurutkan data secara ascending (besar ke kecil) dan descending (kecil ke besar). Namun, algoritma ini tidak cocok untuk data dengan jumlah yang besar karena komplesitasnya adalah O(n^2), dimana n adalah jumlah elemen.

void bubble_sort(int arr[], int length) {
    bool not_sorted = true;
    int j = 0, tmp;

    while (not_sorted) {
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            } //akhir dari perulangan if
        } //akhir dari perulangan for
    } //akhir dari perulangan while 
}

Pada arr[], merupakan array bertipe integer yang perlu diurutkan dan lenght yang mewakili jumlah elemen dalam array arr. Adapun not_sorted merupakan variabel bertipe boolean yang diinisialisasikan dengan true, mengindikasikan bahwa proses sorting harus dilanjutkan selama elemen belum terurut. Pada variabel tmp yang bertipe integer ini digunakan untuk penyimpanan sementara selama penukaran elemen-elemen dalam array. 
Pada perulangan while, akan berlanjut jika bernilai true hingga array diurutkan. Ketika j + 1, pada setiap lintasan, elemen terbesar akan mengalami bubble sort hingga akhir, sehingga elemen j terakhir sudah diurutkan.
Pada perulangan for, terjad perulangan iterasi dari i = 0 sampai i < lengthh - j. Perulangan ini membandingkan elemen yang terdekat dalam array. jika elemen arr[i] > arr[i + 1], maka nilainya akan ditukar dengan tmp dan not_sorted akan mengatur ulang nilai hingga bernilai true.

3. Selection Sort
adalah algoritma berbasis perbandingan ditempat dimana daftar dibagi menjadi dua bagian, bagian yang di sorting di ujung kiri dan bagian yang tidak di sorting di ujung kanan. Algoritma ini tidak cocok untuk kumpulan data besar karena komplesitas rata-rata dan kasus terburuknya adalah (n2), dimana n adalah jumlah item.

void selectionSort(int arr[], int n) {
    int pos_min,temp; {
        for (int i = 0; i < n - 1; i++) {
            pos_min = i;
                for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[pos_min])
                    pos_min = j;
                }
        }
        if (pos_min != i) {
            temp = arr[i];
            arr[i] = arr[pos_min];
            arr[pos_min] = temp;
        }
    }
}

Pada loop iterasi dari i = 0 sampai i < n - 1, setiap loop i merepresentasikan indeks elemen yang akan ditempatkan pada posisi yang benar. Ketika perulangan j = i + 1 sampai j < n membandingkan elemen pada indeks i dengan elemen yang tersisa dalam array yang tidak terurut. Setelah melakukan perulangan, pos_min akan meyimpan indeks dari elemen minimum dalam array yang belum diurutkan. Jika pos_min tidak sama dengan i maka nilai arr[i] dan arr[pos_min] akan ditukar dengan variabel temp.

GUIDED 1
#include <iostream> 
using namespace std;

void bubble_sort(double arr[], int length) {   //fungsi untuk mengurutkan array menggunakan algoritma bubble sort
    bool not_sorted = true;  //akan terjadi looping(perulangan jika belum melakukan sorting)
    int j = 0;
    double tmp;
    
    while (not_sorted) {   //melakukan pengurutan hingga array sudah terurut
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++) {   //membandingkan elemen satu dengan lainnya
            if (arr[i] > arr [i + 1]) {
                tmp = arr[i];   //menukar elemen
                arr[i] = arr[i + 1];
                arr[i+1] = tmp;
                not_sorted = true;  
            }
        }
    }
}

void print_array(double a[], int length) {
    for(int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6;   //jumlah elemen dalam array
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99, 99.99};

    cout << "urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    //memanggil fungsi bubble_sort 
    bubble_sort(a, length);
    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
    return 0;
}


GUIDED 2
#include <iostream>
using namespace std;

//mengurutkan array secara descending dengan insertion sort
void insertion_sort (char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = 1;

        //membandingkan dan menukar elemen
        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

void print_array (char a[], int length) {
    for (int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "urutkan karakter sebelum sorting: " << endl;
    print_array(a, length);
    insertion_sort (a, length);
    cout << "\nurutkan karakter setelah sorting secara descending: " << endl;
    print_array(a, length);

    return 0;
}

UNGUIDED
1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga yang terkecil dengan menggunakan algoritma Selection Sort!
#include <iostream>
using namespace std;

int main() {
    // Data IPS mahasiswa
    double ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = 5; // Jumlah mahasiswa

    // Algoritma Selection Sort
    for (int i = 0; i < n-1; i++) {
        int max_idx = i;
        for (int j = i+1; j < n; j++) {
            if (ips[j] > ips[max_idx]) {
                max_idx = j;
            }
        }
        swap(ips[i], ips[max_idx]);
    }

    // Menampilkan hasil pengurutan
    cout << "IPS mahasiswa setelah diurutkan (dari terbesar ke terkecil):" << endl;
    for (int i = 0; i < n; i++) {
        cout << ips[i] << " ";
    }
    cout << endl;

    return 0;
}

Output
![alt text](image.png)
Pada kode tersebut, pengurutan data IPS mahasiswa dari terbesar ke terkecil. program ini mendefinisikan array IPS yang berisi 5 buah nilai IPS mahasiswa. Kemudian, pada variabel n berisi jumlah mahasiswa sebanyak 5 orang. Pada array IPS ini bekerja dengan mencari nilai maksimum dalam array dan menukarnya dengan nilai pertama kemudian mencari nilai maksimum dalam sisa array dan menukarnya dengan nilai kedua dan seterusnya. Setelah pengurutan selesai, program akan menampilkan hasil pengurutan dalam urutan secara ascending.

2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, pak RT akan mengurutkan nama-nama tersebut sesuai dengan alfabet. Buatlah program untuk membantu pak RT dengan menggunakan algoritma Bubble Sort!
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Daftar nama warga
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = 10; // Jumlah warga

    // Algoritma Bubble Sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (names[j] > names[j+1]) {
                swap(names[j], names[j+1]);
            }
        }
    }

    // Menampilkan hasil pengurutan
    cout << "Daftar nama warga setelah diurutkan secara alfabet:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}

Output
![alt text](image-1.png)
program ini mendefinisikan array 'names' berisi 10 buah nama warga yang disediakan. Kemudian, pada variabel n berisi jumlah warga sebanyak 10 dan program akan menggunakan bubble sort untuk mengurutkan array 'names' yang bekerja dengan cara membandingkan setiap elemen dalam array dan menukarnya jika elemen sebelumnya lebih besar dari elemen setelahnya. setelah pengurutan selesai, program akan menampilkan hasil pengurutan dalan urutan alfabet.

3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan n: ";
    cin >> n;

    string characters[n];

    cout << "Masukkan " << n << " karakter:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Karakter ke-" << i+1 << ": ";
        cin >> characters[i];
    }

    cout << "Urutan karakter sebelum sorting: ";
    for (int i = 0; i < n; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    sort(characters, characters + n);
    cout << "Urutan karakter setelah ascending sort: ";
    for (int i = 0; i < n; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    sort(characters, characters + n, greater<string>());

    cout << "Urutan karakter setelah descending sort: ";
    for (int i = 0; i < n; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    return 0;
}

Output
![alt text](image-2.png)
Program ini meminta user untuk memasukkan n yang akan digunakan sebagai ukuran array dari string. kemudian program ini meminta user untuk memasukkan n karakter dan disimpan dalam 'characters'. Program akan menampilkan urutan karakter sebelum diurutkan dan program akan menggunakan fungsi 'sort' untuk mengurutkan array dalam urutan ascending. Kemudia program akan menampilkan urutan karakter setelah diurutkan.
untuk pengurutan secara descending, program akan menggunakan fungsi sort untuk mengurutkan array. Kemudian, program ini akan menampilkan ururtan karakter setelah diurutkan dalam urutan descending.

Referensi
[1]Hendra Saptadi, A., & Windi Sari, D. (n.d.). ANALISIS ALGORITMA INSERTION SORT, MERGE SORT DAN IMPLEMENTASINYA DALAM BAHASA PEMROGRAMAN C++. [2]Yanti, F., & Emi Sita Eriana, Mk. (n.d.). ALGORITMA SORTING DAN SEARCHING PENERBIT CV.EUREKA MEDIA AKSARA.