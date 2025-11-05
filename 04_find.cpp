#include <iostream>
using namespace std;

int main() {
    string teks = "King MU juara EPL";
    size_t posisi = teks.find("King MU");

    if (posisi != string::npos)
        cout << "\"King MU\" ditemukan di posisi ke-" << posisi << endl;
    else
        cout << "\"King MU\" tidak ditemukan" << endl;

    return 0;
}
