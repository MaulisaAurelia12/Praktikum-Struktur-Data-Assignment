#include <iostream>

using namespace std;

// Fungsi untuk menghitung luas segitiga
float luasSegitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

// Fungsi untuk menghitung luas lingkaran
float luasLingkaran(float jariJari) {
    const float phi = 3.14;
    return phi * jariJari * jariJari;
}

int main() {
    float alas, tinggi, jariJari;

    cout << "Masukkan alas segitiga: ";
    cin >> alas;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;

    float luasSegitigaResult = luasSegitiga(alas, tinggi);
    float luasLingkaranResult = luasLingkaran(jariJari);

    cout << "Luas segitiga: " << luasSegitigaResult << endl;
    cout << "Luas lingkaran: " << luasLingkaranResult << endl;

    return 0;
}