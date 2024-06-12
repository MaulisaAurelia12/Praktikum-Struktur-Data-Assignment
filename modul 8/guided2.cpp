#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1);  // panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // panggilan rekursif tidak langsung
    }
}

int main() {
    functionA(10); // memanggil fungsi functionA dengan parameter 10
    return 0;
}