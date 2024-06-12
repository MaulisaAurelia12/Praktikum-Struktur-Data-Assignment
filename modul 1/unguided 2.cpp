#include <iostream>
using namespace std;

class binatang {
public:
    string name;

    binatang(string n) {
        name = n;
    }
};

int main() {
    // contoh binatang dalam kandang
    binatang hewan("kudanil");
    cout << "Nama: " << hewan.name << endl;

    // mengubah hewan dalam kandang
    cout << "Nama : " << hewan.name << endl;

    return 0;
}