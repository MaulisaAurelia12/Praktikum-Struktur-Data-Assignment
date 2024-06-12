#include <iostream>
#include <string>
using namespace std;

int main() {
    // Daftar nama warga
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = 10; // Jumlah warga

    // Algoritma Bubble Sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (names[j] > names[j+1]) {
                swap(names[j], names[j+1]);
            }
        }
    }

    // Menampilkan hasil pengurutan
    cout << "Daftar nama warga setelah diurutkan secara alfabet:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
