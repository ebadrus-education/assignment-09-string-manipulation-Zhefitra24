#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string teks = "Aku Anak RPL";

    cout << "HURUF BESAR: ";
    for (char c : teks)
        cout << (char)toupper(c);
    cout << endl;

    cout << "huruf kecil: ";
    for (char c : teks)
        cout << (char)tolower(c);
    cout << endl;

    return 0;
}

