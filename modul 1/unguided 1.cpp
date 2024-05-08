#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char op;
    float num1, num2;

    // pilih rumus bangun datar
    cout << "pilih jenis bangun datar (p: persegi,g: persegi panjang,s: segitiga): ";
    cin >> op;

    // masukan nilai/angka yang akan dioperasikan 
    cout << "Masukan nilai/angka: ";
    cin >> num1 >> num2;

    //masukan rumus-rumus 
    switch (op) {
    //rumus luas persegi panjang
        case 'g':
            cout << "panjang: ";
            cin >> num1;
            cout << "lebar: ";
            cin >> num2;
            cout << "luas persegi panjang adalah: ", num1 * num2;
            break;
    // rumus luas persegi
        case 'p':
            cout << "panjang: ";
            cin >> num1, num2;
            cout << "luas persegi addalah: ", num1 * num1, num2 * num2;
            break;
    // rumus segitiga
        case 's':
            cout << "alasnya: ";
            cin >> num1;
            cout << "tingginya: ";
            cin >> num2;
            cout << "luas segitiga adalah: ", num1 * num2 /2;
            break;
    //jika tidak ada rumus lain selain yang disebutkan, maka akan error
        default:
            cout << "Error! tidak dapat mengoperasikan perhitungan" << endl;
    } // selesai memasukkan pernyataan

    return 0;
}
// Tipe data primitif ini merupakan tipe data yang ditentukan sistem, perbedaan penggunaan bahasa pemrograman terletak pada jumlah bit yang dimasukan untuk setiap bit tergantung pada bahasa pemrograman,compiler dan sistem operasinya.
// Contoh tipe data primitif adalah: Int(berfungsi untuk menyimpan bilangan bulat), Float(berfungsi untuk menyimpan bilangan desimal),
// Char(berfungsi untuk menyimpan data berupa sebuah huruf), Boolean(berfungsi untuk menyimpan dua nilai yaitu true dan false).
