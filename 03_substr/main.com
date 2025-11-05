#include <iostream>
using namespace std;

int main() {
    string teks = "Barca Juara UCL? IYA / TIDAK";
    string potong = teks.substr(13, 3);
    cout << "Hasil substr: " << potong << endl;
    return 0;
}
