#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> s;
    for (int i = 0; i < kalimat.length(); i++) {
        s.push(kalimat[i]);
    }

    string reversedKalimat = "";
    while (!s.empty()) {
        reversedKalimat += s.top();
        s.pop();
    }

    return kalimat == reversedKalimat;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

    return 0;
}