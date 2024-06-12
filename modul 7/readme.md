        LAPORAN PRAKTIKUM STACK & QUEUE
            Maulisa Aurelia Putri

# Dasar Teori
Stack (tumpukan) adalah kumpulan data yang seolah-olah terlihat seperti ada data yang dilentakkan diatas data yang lain. Ketika kita ingin mengambil data A, maka data-data yang berada diatasnya harus lebih dulu dikeluarkan (Last In First Out(LIFO)). Terdapat operasi dari stack, yaitu:

    a. push = operasi menambahkan elemen pada urutan terakhir (paling atas)
    b. pop = operasi mengambil elemen data pada urutan terakhir dan menghapus elemen tersebut dari stack
    c. deklarasi = proses pendeklarasian stack
    d. isempty = proses pemeriksaan apakah stack dalam keadaan kosong
    e. isfull = proses pemeriksaan apakah stack telah penuh
    f. inisialisasi = proses pembuatan stack kosong yang biasanya dengan pemberian nilai untuk top. 

Implementasi stack diantaranya konversi bilangan desimal ke bilangan biner dan notasi polish.

Sedangkan queue (antrian) merupakan antrian dimana yang pertama kali masuk dialah yang pertama kali keluar (First In First Out (FIFO)). implementasi queue yaitu drive-thru dimana proses pemesanan yang pertama kali memesan dan melakukan pembayaran akan keluar pertama dan mengambil makanan pertama. Karakteristik queue yaitu enqueue (menambahkan elemen) dan dequeue (menghapus elemen).  

# GUIDED

# 1. Stack

#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa Jerman");
    cout << endl;
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    return 0;
}

Kode program ini menggunakan array `arrayBuku` dengan ukuran 5 untuk memnyimpan data buku. Pada variabel `maksimal` digunakan untuk menyimpan ukuran maksimal array, sedangkan variabel `top` digunakan untuk menyimpan indeks terakhir array yang telah diisi. Dalam program ini juga memuat beberapa fungsi, diantaranya:

    a. isFull = digunakan untuk mengecek apakah array telah penuh dan mengembalikan nilai 'true' jika array telah penuh dan 'false' jika belum.
    
    b. isEmpty = digunakan nuntuk mengecek apakah array kososng dan akan mengembalikan nilai 'true' jika array kosong dan 'false' jika tidak

    c. pushArrayBuku = digunakan untuk menambahkan data baru ke dalam array. Jika array telah penuh, fungsi akan menampilkan pesan "data telah penuh"

    d. popArrayBuku = digunakan untuk menghapus data terakhir dari array. Jika array kosong, fungsi tersebut akan menampilkan pesan "tidak ada data yang dihapus"

    e. peekArrayBuku = digunakan untuk menampilkan data pada posisi tertentu dalam array.

    f. countStack = digunakan dalam menghitung jumlah data dalam array

    g. changeArrayBuku = digunakan untuk memngubah data pada posisi tertentu dalam array

    h. destroyArrayBuku = digunakan untuk menghapus semua data dalam array

    i. cetakArrayBuku = digunakan untuk mencetak semua data dalam array

# 2. Queue

#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}

Pada fungsi `enqueueAntrian()`, digunakan untuk menambahkan antrian baru ke dalam array dan jika penuh fungsi akan menampilkan "antrian penuh". Adapun `dequeueAntrian()` digunakan untuk mengurangi antrian terdepan dari array dan jika antrian kosong fungsi akan menampilkan pesan "antrian kosong". Sehingga pada program utama, operasi yang digunakan mulai dari menambahkan 2 antrian ke dalam array, menampilkan isi antrian dengan fungsi `viewQueue`, kemudian menghitung jumlah antrian.

# UNGUIDED

# 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan cara  kerja programnya.

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> s;
    for (int i = 0; i < kalimat.length(); i++) {
        s.push(kalimat[i]);
    }

    string reversedKalimat = "";
    while (!s.empty()) {
        reversedKalimat += s.top();
        s.pop();
    }

    return kalimat == reversedKalimat;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}

Program diatas menggunakan isPalindrome untuk menerima `alimat` sebagai input dari user. Kemudian menggunakan stack `s` untuk menyimpan karakter-karakter dari `kalimat`. Pada fungsi `kalimat` ini mengiterasi setiap karakter dan menambahkan ke stack `s` dengan `push`. Setelah semua karakter ditambahkan ke stack, fungsi akan mengiterasi `s` dan mengambil karakter dari stack menggunakan `top` dan `pop`. Setelah fungsi menyimpan karakter-karakter yang diambil dari stack kedalam string `reversedKalimat` dan membandingkannya dengan `kalimat`. jika sama, maka `kalimat` akan palindrom. Pada fungsi `main()` digunakan untuk menerima kalimat dari user dan memanggil fungsi `isPalindrome` untu menentukan apakah kalimat tersebut adalah palindrom atau tidak. Program ini hanya bekerja untuk kalimat yang tidak mengamdung spasi atau karakter khusus.

# 2. Ubah guided queue diatas agar menjadi inputan user dan program menu

#include <iostream>
#include <string>

using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[maksimalQueue]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i]!= "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    int pilihan;
    string data;

    do {
        cout << "Menu Antrian Teller" << endl;
        cout << "1. Tambah Antrian" << endl;
        cout << "2. Kurangi Antrian" << endl;
        cout << "3. Lihat Antrian" << endl;
        cout << "4. Hapus Antrian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama: ";
                cin.ignore();
                getline(cin, data);
                enqueueAntrian(data);
                break;
            case 2:
                dequeueAntrian();
                break;
            case 3:
                viewQueue();
                break;
            case 4:
                clearQueue();
                break;
            case 5:
                cout << "Terima kasih" << endl;
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
        }

        cout << endl;
    } while (pilihan!= 5);

    return 0;
}

Program ini memungkinkan user untuk menambahkan nama kedalam antrian, mengurangi antrian paling depan, melihat isi antrian, menghapus semua antrian, dan keluar dari program. Kode program ini menggunakan array string untuk menyimpan data antrian. Kode ini dapat dimodifikasi tipe datanya sesuai kebutuhan. 


# Referensi
[1]Heryandi, A. (n.d.). Struktur Data-Stack Oleh. [2] modul