#include <iostream>
using namespace std;

//kode ini berfungsi untuk melakukan hitung mundur dari angka yang diinputkan
void countdown (int n) {
    if (n == 0) {
        return 0;
    }
    cout << n << " ";
    countdown (n - 1);
}

int main() {
    cout << "rekursif langsung: ";
    countdown(5);  //5 merupakan inputnya
    cout << endl;
    return 0;
}