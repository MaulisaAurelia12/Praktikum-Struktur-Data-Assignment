#include <iostream> 
using namespace std;

void bubble_sort(double arr[], int length) {   //fungsi untuk mengurutkan array menggunakan algoritma bubble sort
    bool not_sorted = true;  //akan terjadi looping(perulangan jika belum melakukan sorting)
    int j = 0;
    double tmp;
    
    while (not_sorted) {   //melakukan pengurutan hingga array sudah terurut
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++) {   //membandingkan elemen satu dengan lainnya
            if (arr[i] > arr [i + 1]) {
                tmp = arr[i];   //menukar elemen
                arr[i] = arr[i + 1];
                arr[i+1] = tmp;
                not_sorted = true;  
            }
        }
    }
}

void print_array(double a[], int length) {
    for(int i = 0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6;   //jumlah elemen dalam array
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99, 99.99};

    cout << "urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    //memanggil fungsi bubble_sort 
    bubble_sort(a, length);
    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
    return 0;
}