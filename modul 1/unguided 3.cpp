#include <iostream>
#include <map>
using namespace std;

int main() {
    // Membuat map dengan key bertipe string dan value bertipe integer
    map<string, int> pendidikan;

    // Menambahkan data ke map
    pendidikan["SD"] = 6;
    pendidikan["SMP"] = 3;

    // Mengakses data dari map
    cout << "'SD' value from pendidikan: " << pendidikan["SD"] << endl;
    cout << "'SMP' value from pendidikan: " << pendidikan["SMP"] << endl;

    // Menggunakan iterator untuk iterasi melalui map
    map<string, int>::iterator it;
    for (it = pendidikan.begin(); it != pendidikan.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    return 0;
}