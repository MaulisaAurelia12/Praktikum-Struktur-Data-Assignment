#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> evenNumbers, oddNumbers;

    // Memisahkan angka genap dan ganjil
    for (int num : numArray) {
        if (num % 2 == 0) {
            evenNumbers.push_back(num);
        } else {
            oddNumbers.push_back(num);
        }
    }

    // Menampilkan output
    std::cout << "Data Array: ";
    for (int num : numArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Nomor Genap: ";
    for (int num : evenNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Nomor Ganjil: ";
    for (int num : oddNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
