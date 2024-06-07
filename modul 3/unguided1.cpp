#include <iostream>
using namespace std;

int main() {
    // Data IPS mahasiswa
    double ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = 5; // Jumlah mahasiswa

    // Algoritma Selection Sort
    for (int i = 0; i < n-1; i++) {
        int max_idx = i;
        for (int j = i+1; j < n; j++) {
            if (ips[j] > ips[max_idx]) {
                max_idx = j;
            }
        }
        swap(ips[i], ips[max_idx]);
    }

    // Menampilkan hasil pengurutan
    cout << "IPS mahasiswa setelah diurutkan (dari terbesar ke terkecil):" << endl;
    for (int i = 0; i < n; i++) {
        cout << ips[i] << " ";
    }
    cout << endl;

    return 0;
}
