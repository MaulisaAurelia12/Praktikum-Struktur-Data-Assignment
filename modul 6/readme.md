        LAPORAN PRAKTIKUM LINKED LIST
            Maulisa Aurelia Putri

Dasar Teori
Linked List merupakan metode yang digunakan untuk mengorganisasi struktur data dalam sebuah sistem. Keunggulan dari linked list dibanding dengan array yaitu dalam hal menambahkan dan mengurangi elemennya. Urutan operand dan operator sangat diperhatikan agar dapat melakukan kalkulasi aritmatika dengan benar terutama untuk operasi yang tidak bersifat komutatif maupun asosiatif. Elemen data yang dihubungkan dengan link dan linked list disebut node dan suatu linked list terdapat istilah head dan tail. Adapun jenis linked list, yaitu:
1. Single Linked List (Senarai Berantai Searah)
Jenis linked liat ini mempunyai pointer ke simpul berikutnya, tetapi tidak memiliki pointer ke simpul sebelumnya. Pencarian hanya dapat dilakukan dari awal sampai akhir. Pada struktur datanya ringan karena hanya memerlukan saru referensi per simpul. Namun, mencari elemen tertentu memerlukan melintasi seluruh linked list dari awal hingga elemen yang diinginkan. Contohnya daftar nama belanja dan daftar nama.

2. Double Linked List (Senarai Berantai dua Arah)
Jenis ini mempunyai pointer ke simpul berikutnya dan sebelumnya. Pencarian yang dapat dilakukan dari awal ke akhir dan akhir ke awal. Kemampuan linked list ini untuk melintasi linked list maju dan mundur dengan mudah. Namun, dalam melintasi memerlukan lebih banyak ruang memori karena setiap simpul harus menyimpan dua referensi. Contohnya daftar putas lagu, dll.

3. Circular Linked List (Senarai berantai Melingkar)
Pada linked list ini mempunyai pointer ke simpul berikutnya, tetapi simpul terakhir menunjukkan ke simpul pertama. Pencarian dapat berputar terus menerus tanpa perlu mengubah referensi. Namun, putaran ini memerlukan pencarian melalui elemen sebelumnya untuk mengakses data sehingga akses elemen membutuhkan waktu lebih lama.

4. Circular Doubly Linked List 
Jenis ini mirip dengan circular linked list, yang membedakkanya terdapat di bagian pointer ke simpul berikutnya dan sebelumnya serta simpul terakhir menunjuk ke simpul pertama. Pencarian ini juga dapat berputar terus menerus tanpa perlu mengubah referensi dan dapat dilakukan dari awal ke akhir dan akhir ke awal dengan mudah. Namun, memerlukan lebih banyak ruang memori karena setiap simpul harus menyimpan tiga referensi.

GUIDED 1
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}

Pada bagian struct node, digunakan untuk mendefinisikan j=node dalam linked list. Node ini memiliki dua komponen, yaitu 'data' untuk menyimpan nilai integer dan 'next' untuk emnyimpan pointer ke node berikutnya. Fungsi dalam single linked list ini memiliki beberapa kegunaan untuk mengoperasikan program, diantaranya:
    a. init() = inisialisasi linked list dengan mengatur 'head' dan 'tail' menjadi NULL
    b. isEmpty() = untuk memeriksa apakah linked list tersebut kosong atau tidak
    c. insertDepan() = untuk menambahkan node baru di bagian depan
    d. insertBelakang() = untuk menambahkan node baru dibagian belakang
    e. insertTengah() = untuk menambahkan node baru dibagian tengah pada posisi tertentu
    f. hitungList() = untuk menghitung jumlah node dalam linked list
    g. hapusDepan() = menghapus node dibagian depan
    h. hapusBelakang() = untuk menghapus bagian belakang linkede list
    i. hapusTengah() = untuk menghapus node dibagian tengah
    j. ubahDepan() = mengubah nilai node dibagian depan linked list
    k. ubahTengah() = untuk memngubah nilai node ditengah pada posisi tertentu
    l. clearList() = untuk menghapus semua node dalam linked list
    m. tampil() = untuk emnampilkan nilai semua node.

GUIDED 2
#include <iostream>
using namespace std;

class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}

Pada kelas node merepresentasikan simpul unggal dalam daftar double linked list. Kelas ini memiliki tiga anggota, yaitu:
    a. 'data' = merupakan sebuah integer untuk menyimpan nilai data
    b. 'prev' = sebagai petunjuk ke simpul sebelumnya dalam daftar
    c. 'next' = petunjuk ke simpul berikutnya dalam daftar.
Selain itu, pada doubly linked llist sendiri memiliki beberapa anggota, diantaranya:
    a. 'head' = sebagai petunjuk ke simpul pertama dalam daftar
    b. 'tail' = sebagai petunjuk ke simpul terakhit dalam daftar
    c. 'push(int data)' = metode untuk menmambahkan simpul baru ke bagian depan daftar
    d. 'pop()' = metode untuk menghapus simpul pertama dari daftar
    e. 'update(int oldData, int newData)' = metode untuk memperbarui nilai data dari sebuah node 
    f. 'deleteAll()' = untuk menghapus semua node dalam daftar
    g. 'display()' = untuk menampilkan nilai data dari semua node dalam daftar
Program ini menggunakan perulangan while untuk menapilkan menu secara berulang-ulang dan memproses input user sampai user memilih untuk keluar.

UNGUIDED
1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan nama dan usia mahasiswa dengan menggunakan inputan dari user.
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

Program ini menggunakan struct Node untuk menyimpan nama dan usia mahasiswa, serta pointer head untuk menyimpan alamat node pertama dalam linked list. Fungsi init() digunakan untuk menginisialisasi linked list dengan mengatur head menjadi NULL. Fungsi isEmpty() digunakan untuk mengecek apakah linked list kosong atau tidak. Fungsi insertDepan() dan insertBelakang() digunakan untuk menambahkan node baru di depan dan belakang linked list, respectively. Fungsi tampil() digunakan untuk menampilkan semua node dalam linked list. Fungsi hapusDepan() dan hapusBelakang() digunakan untuk menghapus node di depan dan belakang linked list. Dalam fungsi main(), program menggunakan menu untuk memilih operasi yang ingin dilakukan. User dapat memilih untuk menambahkan node, menampilkan node, menghapus node, atau keluar dari program

2. Modifikasi Guided Doubly Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus dan update ditengah/diurutkan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan nama produk dan harga.
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

Pada fungsi insertDepan(), 'case 1' merupakan pilihan menu untuk menambahkan node baru didepan linked list. insertBelakang() digunakan untuk menambahkan node baru di belakang linked list dengan nam produk dan harga yang telah diinput oleh user. Fungsi hapusDepan(), hapusBelakang(), hapusTengah(), digunakan untuk menghapus node baik dibagian depan, belakang, ataupun tengah pada posisi tertentu. 
Referensi
[1]Ulum, M. B., Kom, S., & Kom, M. (n.d.). Modul Kuliah Struktur Data Linked List. [2]Wijaya, H., Sukmo Wardhono, W., & Arwani, I. (2018). Implementasi Linked List pada Interaksi Antar Marker Augmented Reality untuk Operand dan Operator Aritmetika (Vol. 2, Issue 9). http://j-ptiik.ub.ac.id. [3]Nayana Joshi, Nisha Satpute, Komal Walgude, Dhanashri Korpad, & Eeshwari Ransing. (2024). Linked List Data Structure and Library Management System. International Research Journal on Advanced Engineering and Management (IRJAEM), 2(05), 1515–1521. https://doi.org/10.47392/IRJAEM.2024.0205. [4]Okolie, S., Kuyoro, S. O., Aderonke, A., Samuel, O., & Shade, K. ’. (2013). Journal of Emerging Trends in Computing and Information Sciences The S-Linked List-A Variant Of The Linked List Data Structure. 4(6). http://www.cisjournal.org. [5]Teixeira, M., Pereira, L., Amaro, R., & Cheng, L. (2023, December 4). Fast Point-To-Mesh Distance Computation Technique Based On Cell Linked List For Polygon-Wall Boundary In Moving Particle Semi-Implicit Method. https://doi.org/10.23967/c.particles.2023.036