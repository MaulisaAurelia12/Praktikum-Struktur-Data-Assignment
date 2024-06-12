#include <iostream>
using namespace std;

long long helper(int n, int acc) {
    if (n == 0) {
        return acc; // basis kasus: 0! = acc
    } else {
        return helper(n - 1, n * acc); // rekursif tidak langsung
    }
}

long long faktorial(int n) {
    return helper(n, 1); // memanggil helper dengan acc = 1
}

int main() {
    int input;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> input;

    if (input < 0) {
        cout << "Input harus bilangan bulat positif!" << endl;
        return 1;
    }

    long long hasil = faktorial(input);
    cout << "Faktorial dari " << input << " adalah " << hasil << endl;

    return 0;
}