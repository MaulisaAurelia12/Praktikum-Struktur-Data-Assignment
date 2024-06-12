#include <iostream>
#include <string>
using namespace std;

struct hewan {
    string nama_hewan;
    char jenis_kelamin;
    string kembangbiak;
    string pernapasan;
    string tempat_hidup;
    bool karnivora;
};

struct hewan_darat : hewan {
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
};

struct hewan_laut : hewan {
    string bentuk_sirip;
    string pertahanan_diri;
};

int main() {
    hewan_darat hewan1;
    hewan_laut hewan2;

    //hewan 1 (darat)
    hewan1.nama_hewan = "ayam";
    hewan1.jenis_kelamin = 'b'; // menggunakan single quote untuk char
    hewan1.kembangbiak = "bertelur";
    hewan1.pernapasan = "paru-paru";
    hewan1.tempat_hidup = "daratan";
    hewan1.karnivora = false;
    hewan1.jumlah_kaki = 2;
    hewan1.apakah_menyusui = false;
    hewan1.suara = "kukuruyuk";

    //hewan 2 (laut)
    hewan2.nama_hewan = "gurita";
    hewan2.jenis_kelamin = 'b'; // menggunakan single quote untuk char
    hewan2.kembangbiak = "bertelur";
    hewan2.pernapasan = "insang";
    hewan2.tempat_hidup = "laut";
    hewan2.karnivora = true;
    hewan2.bentuk_sirip = "tidak memiliki";
    hewan2.pertahanan_diri = "kantong tinta dan kamuflase";

    cout << "hewan darat" << endl;
    cout << "nama hewan: " << hewan1.nama_hewan << endl;
    cout << "jenis kelamin: " << hewan1.jenis_kelamin << endl;
    cout << "cara berkembangbiak: " << hewan1.kembangbiak << endl;
    cout << "alat pernapasan: " << hewan1.pernapasan << endl;
    cout << "tempat hidup: " << hewan1.tempat_hidup << endl;
    cout << "apakah karnivora atau tidak: " << (hewan1.karnivora ? "ya" : "tidak") << endl;
    cout << "jumlah kaki: " << hewan1.jumlah_kaki << endl;
    cout << "apakah menyusui: " << (hewan1.apakah_menyusui ? "ya" : "tidak") << endl;
    cout << "suara hewan: " << hewan1.suara << endl;

    cout << "hewan air" << endl;
    cout << "nama hewan: " << hewan2.nama_hewan << endl;
    cout << "jenis kelamin: " << hewan2.jenis_kelamin << endl;
    cout << "cara berkembangbiak: " << hewan2.kembangbiak << endl;
    cout << "alat pernapasan: " << hewan2.pernapasan << endl;
    cout << "tempat hidup: " << hewan2.tempat_hidup << endl;
    cout << "apakah karnivora atau tidak: " << (hewan2.karnivora ? "ya" : "tidak") << endl;
    cout << "bentuk sirip: " << hewan2.bentuk_sirip << endl;
    cout << "pertahanan diri: " << hewan2.pertahanan_diri << endl;

    return 0;
}