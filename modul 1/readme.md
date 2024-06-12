        LAPORAN PRAKTIKUM TIPE DATA
            Maulisa Aurelia Putri

Dasar Teori 
Tipe data adalah klasifikasi data berdasarkan jenis data yang dibutuhkan agar kompiler dapat mengetahui bagamana sebuah data akan digunakan. Tipe data yang dipelajari diantaranya, yaitu:

1. Tipe Data Primitif
adalah tipe data yang sudah ditentukan oleh sistem, tipe data primitif ini memiliki jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada bahasa pemrograman, compiler, dan sistem operasinya. Contoh tipe data primitif:
    a. Int: digunakan untuk menyimpan bilangan bulat
    b. Float: digunakan untuk menyimpan bilangan desimal
    c. Char: digunakan untuk menyimpang data berupa sebuah huruf
    d. Boolean: digunakan untuk menyimpan nilai yang hanya memiliki nilai 0(false) dan 1(true)

GUIDED
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char op;
    float num1, num2;

    // it allows user to enter operator i.e. +, -, *, /
    cout << "Enter operator (+, -, *, /)";
    cin >> op;

    // it allows user to enter the operands
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    //switch statement begins 
    switch (op) {
        // if user enters +
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        // if user enters -
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        // if user enters *
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        // if user enters /
        case '/':
            if (num2 != 0) {
                cout << "Result: " << fixed << setprecision(2) << num1 / num2;
            } else {
                cout << "Result: " << "Error! Division by zero is not allowed.";
            }
            break;
        // if the operator is other than +, -, *, /, error will message will display 
        default:
            cout << "Error! Operator is not correct";
    } // switch statement ends

    return 0;
}

Secara keseluruhan, program diatas ini menjalankan membuat kalkulator sederhana yang menerima masukan dari user untuk operator dan dua buah bilangan, kemudian melakukan kalkulasi dan menampilkan hasil dari perhitungan tersebut. Untuk variabel char digunakan untuk mendeklarasikan karakter untuk menyimpan operator matematika yang dimasukkan oleh user. Adapun float num1, num2, digunakan untuk mendeklarasikan dua variabel floating point untuk menyimpan angka yang diinginkan user unutk melakukan perhitungan.

2. Tipe Data Abstrak (Abstrak Data Tipe/ADT)
merupakan tipe data yang dibentuk oleh programmer itu sendiri dan berisi banyak tipe data.

GUIDED
#include <stdio.h>
#include <string.h>

//struct
struct Mahasiswa
{
    char name[50];
    char address[100];
    int age;
};
int main()
{
//menggunakan struct
struct Mahasiswa mhs1, mhs2;
//mengisi nilai ke struct
strcpy(mhs1.name, "Dian");
strcpy(mhs1.address, "Mataram");
mhs1.age = 22;
strcpy(mhs2.name, "Bambang");
strcpy(mhs2.address, "Surabaya");
mhs2.age = 23;

//cetak isis struct
printf("## Mahasiswa 1 ##\n");
printf("Nama: %s\n", mhs1.name);
printf("Alamat: %s\n", mhs1.address);
printf("Umur: %d\n", mhs1.age);
printf("\n");
printf("## Mahasiswa 2 ##\n");
printf("Nama: %s\n", mhs2.name);
printf("Alamat: %s\n", mhs2.address);
printf("Umur: %d\n", mhs2.age);
return 0;
}

Dalam program diatas, menunjukkan bagaimana cara membuat struktur untuk merepresentasikan seorang siswa, termasuk informasi yang relevan seperti nama, alamat, dan usia. Kemudian mendemonstrasikan bagaimana membuat struktur catatan mahasiswa dan memberikan nilai pada variabel anggotanya. struct Mahsiswa bernama mhs1 dan mhs2 berupakan variabel yang bertindak sebagai struct terpisah dari mahasiswa yang memungkinkan untuk menyimpan informasi bagi mahasiswa yang berbeda.

3. Tipe Data Koleksi (Collection Data Type) 
adalah tipe data yang digunakan untuk mengelompokkan, menyimpan, mengelola, dan mengakses beberapa nilai atau objek secara bersamaan. Tipe data koleksi yang umum digunakan, yaitu:
    a. Array: struktur data statis yang menyimpan elemen dengan tipe data yang sama dan dapat diakses menggunakan indeks.
    b. Vector: Standard Template Library (STL), jika dalam bahasa C++ berbentuk std::. Kemampuan vector terdapat pada jumlah elemen yang dimanis dan dilengkapi fitur-fitur pelengkap seperti element access. iterators, capacity, modifiers.
    c. Map: memiliki indeks yang memungkinkan berupa tipe data selain integer. Pada map, indeks diberi nama "key"

GUIDED
#include <iostream>
#include <array>
using namespace std;

int main() {
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array dengan tab
    cout << "Isi array pertama: " << nilai[0] << endl;
    cout << "Isi array kedua : " << nilai[1] << endl;
    cout << "Isi array ketiga: " << nilai[2] << endl;
    cout << "Isi array keempat: " << nilai[3] << endl;
    cout << "Isi array kelima: " << nilai[4] << endl;

    return 0;
}

Pada kode tersebut, program ini mendemonstrasikan cara membuat sebuah array kemudian menginisialisasi elemen-elemennya dengan nilai dan melakukan iterasi melalui array tersebut untuk mengakses dan mencetak nilai disetiap elemen. int nilai[5]; mendeklarasikan array yang bernama nilai dengan tipe integer yang dapat menampung hingga 5 nilai bilangan bulat. Kode program diatas menggunakan loop untuk mengulang array nilai dan mencetak nilai setiap elemen menggunakan cout. perulangan for dimulai dari indeks 0 dan berlanjut hingga indeks 4. Untuk setiap perulangan, nilai elemen diakses denggunakan nilai[i], dimana i adalah indeks perulangan dan dicetakk bersama dengan pesan deskriptif.

UNGUIDED
1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!
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

Output
![alt text](image.png)
Pada kode program tersebut menggunakan dua fungsi yaitu luas segitiga dan luas lingkaran. Pada fungsi 'luasSegitiga' dipanggil dengan nama 'alas' dan 'tinggi' untuk menghitung luas segitiga. Putpout akan muncul dan disimpan dalam variabel 'luas SegitigaResult'. Adapun fungsi 'luasLingkaran' dipanggil dengan nama 'jariJari' sebagai argumen untuk menghitung luas lingkaran. terakhir untuk return 0 digunakan untuk emngembalikan 0 dari fungsi utama yang memberikan kode program telah berhasil.

Tipe data primitif ini merupakan tipe data yang ditentukan sistem, perbedaan penggunaan bahasa pemrograman terletak pada jumlah bit yang dimasukan untuk setiap bit tergantung pada bahasa pemrograman,compiler dan sistem operasinya. Contoh tipe data primitif adalah: Int(berfungsi untuk menyimpan bilangan bulat), Float(berfungsi untuk menyimpan bilangan desimal), Char(berfungsi untuk menyimpan data berupa sebuah huruf), Boolean(berfungsi untuk menyimpan dua nilai yaitu true dan false).

2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programmnya 
Class :fitur Object Oriented Program (OOP) berfungsi untuk membungkus tipe data di dalamnya sebagai anggota.
Fungsi: Abstraksi(class berfungsi untuk menggabungkan data dan struktur dalam satu kode program),
Inheritance(class yang berfungsi untuk membagikan variabel dan fungsi dari class pertama ke class kedua),
Encapsulation(class yang berfungsi untuk menyembunyikan detail implementasi dan hanya mengekspos metode publik),
Polymorphism(class yang menggunakan metode dengan nama yang sama pada class yang berbeda).
Fungsi dari struct: Value Type(type data yang hanya menyalin objek identik dan tidak berbagi objek dengan struct asli).
#include <iostream>
using namespace std;

class binatang {
public:
    string name;

    binatang(string n) {
        name = n;
    }
};

int main() {
    // contoh binatang dalam kandang
    binatang hewan("kudanil");
    cout << "Nama: " << hewan.name << endl;

    // mengubah hewan dalam kandang
    cout << "Nama : " << hewan.name << endl;

    return 0;
}


struct Mahasiswa
{
    char name[50];
    char address[100];
    int age;
};
int main()
{

struct Mahasiswa mhs1, mhs2;
strcpy(mhs1.name, "Dian");
strcpy(mhs1.address, "Mataram");
mhs1.age = 22;
strcpy(mhs2.name, "Bambang");
strcpy(mhs2.address, "Surabaya");
mhs2.age = 23;

printf("## Mahasiswa 1 ##\n");
printf("Nama: %s\n", mhs1.name);
printf("Alamat: %s\n", mhs1.address);
printf("Umur: %d\n", mhs1.age);
printf("\n");
printf("## Mahasiswa 2 ##\n");
printf("Nama: %s\n", mhs2.name);
printf("Alamat: %s\n", mhs2.address);
printf("Umur: %d\n", mhs2.age);
return 0;
}
Output
![alt text](image-1.png)
Pada program tersebut mendefinisikan sebuah class bernama binatang dengan variabel 'nama' bertipe string. kemudian membuat konstruktor unutk 'binatang' yang mengambil argumen 'string' dan menetapkan dalam variabel 'nama'. Pada variabel 'name' dan 'address' menggunakan tipe char untuk menyimpan nama dan alamat mahasiswa tersebut dan 'age' bertipe integer untuk menyimpan usia. Serta menggunakan printf untuk mencetak output yang diformat untuk setiap mahasiswa mhs1 dan mhs termasuk nama, alamat, dan usia mereka. Kedua fungsi tersebut yaitu class dan struct memiliki tujuan untuk mengelompokkan data yang terkait, namun sedikit berbeda dalam hal syntax dan pendekatan.

3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.
//soal 3
Perbedaan array dengan map:
Array adalah tipe data yang menggunakan indeks(int/angka) dengan tipe data yang sama dan ukuran yang dapat ditentukan saat deklarasi. Sedangkan map merupakan tipe data yang menggunakan indeks(selain integer) dengan tipe yang tidak harus sama dan ukuran dapat berubah/dinamis serta memiliki key yang dapat diberi nama.

#include <iostream>
#include <map>
using namespace std;

int main() {
    // Membuat map dengan key bertipe string dan value bertipe integer
    map<string, int> pendidikan;

    // Menambahkan data ke map
    pendidikan["SD"] = 6;
    pendidikan["SMP"] = 3;

    // Mengakses data dari map
    cout << "'SD' value from pendidikan: " << pendidikan["SD"] << endl;
    cout << "'SMP' value from pendidikan: " << pendidikan["SMP"] << endl;

    // Menggunakan iterator untuk iterasi melalui map
    map<string, int>::iterator it;
    for (it = pendidikan.begin(); it != pendidikan.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    return 0;
}

Kode program ini menunjukkan penggunaan map dalam C++ untuk menyimpan dan mengelola data. Kemampuan untuk memetakan kunci ke nilai dan melakukan iterasi pada data membuat map menjadi alat untuk berbagai tugas manajemen data. map<string, int> pendidikan; mendeklarasikan sebuap map bernama pendidikan yang memetakan kunci string ke nilai integer. 'pendidikan["SD"] = 6;' merepresentasikan seseorang yang menghabiskan waktu 6 tahun dalam sekolah dasar di Indonesia terbasuk untuk 'pendidikan["SMP"] = 3;' dan 'pendidikan["SMA"] = 3;'. Pada looping for ini dimulai dengan iterator it yang menunjukkan ke elemen pertama dalam peta (pendidikan.begin()). Dalam perulangan tersebut, fungsi cout mengambil "key" kemudian it mengakses nilai dan dicetak oleh cout.

Referensi
[1]Informasi, S. (n.d.). Universitas Pamulang. www.unpam.ac.id[2]Oleh, D., Kaswidjanti, W., Si, S., & Kom, M. (n.d.). Algoritma dan Pemrograman Pertemuan Ke-4 Konsep Tipe Data, Operator Dan Identifier.