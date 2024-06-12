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