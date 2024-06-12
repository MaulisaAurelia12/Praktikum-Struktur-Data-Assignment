#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku;
}; 

Buku bukuku;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "Informasi Buku" << i + 1 << endl;
        cout << "Judul: ";
        getline(cin, bukuku.judul_buku);
        cout << "Pengarang: ";
        getline(cin, bukuku.pengarang);
        cout << "Penerbit: ";
        getline(cin, bukuku.penerbit);
        cout << "Tebal halaman: ";
        cin >> bukuku.tebal_halaman;
        cout << "Harga: ";
        cin >> bukuku.harga_buku;
    }
    //menampilkan data
    for (int i = 0; i < 5; i++) {
        cout << "Informasi Buku" << i + 1 << endl;
        cout << "Judul: " << bukuku.judul_buku << endl;
        cout << "Pengarang: " << bukuku.pengarang << endl;
        cout << "Penerbit: " << bukuku.penerbit << endl;
        cout << "Tebal halaman: " << bukuku.tebal_halaman << endl;
        cout << "Harga: " << bukuku.harga_buku << endl;
    }

    return 0;
}