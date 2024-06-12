# LAPORAN PRAKTIKUM PRIORITY QUEUE DAN HEAP
Maulisa Aurelia Putri

# Dasar Teori
# 1. Queue
Queue (antrian) barisan elemen yang apabila elemen ditambah maka penambahannya berada di posisi belakang dan jika dilakukan pengambilan elemen dilakukan di elemen pang depan (FIFO(First In First Out)). Operasi dasar dari sebuah queue adalah:
    a. enqueue = proses penambahan atau memasukkan satu elemen di belakang
    b. dequeue = proses pengambilan atau mengeluarkan satu elemen di posisi depan
# 2. Heap
Adalah struktur data yang digunakan untuk menyimpan elemen-elemen dalam suatu urutan yang spesifik. Heap memiliki beberapa karakteristik yang membedakannya dengan struktur data lain. Karakteristik Heap diantaranya dilihat dari struktur, heap terdiri dari elemen-elemen yang disimpan dalam suatu urutan yang spesifik. Elemen ini dapat berupa bilangan, string, atau objek lainnya. Dilihat dari urutan, heap memiliki urutan yang spesifik mulai dari yang terkecil atau terbesar yang berada diatas elemen lain. dan terakhir dilihat dari pengoperasian, heap memiliki operasi yang dapat dilakukan seperti insert, delete, dan search. Ada 2 jenis heap, yaitu:
    a. Max heap = tipe heap yang memiliki elemen terbesar diatasnya dan elemen terkecil dibawahnya. 
    b. Min heap = tipe heap yang memiliki elemen terkecil diatasnya dan elemen terbesar dibawahnya. 

# GUIDED

#include <iostream>
#include <algoritm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild (int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getmax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);
    std::cout << "priority queue: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";
    std::cout << "node dengan proritas maksimum: " << extractMax 
    std::cout << "priority queue setelah extract max: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    changePriority(2, 49);
    std::cout << "priority queue setelah priority change: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    remove(3);
    std::cout << "priority queue setelah menghapus elemen: ";
    for (int i = 0; i <= heapSize; ++i) {
        srd::cout << H[i] << " ";
    }
    return 0;
}

Kode diatas merupakan implementasi priority queue menggunakan heap. Priority queue merupakan struktur data yang dapat menampung elemen-elemen dengan prioritas yang berbeda. Fungsi yang terdapat dalam priority queue ini diantaranya:
    a. parent(int i) = mengembalikan nilai parent dari elemen pada indeks `i`
    b. leftChild(int i) = mengembalikan nilai child kiri dari elemen pada indeks `i`
    c. rightChild(int i) = untuk mengembalikan nilai child kanan
    d. shiftUp(int i) = untuk menggeser elemen di indeks `i` keatas hingga elemen tersebut berada diposisi yang sesuai dengan prioritasnya. 
    e. shiftDown(int i) = mengguser elemen di indeks `i` ke bawah hingga elemen tersebut berada di posisi yang sesuai.
    f. insert(int p) = menambahkan elemen dengan prioritas `p` ke dalam heap
    g. extractMax() = menghapus elemen dengan prioritas tertinggi dari heap dan mengembalikan nilai prioritasnya. 
    h. changePriority(int i, int p) = mengubah prioritas elemen di indeks `i` menjadi `p`
    i. getMax() = mengembalikan nilai prioritas elemen dengan prioritas tertinggi heap
    j. remove(int i) = menghapus elemen di indeks `i` dari heap dan menggantinya dengan elemen dengan prioritas tertinggi di heap.

# UNGUIDED
# 1. Modifikasi guided diatas yang mana heap dikonstruksikan secara manual berdasarkan user

#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen heap: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int elem;
        std::cout << "Masukkan elemen ke-" << i + 1 << ": ";
        std::cin >> elem;
        insert(elem);
    }

    std::cout << "Heap awal: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int pilihan;
    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Ekstrak maksimum" << std::endl;
        std::cout << "2. Ubah prioritas" << std::endl;
        std::cout << "3. Hapus elemen" << std::endl;
        std::cout << "4. Tampilkan heap" << std::endl;
        std::cout << "5. Keluar" << std::endl;
        std::cout << "Pilihan: ";
        std::cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int max = extractMax();
                std::cout << "Maksimum: " << max << std::endl;
                break;
            }
            case 2: {
                int i, p;
                std::cout << "Masukkan indeks elemen: ";
                std::cin >> i;
                std::cout << "Masukkan prioritas baru: ";
                std::cin >> p;
                changePriority(i, p);
                break;
            }
            case 3: {
                int i;
                std::cout << "Masukkan indeks elemen: ";
                std::cin >> i;
                remove(i);
                break;
            }
            case 4: {
                std::cout << "Heap saat ini: ";
                for (int i = 0; i <= heapSize; ++i) {
                    std::cout << H[i] << " ";
                }
                std::cout << "\n";
                break;
            }
            case 5: {
                return 0;
            }
            default: {
                std::cout << "Pilihan tidak valid" << std::endl;
            }
        }
    }

    return 0;
}

Pada kode diatas user dapat memasukkan jumlah elemen heap dan nilai-nilai elemen secara manual. kemudian user dapat memilih menu untuk melakukan operasi pada heap seperi `extractMax` untuk menghapus elemen dengan prioritas tertinggi, `changePriority`, untuk mengubah prioritas elemen di indeks tertentu atau `remove` untuk menghapus elemen di indeks tertentu dan menggantinya dengan elemen prioritas tertinggi dalam heap.

# Referensi
[1] modul priority queue dan heap. [2]-, H. (n.d.). Struktur Data-Queue.[3]Bagus Aditya, K., & Yuliana Rachmawati, R. K. (2019). PERBANDINGAN METODE SIMPLE QUEUE DAN QUEUE TREE UNTUK OPTIMASI MANAJEMEN BANDWIDTH MENGGUNAKAN MIKROTIK (STUDI DI ASRAMA WISMA MUSLIM). 7(2). [4]Gunawan, R., Yuana, H., Kirom, S., Balitar Blitar Jl Majapahit No, I., Sananwetan, K., Blitar, K., & Timur, J. (2023). IMPLEMENTASI METODE QUEUE PADA SISTEM ANTRIAN ONLINE BERBASIS WEB STUDI KASUS UPTD PUSKESMAS SANANWETAN. In Jurnal Mahasiswa Teknik Informatika (Vol. 7, Issue 3).