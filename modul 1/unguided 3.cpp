//soal 3
//perbedaan array dengan map 
//Array adalah tipe data yang menggunakan indeks(int/angka) dengan tipe data yang sama dan ukuran yang dapat ditentukan saat deklarasi.
//sedangkan map merupakan tipe data yang menggunakan indeks(selain integer) dengan tipe yang tidak harus sama dan ukuran dapat berubah/dinamis serta memiliki key yang dapat diberi nama.
//tipe data map

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