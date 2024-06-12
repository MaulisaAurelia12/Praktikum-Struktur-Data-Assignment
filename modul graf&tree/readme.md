# LAPORAN PRAKTIKUM GRAPH & TREE #
#   Maulisa Aurelia Putri   #

# Dasar Teori
# 1. Graph
Adalah struktur data yang digunakan untuk merepresentasikan hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk sisi(edge). Node mewakili objek atau intetitas, sementara sisi mewakili hubungan atau koneksi diantara node-node tersebut. Graph digunakan untuk merepresentasikan berbagai jenis informasi, seperti jaringan sosial, peta, atau hubungan antar konsep. Adapun jenis-jenis graph, diantaranya:
a. graph berarah(directed graph) = sis memiliki arah yang ditandai dengan tanda panah. Arah ini menentukan alur atau urutan hubungan antar node. 
b. graph tidak berarah (undirected graph) = sisi-sisi hanya menunjukkan koneksi tanpa arah yang spesifik. Hubungan antar node bersifat dua arah.
c. graph berbobot (weighted graph) = memiliki sisi-sisi yang diberi bobot atau nilai numerik yang dapat mewakili jarak, biaya, waktu, atau informasi lainnya tentang hubungan antar node.
d. graph tidak berbobot (unweighted graph) = sisi-sisi hanya menunjukkan ada atau tidaknya koneksi antar node tanpa memberikan informasi tambahan.

# 2. Tree
Adalah struktur data hierarkis yang terdiri dari node-node yang terhubung oleh sis. Salah satu node yang ditunjuk sebagai node akar (root) dan node-node lain terhubung ke root secara tidak langsung melalui cabang-cabang (edge). Karakteristik dari tree, yaitu:
a. tidak mengandung siklus (acyclic)
b. setiap node kecuali root memiliki tepat satu parent
c. terdapat satu dan hanya satu path antara root dan setiap node. Implementasi dalam tree seperti penyimpanan dan navigasi file pada sistem operasi, representasi struktur organisasi dan hierarki, dll. Adapun jenis-jenis tree, yaitu:
a. Binary tree = tree dimana setiap node memiliki maksimal dua anak (kiri dan kanan). Binary tree memiliki banyak variasi dan digunakan secara luas dalam implementasi struktur data dan algoritma.
b. AVL Tree = binary tree yang self-balancing, dimana tinggi subtree kiri dan kanan dari setiap node tidak berbeda lebih dari 1. Ini memastikan efisiensi operasi pencarian, penyisipan, dan penghapusan.
c. B-Tree = struktur tree yang dioptimalkan untuk penyimpanan data pada disk. Setiap node dapat menyimpan lebih dari dua anak yang memungkinkan pencarian dan penyimpanan data yang efisien pada volume data yang besar.

# GUIDED
# 1. Graph
    #include <iostream>
    #include <iomanip>
    using namespace std;

    string simpul[7] = {"Cimahi",
                        "Bandung",
                        "Bekasi",
                        "Tasikmalaya",
                        "Cianjur",
                        "Purwokerto",
                        "Yogyakarta"};

    int busur[7][7] = {
        {0, 7, 8, 0, 0, 0, 0},
        {0, 0, 5, 0, 9, 15, 0},
        {0, 5, 0, 9, 5, 0, 0},
        {0, 0, 0, 2, 4, 0, 8},
        {3, 0, 0, 1, 0, 0, 0},
        {0, 0, 7, 0, 0, 9, 4},
        {0, 0, 0, 0, 8, 0, 0},
    };

    void tampilGraph() {
        for (int baris = 0; baris < 7; baris++) {
            cout << simpul[baris] << ": ";
            for (int kolom = 0; kolom < 7; kolom++) {
                if (busur[baris][kolom] != 0)
                cout << " -> " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
            }
            cout << endl;
        }
    }

    int main() {
        tampilGraph();
        return 0;
    }

Program ini menampilkan graph yang merepresentasikan kota-kota di Jawa Barat dan Jawa Tengah serta jarak antar kota tersebut. Adapun fungsi yang digunakan, diantaranya:
a. array `simpul` berisi nama-nama kota yang ada dalam graf
b. array `busur` berisi matriks yang merepresentasikan jarak antar kota. Nilai 0 pada matriks ini berarti tidak ada jalan langsung antar kota 
c. Fungsi `tampilGraph` digunakan untuk menampilkan graf tersebut. Fungsi ini akan menggunakan loop untuk mengakses setiap baris dan kolom dalam array dan mencetak nama kota dan jarak antar kota yang ada dalam graph.
d. Fungsi `main` akan memanggil fungsi `tampilGraph` untuk menampilkan graf tersebut.

# 2. Tree
    #include <iostream>
    using namespace std;

    //definisi struct pohon
    struct pohon {
        pohon * kanan;
        char data;
        pohon * kiri;
    };

    //deklarasi variabel global 
    pohon * simpul;
    pohon * root;
    pohon * saatini;
    pohon * helperA;
    pohon * helperB;
    pohon * alamat[256];

    //fungsi untuk inisialisasi root
    void inisialisasi() {
        root = NULL;
    }

    //fungsi untuk membuat simpul baru
    void simpulBaru(char dataMasukkan) {
        simpul = new pohon;
        simpul -> data = dataMasukkan;
        simpul -> kanan = NULL;
        simpul -> kiri = NULL;
    }

    //fungsi untuk membuat simpul akar
    void simpulAkar() {
        if (root == NULL) {
            char dataAnda;
            cout << "silahkan masukan data: ";
            cin >> dataAnda;
            simpulBaru(dataAnda);
            root = simpul;
            cout << "root terbentuk..." << endl;
        } else {
            cout << "root sudah ada..." << endl;
        }
    }
    // fungsi untuk menambah simpul 
    void tambahSimpul() {
        if (root != NULL) {
            int i = 1, j = 1, penanda = 0;
            char dataUser;
            alamat[i] = root;

            while (penanda == 0 && j < 256) {
                cout << "masukkan data kiri: ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatini = alamat[i];
                    saatini -> kiri = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
                if (penanda == 0) {
                    cout << "masukkan data kanan: ";
                    cin >> dataUser;
                    if (dataUser != '0') {
                        simpulBaru(dataUser);
                        saatini = alamat[i];
                        saatini -> kanan = simpul;
                        j++;
                        alamat[j] = NULL;
                    }
                }
                i++;
            }
        }
    }

    //fungsi untuk membaca pohon
    void bacaPohon() {
        if (root != NULL) {
            int i = 1, n = 1, pencacah = 0;
            cout << endl;
            while (alamat[i] != NULL) {
                saatini = alamat[i];
                cout << saatini -> data << " ";
                pencacah++;
                if (pencacah == n) {
                    cout << endl;
                    pencacah = 0;
                    n = n*2;
                }
                i++;
            }
        }
    }

    //fungsi utama
    int main() {
        inisialisasi();
        simpulAkar();
        tambahSimpul();
        bacaPohon();
        return 0;
    }

struktur `pohon` digunakan untuk merepresentasikan simpul dalam tree. setiap simpul memiliki tiga komponen yaitu `kanan` untuk mengarah ke simpul anak kanan, `data` untuk menyimpan nilai simpul, dan `kiri` untuk mengarah ke simpul anak kiri. Pada variabel `simpul`, `root`, `saatini`, `helperA`, `helperB`, dan `alamat` digunakan untuk menyimpan alamat simpul-simpul dalam tree. Fungsi `inisialisasi` digunakan untuk menginisialisasi root pohon menjadi NULL. Fungsi `tambahSimpul` digunakan untuk menambah simpul-simpul baru ke dalam pohon dan meminta user untuk memasukkan nilai simpul kiri dan kanan untuk setiap simpul. Fungsi `bacaPohon` digunakan untuk membaca dan mencetak nilai-nilai simpul dalam pohon.

# UNGUIDED
# 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya. 
    #include <iostream>
    #include <iomanip>
    #include <vector>
    #include <algorithm>

    using namespace std;

    // Deklarasi struktur data untuk menyimpan informasi kota dan jarak
    struct Kota {
    string nama;
    vector<pair<string, int>> tetangga; // Vektor untuk menyimpan kota tetangga dan jaraknya
    };

    // Fungsi untuk menampilkan informasi kota
    void tampilKota(const Kota& kota) {
    cout << "Nama Kota: " << kota.nama << endl;
    cout << "Kota Tetangga dan Jarak: " << endl;
    for (const auto& tetangga : kota.tetangga) {
        cout << "  - " << tetangga.first << " (" << tetangga.second << " km)" << endl;
    }
    cout << "Nama: Maulisa Aurelia Putri" << endl;
    cout << "NIM: 2311110035 << endl;
    }

    // Fungsi untuk mencari jarak antar kota
    int cariJarak(const vector<Kota>& kotaList, string kotaAwal, string kotaTujuan) {
    // Mencari indeks kota awal dan kota tujuan
    int indexAwal = -1, indexTujuan = -1;
    for (int i = 0; i < kotaList.size(); i++) {
        if (kotaList[i].nama == kotaAwal) {
        indexAwal = i;
        }
        if (kotaList[i].nama == kotaTujuan) {
        indexTujuan = i;
        }
    }

    // Memeriksa apakah kota awal dan kota tujuan valid
    if (indexAwal == -1 || indexTujuan == -1) {
        return -1; // Menandakan kota tidak ditemukan
    }

    // Algoritma pencarian jalur terpendek (misalnya BFS atau Dijkstra)
    // ... (implementasikan algoritma pencarian sesuai kebutuhan)

    // Mengembalikan jarak antar kota
    return jarakAntarKota; // Ganti dengan jarak yang diperoleh dari algoritma
    }

    int main() {
    // Deklarasi vektor untuk menyimpan data kota
    vector<Kota> kotaList;

    // Input data kota dan tetangganya
    cout << "Masukkan data kota dan tetangganya: " << endl;
    int jumlahKota;
    cin >> jumlahKota;

    for (int i = 0; i < jumlahKota; i++) {
        Kota kota;
        cout << "Kota ke-" << i + 1 << ": ";
        cin >> kota.nama;

        int jumlahTetangga;
        cout << "Jumlah tetangga: ";
        cin >> jumlahTetangga;

        for (int j = 0; j < jumlahTetangga; j++) {
        string namaTetangga;
        int jarak;
        cout << "Tetangga ke-" << j + 1 << ": ";
        cin >> namaTetangga;
        cout << "Jarak (km): ";
        cin >> jarak;

        kota.tetangga.push_back({namaTetangga, jarak});
        }

        kotaList.push_back(kota);
    }

    // Tampilkan informasi kota
    for (const Kota& kota : kotaList) {
        tampilKota(kota);
        cout << endl;
    }

    // Hitung jarak antar kota berdasarkan input user
    while (true) {
        cout << "\nHitung jarak antar kota: " << endl;
        cout << "Kota awal: ";
        string kotaAwal;
        cin >> kotaAwal;

        cout << "Kota tujuan: ";
        string kotaTujuan;
        cin >> kotaTujuan;

        int jarak = cariJarak(kotaList, kotaAwal, kotaTujuan);
        if (jarak == -1) {
        cout << "Kota tidak ditemukan!" << endl;
        } else {
        cout << "Jarak dari " << kotaAwal << " ke " << kotaTujuan << " adalah " << jarak << " km." << endl;
        }

        cout << "\nHitung lagi? (y/n): ";
        char pilihan;
        cin >> pilihan;
        if (pilihan != 'y') {
        break;
        }
    }

    return 0;
    }

Program ini bekerja dengan cara menghitung jarak terpendek dari kota awal ke kota tujuan dengan emnggunakan prioritas kota berdasarkan jarak. Proses ini dilakukan dengan menggunakan vektor prioritas yang memprioritaskan kota berdasarkan jarak. Adapun fungsi yang digunakan, yaitu:
a. tampilKota = digunakan untuk menampilkan informasi kota, termasuk nama kota dan kota tentangga serta jaraknya.
b. cariJarak = digunakan untuk mencari jarak antar kota. fungsi ini juga memerlukan input berupa nama kota awal, tujuan serta daftar kota dan tetangganya.
c. fungsi utama `main()` = digunakan untuk mengatur jalnnya program dengan memanggil fungsi `tampilKota` untuk menampilkan informasi kota dan fungsi `cariJarak` untuk mencari jarak antar kota.
program ini digunakan untuk membungkus program menjadi bagian-bagian kecil dan memudahkan penggunaan kembali. Fungsi juga digunakan untuk mengatur jalnnya program dan memproses data. 

# 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, in-order, dan post-order!
    #include <iostream>
    #include <string>

    using namespace std;

    struct Node {
        char data;
        Node* left;
        Node* right;
    };

    Node* root = NULL;

    void insertNode(char data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;

        if (root == NULL) {
            root = newNode;
        } else {
            Node* current = root;
            Node* parent;

            while (true) {
                parent = current;
                if (data < current->data) {
                    current = current->left;
                    if (current == NULL) {
                        parent->left = newNode;
                        return;
                    }
                } else {
                    current = current->right;
                    if (current == NULL) {
                        parent->right = newNode;
                        return;
                    }
                }
            }
        }
    }

    void preOrder(Node* node) {
        if (node != NULL) {
            cout << node->data << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }

    void inOrder(Node* node) {
        if (node != NULL) {
            inOrder(node->left);
            cout << node->data << " ";
            inOrder(node->right);
        }
    }

    void postOrder(Node* node) {
        if (node != NULL) {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->data << " ";
        }
    }

    int main() {
        int choice;
        char data;

        while (true) {
            cout << "Menu:" << endl;
            cout << "1. Insert Node" << endl;
            cout << "2. Pre-Order" << endl;
            cout << "3. In-Order" << endl;
            cout << "4. Post-Order" << endl;
            cout << "5. Exit" << endl;
            cout << "Choose an option: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter data: ";
                    cin >> data;
                    insertNode(data);
                    break;
                case 2:
                    cout << "Pre-Order: ";
                    preOrder(root);
                    cout << endl;
                    break;
                case 3:
                    cout << "In-Order: ";
                    inOrder(root);
                    cout << endl;
                    break;
                case 4:
                    cout << "Post-Order: ";
                    postOrder(root);
                    cout << endl;
                    break;
                case 5:
                    return 0;
                default:
                    cout << "Invalid choice. Please choose again." << endl;
            }
        }

        return 0;
    }

Program akan menampilkan menu yang memungkinkan pengguna untuk memilih opsi seperti:
a. Insert Node = Memungkinkan pengguna untuk memasukkan data baru ke dalam tree.
b. Pre-Order = Menampilkan data tree dalam urutan pre-order.
c. In-Order = Menampilkan data tree dalam urutan in-order.
d. Post-Order = Menampilkan data tree dalam urutan post-order.
e. Exit = Menghentikan program.

# Referensi
[1]12TeoriGrafAplikasidanTumbuhnyaKeterampilanBerfikirTingkatTinggi. (n.d.). [2]Lus Diana, E., Suryaningtyas, W., Suprapti, E., Pendidikan, P., & Fkip Umsurabaya, M. (2016). PENGATURAN LAMPU LALU LINTAS DI PERSIMPANGAN JALAN AHMAD YANI GIANT DENGAN APLIKASI PEWARNAAN TEORI GRAF. In MUST: Journal of Mathematics Education (Vol. 1, Issue 1).[3]Mardiani, D., & Mardiani, D. (2017). Mosharafa. 6(3). http://e-mosharafa.org/. [4]Nurdiyanto, T., & Susanti, E. (n.d.). EFISIENSI PENGGUNAAN MATRIKS IN-DEGREE UNTUK MENGKONTRUKSI SPANNING-TREE PADA GRAF BERARAH. JES-MAT, 5.