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
