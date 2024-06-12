        LAPORAN PRAKTIKUM STRUCT DAN IMPLEMENTASINYA
                Maulisa Aurelia Putri

Dasar Teori
variabel adalah konsep yang digunakan untuk menyimpan dan mengakses nilai dalam suatu program. Variabel dapat dianggap sebagai sebuah nama yang diberikan kepada suatu nilai, sehingga nilai tersebut dapat diakses dan digunakan dalam program. Variabel terbagi menjadi 2 jenis, yakni variabel lokal(dideklarasikan dalam fungsi dan dapat dipanggil hanya dengan fungsi yang mendeklarasikannya) dan global(dideklarasikan diluar fungsi dan dipanggil oleh semua semua fungsi yang ada didalam program).

Struktur(struct) merupakan tipe data bentukan yang terdiri dari beberapa tipe data standar maupun tipe data bentukan lain yang sudah didefinisikan sebelumnya. terdapat banyak format penulisan struct, diantaranya:
struct {
    string namaDepan;
    string namaBelakang;
    int usia;
    char jenis_kelamin;
}namaVariabelStrukA, namaVariabelStrukB;

struct namaTipe{
    string namaDepan;
    string namaTengah;
    string namaBelakang;
}; struct Tipe namaVariabelStrukA, namaVariabelStrukB;

typedef struct {
    string namaDepan;
    string namaTengah;
    string namaBelakang;
}namaTipe;

GUIDED 1
Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan
#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul_buku;
    string pengarang;
    string penerbitan;
    int tebal_halaman;
    double harga_buku;
}; 

Buku buku1;
Buku buku2;

int main() {
    buku1.judul_buku = "Algoritma dan Struktur Data";
    buku1.pengarang = "Yunus Prademon";
    buku1.penerbitan = "Gramedia Pustaka Media";
    buku1.tebal_halaman = 300;
    buku1.harga_buku = 120000;

    //menampilkan data
    cout << "Informasi Buku" << endl;
    cout << "Judul: " << buku1.judul_buku << endl;
    cout << "Pengarang: " << buku1.pengarang << endl;
    cout << "Penerbit: " << buku1.penerbitan << endl;
    cout << "tebal halaman: " << buku1.tebal_halaman << endl;
    cout << "harga: " << buku1.harga_buku << endl;

    //buku 2 
    buku2.judul_buku = "dunia shopie";
    buku2.pengarang = "Jostein Gaarder";
    buku2.penerbitan = "Mizan";
    buku2.tebal_halaman = 800;
    buku2.harga_buku = 157000;

    //menampilkan data
    cout << "Informasi Buku" << endl;
    cout << "Judul" << buku2.judul_buku << endl;
    cout << "Pengarang: " << buku2.pengarang << endl;
    cout << "Penerbit: " << buku2.penerbitan << endl;
    cout << "tebal halaman: " << buku2.tebal_halaman << endl;
    cout << "harga: " << buku2.harga_buku << endl;
    
    return 0;
}

Output
![alt text](image.png)
Program tersebut memiliki dua objek yaitu 'buku1' dan 'buku2'. Pada bagian 'buku1', program akan mengisi dengan nilai-nilai tertentu, kemudian menampilkan informasi buku seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku menggunakan cout. Hal tersebut juga dalam abjek 'buku2'.

GUIDED 2
Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan
#include <iostream>
#include <string>
using namespace std;

struct hewan {
    string nama_hewan;
    char jenis_kelamin;
    string kembangbiak;
    string pernapasan;
    string tempat_hidup;
    bool karnivora;
};

struct hewan_darat : hewan {
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
};

struct hewan_laut : hewan {
    string bentuk_sirip;
    string pertahanan_diri;
};

int main() {
    hewan_darat hewan1;
    hewan_laut hewan2;

    //hewan 1 (darat)
    hewan1.nama_hewan = "ayam";
    hewan1.jenis_kelamin = 'b'; // menggunakan single quote untuk char
    hewan1.kembangbiak = "bertelur";
    hewan1.pernapasan = "paru-paru";
    hewan1.tempat_hidup = "daratan";
    hewan1.karnivora = false;
    hewan1.jumlah_kaki = 2;
    hewan1.apakah_menyusui = false;
    hewan1.suara = "kukuruyuk";

    //hewan 2 (laut)
    hewan2.nama_hewan = "gurita";
    hewan2.jenis_kelamin = 'b'; // menggunakan single quote untuk char
    hewan2.kembangbiak = "bertelur";
    hewan2.pernapasan = "insang";
    hewan2.tempat_hidup = "laut";
    hewan2.karnivora = true;
    hewan2.bentuk_sirip = "tidak memiliki";
    hewan2.pertahanan_diri = "kantong tinta dan kamuflase";

    cout << "hewan darat" << endl;
    cout << "nama hewan: " << hewan1.nama_hewan << endl;
    cout << "jenis kelamin: " << hewan1.jenis_kelamin << endl;
    cout << "cara berkembangbiak: " << hewan1.kembangbiak << endl;
    cout << "alat pernapasan: " << hewan1.pernapasan << endl;
    cout << "tempat hidup: " << hewan1.tempat_hidup << endl;
    cout << "apakah karnivora atau tidak: " << (hewan1.karnivora ? "ya" : "tidak") << endl;
    cout << "jumlah kaki: " << hewan1.jumlah_kaki << endl;
    cout << "apakah menyusui: " << (hewan1.apakah_menyusui ? "ya" : "tidak") << endl;
    cout << "suara hewan: " << hewan1.suara << endl;

    cout << "hewan air" << endl;
    cout << "nama hewan: " << hewan2.nama_hewan << endl;
    cout << "jenis kelamin: " << hewan2.jenis_kelamin << endl;
    cout << "cara berkembangbiak: " << hewan2.kembangbiak << endl;
    cout << "alat pernapasan: " << hewan2.pernapasan << endl;
    cout << "tempat hidup: " << hewan2.tempat_hidup << endl;
    cout << "apakah karnivora atau tidak: " << (hewan2.karnivora ? "ya" : "tidak") << endl;
    cout << "bentuk sirip: " << hewan2.bentuk_sirip << endl;
    cout << "pertahanan diri: " << hewan2.pertahanan_diri << endl;

    return 0;
}

Output
![alt text](image-1.png)
Pada program diatas memuat 'hewan darat' dan hewan laut yang memiliki struktur data 'hewan'. Struktur data ini memiliki node yang lain yaitu 'nama_hewan', 'jenis_kelamin', 'kembangbiak', 'pernapasan', 'tempat_hidup', dan 'karnivora'. Apadapun yang berbeda dari kedua struct tersebut, pada struct 'hewan darat' memiliki node tambahan 'jumlah_kaki', 'apakah_menyusui', 'suara'. Sedangkan pada struct 'hewan laut' mendapat tambahan node 'bentuk_sirip' dan 'pertahanan_diri'. 
Kemudian pada bagian main(), kedua struct tersebut akan mengisi node dengan nilai tertentu dan akhir program akan menampilkan informasi tentang 'hewan1' dan 'hewan2' menggunakan cout

UNGUIDED
1. Modifikasi tugas guided pertama, setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.
#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul_buku[5];
    string pengarang[5];
    string penerbitan[5];
    int tebal_halaman[5];
    double harga_buku[5];
}; 

Buku buku1;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Informasi Buku" << endl;
        cout << "Judul: " << buku1.judul_buku;
        cin >> buku1.judul_buku[i];
        cout << "Pengarang: " << buku1.pengarang;
        cin >> buku1.pengarang[i];
        cout << "Penerbit: " << buku1.penerbitan;
        cin >> buku1.penerbitan[i];
        cout << "tebal halaman: " << buku1.tebal_halaman;
        cin >> buku1.tebal_halaman[i];
        cout << "harga: " << buku1.harga_buku;
        cin >> buku1.harga_buku[i];
    }
    //menampilkan data
    for (int i = 0; i < 5; i++) {
        cout << "Informasi Buku" << endl;
        cout << "Judul: " << buku1.judul_buku[i] << endl;
        cout << "Pengarang: " << buku1.pengarang[i] << endl;
        cout << "Penerbit: " << buku1.penerbitan[i] << endl;
        cout << "tebal halaman: " << buku1.tebal_halaman[i] << endl;
        cout << "harga: " << buku1.harga_buku[i] << endl;
    }

    return 0;
}
Output
![alt text](image-2.png)
Struct Buku
Program ini mendefinisikan sebuah struct untuk merepresentasikan beberapa buku. Struct ini memiliki lima anggota:
    a. judul_buku: sebuah string untuk menyimpan judul buku
    b. pengarang: sebuah string untuk menyimpan pengarang buku
    c. penerbit: sebuah string untuk menyimpan penerbit buku
    d. tebal_halaman: sebuah integer untuk menyimpan jumlah halaman dalam buku
    e. harga_buku: sebuah double untuk menyimpan harga buku
Pada perulangan pertama dilakukan sebanyak 5 kali yang meminta user memasukkan informasi 5 buku. Untuk setiap buku, program meminta user untuk memasukkan judul buku menggunakan cout. Kemudian menggunakan getline(cin, bukuku.judul_buku) untuk membaca satu baris masukan untuk judul buku dan mengulangi langkah 1-3 untuk pengarang, penerbit, jumlah halaman, dan harga buku. Pada informasi buku seterusnya akan dilakukan cara yang sama yaitu dengan menampilkan judul buku, pengarang buku, penerbit, jumlah halaman, dan harga buku menggunakan cout.

2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided 1, berjenis array. Bagaimana cara mengisi data dan menampilkannya?
#include <iostream>
#include <iostream>
using namespace std;

struct Buku {
    string judul_buku;
    string pengarang;
    string penerbitan;
    int tebal_halaman;
    double harga_buku;
}; 

Buku bukuArray[2]; // Deklarasi array of struct dengan ukuran 2

int main() {
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            bukuArray[i].judul_buku = "Algoritma dan Struktur Data";
            bukuArray[i].pengarang = "Yunus Prademon";
            bukuArray[i].penerbitan = "Gramedia Pustaka Media";
            bukuArray[i].tebal_halaman = 300;
            bukuArray[i].harga_buku = 120000;
        } else {
            bukuArray[i].judul_buku = "dunia shopie";
            bukuArray[i].pengarang = "Jostein Gaarder";
            bukuArray[i].penerbitan = "Mizan";
            bukuArray[i].tebal_halaman = 800;
            bukuArray[i].harga_buku = 157000;
        }
    }

    // Menampilkan data
    for (int i = 0; i < 2; i++) {
        cout << "Informasi Buku " << i + 1 << endl;
        cout << "Judul: " << bukuArray[i].judul_buku << endl;
        cout << "Pengarang: " << bukuArray[i].pengarang << endl;
        cout << "Penerbit: " << bukuArray[i].penerbitan << endl;
        cout << "tebal halaman: " << bukuArray[i].tebal_halaman << endl;
        cout << "harga: " << bukuArray[i].harga_buku << endl;
    }

    return 0;
}

Output
![alt text](image-3.png)
Untuk mengisi data pada array of struct, kita dapat melakukan iterasi menggunakan loop dan mengisi data pada setiap elemen array. Program ini juga menggunakan array of struct bukuArray dengan ukuran 2, yang berarti dapat menyimpan informasi tentang 2 buku. Kemudian, kita menggunakan loop untuk mengisi data pada setiap elemen array. Setelah itu, kita menampilkan data menggunakan loop lagi. Pada bagian pertama program, menggunakan loop untuk mengisi informasi tentang 2 buku ke dalam array bukuArray. Informasi tentang buku pertama dan kedua diisi secara manual menggunakan kondisi if dan else. Pada bagian kedua program, menggunakan loop lagi untuk menampilkan informasi tentang 2 buku yang telah diisi sebelumnya. Informasi tentang judul, pengarang, penerbit, tebal halaman, dan harga buku ditampilkan menggunakan cout.

Referensi
modul IV struct dan implemetasi.