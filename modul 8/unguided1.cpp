#include <iostream>

using namespace std;

long long faktorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * faktorial(n - 1); // rekursif langsung
    }
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