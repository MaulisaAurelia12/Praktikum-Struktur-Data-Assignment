#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen heap: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int elem;
        std::cout << "Masukkan elemen ke-" << i + 1 << ": ";
        std::cin >> elem;
        insert(elem);
    }

    std::cout << "Heap awal: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int pilihan;
    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Ekstrak maksimum" << std::endl;
        std::cout << "2. Ubah prioritas" << std::endl;
        std::cout << "3. Hapus elemen" << std::endl;
        std::cout << "4. Tampilkan heap" << std::endl;
        std::cout << "5. Keluar" << std::endl;
        std::cout << "Pilihan: ";
        std::cin >> pilihan;

        switch (pilihan) {
            case 1: {
                int max = extractMax();
                std::cout << "Maksimum: " << max << std::endl;
                break;
            }
            case 2: {
                int i, p;
                std::cout << "Masukkan indeks elemen: ";
                std::cin >> i;
                std::cout << "Masukkan prioritas baru: ";
                std::cin >> p;
                changePriority(i, p);
                break;
            }
            case 3: {
                int i;
                std::cout << "Masukkan indeks elemen: ";
                std::cin >> i;
                remove(i);
                break;
            }
            case 4: {
                std::cout << "Heap saat ini: ";
                for (int i = 0; i <= heapSize; ++i) {
                    std::cout << H[i] << " ";
                }
                std::cout << "\n";
                break;
            }
            case 5: {
                return 0;
            }
            default: {
                std::cout << "Pilihan tidak valid" << std::endl;
            }
        }
    }

    return 0;
}