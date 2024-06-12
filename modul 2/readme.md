        LAPORAN PRAKTIKUM ARRAY
         Maulisa Aurelia Putri

Dasar Teori
Array adalah struktur data yang menyimpan data-data bertipe sama dalam urutan tertentu. array dapat dianalogikan sebagai sebuah loker yang memiliki sederetan kotak penyimpanan yang diberi nomor berurutan. Data-data dalam array disebur elemen array. Dengan array, setiap elemen bisa diakses langsung melalui indeksnya. Kelebihan array lainnya adalah kita bisa memakai sejumlah variabel dengan nama yang sama asalkan variabelnya dalam indeks yang berbeda. Karakteristik array, yaitu:
    a. mempunyai batasan dari pemesanan lokasi memori (bersifat statis)
    b. mempunyai tipe data sama (bersifat homogen)
Terdapat tiga hal dalam mendeklarasikan array, yaitu type data array, nama variabel array, dan subkrip/index array. Jenis-jenis array:

1. Array berdimensi satu
adalah tipe data variabel yang terdiri dari kumpulan data dengan tipe sama yang disusun dalam satu baris/dimensi. Setiap elemen dalam array memiliki sebuah index(nomor yang digunakan untuk mengakses elemen tersebut). Contohnya yaitu array yang berisi bilangan bulat yang memiliki lima elemen dan indeks nya dimulai dari 0.
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {9, 3, 5, 2, 1};
    cout << arr[1] << endl;
    cout << arr[4];
}

2. Array berdimensi dua
adalah variabel yang terdiri dari kumpulan array berdimensi satu dan disusun dalam baris dan kolom. Setiap elemen memiliki dua indeks, yaitu indeks baris yang menunjukkan posisi elemen dalam baris dan indeks kolom menunjukkan posisi elemen dalam kolom.
#include <iostream>
using namespace std;
int main() {
    int arr[2][2] = {{3, 2}, {2, 5}};
    for (int i = 0; i < 2; i++) {   //untuk baris
        for (int j = 0; j < 2; j++) { //untuk kolom
            cout << arr[i][j] << endl;
        };
        cout << endl;
    };
} 

3. Array multidimensi
adalah array yang memiliki kapasitas memori lebih besar dari array berdimensi satu dan dua. Array ini digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau lebih indeks.
#include <iostream>
using namespace std;
int main() {
    int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}, {8, 5, 2}, {9, 2, 7}}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                cout << arr[i][j][k] << endl;
            };
            cout << endl;
        };
        cout << endl;
    };
}

Contoh array empat dimensi
int arr [3][2][4][4];
Contoh array lima dimensi
int arr [2][4][4][3][3];

GUIDED 1
#include <iostream> 
using namespace std;
//PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    //deklarasi array
    int arr [2][3][3];
    //input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input array[" << x << "] [" << y << "] [" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    //Output array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data array[" << x << "] [" << y << "] [" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    //tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}

Program tersebut memiliki 2 irisan dengan jumlah 3 baris dan kolom disetiap irisannya. perulangan dengan nested loop ini mengulang semua elemen yang ada dalam array. Didalam loop, cout meminta user untuk memasukkan nilai dalam elemen array tersebut. Struktur for ini menggunakan cout untuk mencetak nilai elemen bersamaan dengan indeks yang sesuai. 

GUIDED 2
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukan panjang array: ";
    cinn >> a;
    int array[a];
    cout << "Masukan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai Maksimum adalah " << maks << "berada di Array ke " << lokasi << endl;
}

Pada bagian int maks medeklarasikan 4 varibel bilangan bulat dan variabel ini menyimpan maksimum yang ditemukan dalam larik. Untuk mendeklarasikan sebuah integer dalam array digunakan fungsi int array[a]; dengan ukuran a ditentukan oleh user input. Pada perulangan for dari elemen kedua (i = 1) hingga elemen terakhir (i < a). Jika elemen pada arr[i] bersifat TRUE lebih besar dari maksimum saat ini, maka terdapat permbaruan nilai max dan lokasi dari elemen maksimum yang baru. 

UNGUIDED
1. Buatlah program untuk menampilkan output seperti berikut dengan data yang diinput oleh user!
Data Array : 1 2 3 4 5 6 7 8 9 10
Nomor Genap : 2, 4, 6, 8, 10
Nomor Ganjil : 1, 3, 5, 7, 9
#include <iostream>

using namespace std;

int main() {
    int arr[10]; 
    int genap[10]; 
    int ganjil[10]; 
    int nGenap = 0; 
    int nGanjil = 0; 

    // input data array dari user
    cout << "Masukkan data array (10 elemen): ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // proses data array untuk memisahkan nomor genap dan ganjil
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) { // jika nomor genap
            genap[nGenap] = arr[i];
            nGenap++;
        } else { // jika nomor ganjil
            ganjil[nGanjil] = arr[i];
            nGanjil++;
        }
    }

    // tampilkan output
    cout << "Data Array : ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < nGenap; i++) {
        cout << genap[i] << ", ";
    }
    cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < nGanjil; i++) {
        cout << ganjil[i] << ", ";
    }
    cout << endl;

    return 0;
}

Output
![alt text](image.png)
Dalam program tersebut, akan meminta user untuk memasukkan 10 elemen data dari array yang kemudian memproses data tersebut untuk memisahkan nomor ganjil dan genap. Variabel yang dideklarasikan oleh genap dan ganjil serta nGenap nGanjil bersifat integer. Selain itu, pada bagian cout << "masukkan data array: " meminta user untuk input bilangan integer dan menyimpannya dalam array menggunakan perulangan for. Jika elemen genap, maka elemen tersebut akan disimpan dalam array genap begitu pula sebaliknya. Sehingga pada fungsi main() ini berisi semua kode untuk input dan pemrosesan dan output dan pernyataan return 0 yang mengindikasikan hasil output program telah berhasil.

2. Buatlah program input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array 3D (x y z): ";
    cin >> x >> y >> z;

    // Deklarasi array 3D
    int arr[x][y][z];

    // Meminta pengguna untuk memasukkan nilai-nilai elemen array
    cout << "Masukkan nilai-nilai elemen array:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan isi array
    cout << "Isi array 3D:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}

Output
![alt text](image-1.png)
Kode tersebut merupakan program input array 3 dimensi yang dimana variabel x, y, z bersifat integer untuk menyimpan ukuran array disetiap dimensi yang akan menentukan berapa banyak elemen yang dapat ditampung oleh array dari setiap direktori. pada fungsi arr bertipw integer dengan dimensi x, y, z, ini akan menyimpan nilai input dari user. Penggunaan nested-loop juga digunakan dalam program ini pada bagian perulangan for i++, j++, k++ sehingga didalam perulangan meminta user untuk memasukkan nilai setiap elemen indeks array dan menyimpan di posisi yang sesuai dari array tersebut.

3. Buatlah program menu untuk mencari nilai maksimum, minimum, dan nilai rata-rata dari suatu array dengan input yang dimasukkan oleh user!
#include <iostream>
using namespace std;

int main() {
    int n; // Ukuran array
    int arr[100]; // Array dengan ukuran maksimum 100

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array (maksimum 100): ";
    cin >> n;

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    // Menu
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Cari nilai maksimum\n";
        cout << "2. Cari nilai minimum\n";
        cout << "3. Cari nilai rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Mencari nilai maksimum
                int max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                cout << "Nilai maksimum: " << max << endl;
                break;
            }
            case 2: {
                // Mencari nilai minimum
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai minimum: " << min << endl;
                break;
            }
            case 3: {
                // Mencari nilai rata-rata
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                double avg = static_cast<double>(sum) / n;
                cout << "Nilai rata-rata: " << avg << endl;
                break;
            }
            case 4: {
                cout << "Terima kasih telah menggunakan program ini.\n";
                break;
            }
            default: {
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
            }
        }
    } while (choice != 4);

    return 0;
}

Output
![alt text](image-2.png)
![alt text](image-3.png)
![alt text](image-4.png)
Kode program ditas memungkinkan untuk user memasukan elemen dan melakukan berbagai operasi. Pada fungsi int n merupakan variabel integer untuk menyimpan ukuran array yang ditentukan user sehingga menunjukkan berapa banyak elemen yang dapat ditampung oleh array, kemudian int arr dengan ukuran penyimpanan nilai input user sebanyak 100. Perulangan for yang mengulang sebanyak n kali juga merupakan ukuran dari array.

KESIMPULAN
Array merupakan kumpulan tipe data dalam suatu program yang digunakan dalam pengelompokan dan struktur data. Array memiliki fungsi sebagai wadah berkumpulnya tipe data yang sama namu dengan elemen yang berbeda. Array memiliki dimensi yang dibedakan menjadi: array berdimensi satu, array berdimensi dua, dan array berdimensi tiga(multi). Array sing digunakan bersamaan dengan looping untuk mempercepat proses entri data.

Referensi
[1]Jurnal, L., Maerani, R., Suryono, T. J., Santoso, S., Subekti, M., Teknologi, P., Keselamatan, D., Nuklir, R., Puspiptek, K., Gd, S., Selatan, T., & Artikel, R. (2020). Jurnal Pengembangan Energi Nuklir Kajian Implementasi Field Programmable Gate Array untuk Rencana Modernisasi Sistem Proteksi Reaktor INFORMASI ARTIKEL ABSTRAK. In Jurnal Pengembangan Energi Nuklir (Vol. 22, Issue 2). [2]Marlina, L. (2023). PENGEMBANGAN SISTEM ARRAY DALAM MENENTUKAN NILAI RATA-RATA TINGGI BADAN. [3]tipe data larik (array). (n.d.).