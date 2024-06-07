#include <iostream>
#include <iomanip>
using namespace std;

void selection_sort(string & word) {
    for (int i = 0; i < word.length() - 1; i++) {
        int min_index = i;
        for (int j = i +1; j < word.length(); j++) {
            if (word[j] < word[min_index]) {
                min_index = j;
            }
        }
        char temp = word[i];
        word[i] = word[min_index];
        word[min_index] = temp;
    }
}

int binary_search(string word, char cari) {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = word.length() - 1;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (word[tengah] == cari) {
            b_flag = 1;
            break;
        } else if (word[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if (b_flag == 1) {
        return tengah;
    } else {
        return -1;
    }
}

int main() {
    string word;
    char cari;
    int hasil;

    cout << "masukkan kata: ";
    cin >> word;
    cout << "masukkan huruf yang ingin dicari: ";
    cin >> cari;
    selection_sort(word);
    cout << "huruf setelah diurutkan: " << word << endl;

    if (hasil != -1) {
        cout << "huruf" << cari << "ditemukan di indeks yang ke-" << binary_search << endl;
    } else {
        cout << "huruf" << cari << "tidak ditemukan";
    }
    cout << endl;

    return 0;
}