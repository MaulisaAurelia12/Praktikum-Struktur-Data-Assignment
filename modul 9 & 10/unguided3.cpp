#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <functional>

using namespace std;

struct Mahasiswa {
    string NIM;
    int nilai;
};

class HashTable {
private:
    vector<list<Mahasiswa>> table;
    int size;

public:
    HashTable(int size) : size(size) {
        table.resize(size);
    }

    int hashFunction(string NIM) {
        int sum = 0;
        for (char c : NIM) {
            sum += c;
        }
        return sum % size;
    }

    void tambahData(Mahasiswa mahasiswa) {
        int index = hashFunction(mahasiswa.NIM);
        table[index].push_back(mahasiswa);
    }

    void hapusData(string NIM) {
        int index = hashFunction(NIM);
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->NIM == NIM) {
                table[index].erase(it);
                return;
            }
        }
    }

    Mahasiswa* cariDataNIM(string NIM) {
        int index = hashFunction(NIM);
        for (auto& mahasiswa : table[index]) {
            if (mahasiswa.NIM == NIM) {
                return &mahasiswa;
            }
        }
        return nullptr;
    }

    vector<Mahasiswa> cariDataNilai(int min, int max) {
        vector<Mahasiswa> result;
        for (auto& bucket : table) {
            for (auto& mahasiswa : bucket) {
                if (mahasiswa.nilai >= min && mahasiswa.nilai <= max) {
                    result.push_back(mahasiswa);
                }
            }
        }
        return result;
    }

    void tampilData() {
        for (auto& bucket : table) {
            for (auto& mahasiswa : bucket) {
                cout << "NIM: " << mahasiswa.NIM << ", Nilai: " << mahasiswa.nilai << endl;
            }
        }
    }
};

int main() {
    HashTable hashTable(10);

    int pilihan;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambah data baru" << endl;
        cout << "2. Hapus data" << endl;
        cout << "3. Cari data berdasarkan NIM" << endl;
        cout << "4. Cari data berdasarkan rentang nilai" << endl;
        cout << "5. Tampil data" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                Mahasiswa mahasiswa;
                cout << "Masukkan NIM: ";
                cin >> mahasiswa.NIM;
                cout << "Masukkan nilai: ";
                cin >> mahasiswa.nilai;
                hashTable.tambahData(mahasiswa);
                break;
            }
            case 2: {
                string NIM;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                hashTable.hapusData(NIM);
                break;
            }
            case 3: {
                string NIM;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                Mahasiswa* mahasiswa = hashTable.cariDataNIM(NIM);
                if (mahasiswa != nullptr) {
                    cout << "NIM: " << mahasiswa->NIM << ", Nilai: " << mahasiswa->nilai << endl;
                } else {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                int min, max;
                cout << "Masukkan rentang nilai (min - max): ";
                cin >> min >> max;
                vector<Mahasiswa> result = hashTable.cariDataNilai(min, max);
                for (auto& mahasiswa : result) {
                    cout << "NIM: " << mahasiswa.NIM << ", Nilai: " << mahasiswa.nilai << endl;
                }
                break;
            }
            case 5: {
                hashTable.tampilData();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid" << endl;
            }
        }
    }

    return 0;
}