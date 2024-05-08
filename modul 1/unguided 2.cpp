//soal 2
// Class :fitur Object Oriented Program(OOP) berfungsi untuk membungkus tipe data di dalamnya sebagai anggota.
// Fungsi: Abstraksi(class berfungsi untuk menggabungkan data dan struktur dalam satu kode program),
//inheritance(class yang berfungsi untuk membagikan variabel dan fungsi dari class pertama ke class kedua),
//encapsulation(class yang berfungsi untuk menyembunyikan detail implementasi dan hanya mengekspos metode publik),
//polymorphism(class yang menggunakan metode dengan nama yang sama pada class yang berbeda).
//contoh class:

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

//Fungsi dari struct: Value Type(type data yang hanya menyalin objek identik dan tidak berbagi objek dengan struct asli).
// contoh struct:

#include <stdio.h>
#include <string.h>

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