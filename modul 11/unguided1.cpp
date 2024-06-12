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
  cout << "NIM: 2311110035" << endl;
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
