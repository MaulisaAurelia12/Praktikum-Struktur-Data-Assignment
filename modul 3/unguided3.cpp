#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan n: ";
    cin >> n;

    string characters[n];

    cout << "Masukkan " << n << " karakter:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Karakter ke-" << i+1 << ": ";
        cin >> characters[i];
    }

    cout << "Urutan karakter sebelum sorting: ";
    for (int i = 0; i < n; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    sort(characters, characters + n);
    cout << "Urutan karakter setelah ascending sort: ";
    for (int i = 0; i < n; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    sort(characters, characters + n, greater<string>());

    cout << "Urutan karakter setelah descending sort: ";
    for (int i = 0; i < n; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    return 0;
}
