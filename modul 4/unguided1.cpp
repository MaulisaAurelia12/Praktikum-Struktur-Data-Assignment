#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mengurutkan kalimat
void sortString(string& str) {
    int n = str.length();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (str[j] > str[j+1]) {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

// Fungsi untuk mencari huruf menggunakan Binary Search
int binarySearch(string str, char target) {
    int left = 0;
    int right = str.length() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (str[mid] == target) {
            return mid;
        } else if (str[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Huruf tidak ditemukan
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    char huruf;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    sortString(kalimat);

    int index = binarySearch(kalimat, huruf);
    if (index!= -1) {
        cout << "Huruf " << huruf << " ditemukan pada indeks " << index << endl;
    } else {
        cout << "Huruf " << huruf << " tidak ditemukan" << endl;
    }

    return 0;
}