#include <iostream>
#include <string>

using namespace std;

struct Node {
    string nama;
    int usia;
    Node* next;
};

Node* head = NULL;

void init() {
    head = NULL;
}

bool isEmpty() {
    return head == NULL;
}

void insertDepan(string nama, int usia) {
    Node* baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = head;
    head = baru;
}

void insertBelakang(string nama, int usia) {
    Node* baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;
    if (isEmpty()) {
        head = baru;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = baru;
    }
}

void tampil() {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Nama: " << temp->nama << ", Usia: " << temp->usia << endl;
        temp = temp->next;
    }
}

void hapusDepan() {
    if (!isEmpty()) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void hapusBelakang() {
    if (!isEmpty()) {
        Node* temp = head;
        Node* prev = NULL;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        if (prev != NULL) {
            prev->next = NULL;
        } else {
            head = NULL;
        }
        delete temp;
    }
}

int main() {
    init();
    int pilihan;
    string nama;
    int usia;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tampilkan" << endl;
        cout << "4. Hapus Depan" << endl;
        cout << "5. Hapus Belakang" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama: ";
                cin >> nama;
                cout << "Masukkan usia: ";
                cin >> usia;
                insertDepan(nama, usia);
                break;
            case 2:
                cout << "Masukkan nama: ";
                cin >> nama;
                cout << "Masukkan usia: ";
                cin >> usia;
                insertBelakang(nama, usia);
                break;
            case 3:
                tampil();
                break;
            case 4:
                hapusDepan();
                break;
            case 5:
                hapusBelakang();
                break;
            case 6:
                return 0;
            default:
                cout << "Pilihan tidak valid" << endl;
        }
    }

    return 0;
}