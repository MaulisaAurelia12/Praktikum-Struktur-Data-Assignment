#include <iostream>
#include <string>

using namespace std;

struct Node {
    string namaProduk;
    int harga;
    Node* prev;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

void init() {
    head = NULL;
    tail = NULL;
}

bool isEmpty() {
    return head == NULL;
}

void insertDepan(string namaProduk, int harga) {
    Node* baru = new Node;
    baru->namaProduk = namaProduk;
    baru->harga = harga;
    baru->prev = NULL;
    baru->next = head;
    if (head != NULL) {
        head->prev = baru;
    } else {
        tail = baru;
    }
    head = baru;
}

void insertBelakang(string namaProduk, int harga) {
    Node* baru = new Node;
    baru->namaProduk = namaProduk;
    baru->harga = harga;
    baru->prev = tail;
    baru->next = NULL;
    if (tail != NULL) {
        tail->next = baru;
    } else {
        head = baru;
    }
    tail = baru;
}

void insertTengah(string namaProduk, int harga, int posisi) {
    Node* baru = new Node;
    baru->namaProduk = namaProduk;
    baru->harga = harga;
    Node* temp = head;
    int nomor = 1;
    while (nomor < posisi - 1) {
        temp = temp->next;
        nomor++;
    }
    baru->prev = temp;
    baru->next = temp->next;
    temp->next = baru;
    if (baru->next != NULL) {
        baru->next->prev = baru;
    } else {
        tail = baru;
    }
}

void hapusDepan() {
    if (!isEmpty()) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        delete temp;
    }
}

void hapusBelakang() {
    if (!isEmpty()) {
        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        } else {
            head = NULL;
        }
        delete temp;
    }
}

void hapusTengah(int posisi) {
    Node* temp = head;
    int nomor = 1;
    while (nomor < posisi - 1) {
        temp = temp->next;
        nomor++;
    }
    Node* hapus = temp->next;
    temp->next = hapus->next;
    if (hapus->next != NULL) {
        hapus->next->prev = temp;
    } else {
        tail = temp;
    }
    delete hapus;
}

void updateTengah(string namaProduk, int harga, int posisi) {
    Node* temp = head;
    int nomor = 1;
    while (nomor < posisi) {
        temp = temp->next;
        nomor++;
    }
    temp->namaProduk = namaProduk;
    temp->harga = harga;
}

void tampil() {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Nama Produk: " << temp->namaProduk << ", Harga: " << temp->harga << endl;
        temp = temp->next;
    }
}

int main() {
    init();
    int pilihan;
    string namaProduk;
    int harga;
    int posisi;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Hapus Depan" << endl;
        cout << "5. Hapus Belakang" << endl;
        cout << "6. Hapus Tengah" << endl;
        cout << "7. Update Tengah" << endl;
        cout << "8. Tampilkan" << endl;
        cout << "9. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama produk: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                insertDepan(namaProduk, harga);
                break;
            case 2:
                cout << "Masukkan nama produk: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                insertBelakang(namaProduk, harga);
                break;
            case 3:
                cout << "Masukkan nama produk: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                cout << "Masukkan posisi: ";
                cin >> posisi;
                insertTengah(namaProduk, harga, posisi);
                break;
            case 4:
                hapusDepan();
                break;
            case 5:
                hapusBelakang();
                break;
            case 6:
                cout << "Masukkan posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                break;
            case 7:
                cout << "Masukkan nama produk: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                cout << "Masukkan posisi: ";
                cin >> posisi;
                updateTengah(namaProduk, harga, posisi);
                break;
            case 8:
                tampil();
                break;
            case 9:
                cout << "Terima kasih telah menggunakan program ini!" << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }
    return 0;
}