#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string kalimat;
  int jumlahVokal = 0;

  // Meminta input kalimat dari pengguna
  cout << "Masukkan kalimat: ";
  getline(cin, kalimat);

  // Melakukan iterasi melalui setiap karakter dalam kalimat
  for (char huruf : kalimat) {
    // Memeriksa apakah huruf tersebut adalah vokal
    switch (huruf) {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        jumlahVokal++;
        break;
      default:
        break;
    }
  }

  // Menampilkan hasil perhitungan
  cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << endl;

  return 0;
}