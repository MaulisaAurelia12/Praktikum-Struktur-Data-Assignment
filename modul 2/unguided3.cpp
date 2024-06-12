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
