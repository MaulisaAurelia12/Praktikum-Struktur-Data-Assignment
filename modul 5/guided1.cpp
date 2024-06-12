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