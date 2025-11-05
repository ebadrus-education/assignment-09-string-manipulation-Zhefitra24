#include <iostream>
using namespace std;

int main() {
    string teks1 = "Viscaaaa";
    string teks2 = " Barcaaaa";

    teks1.append(teks2);
    cout << "Hasil append: " << teks1 << endl;


    string hasil = teks1 + " Viscaaaa Catalunaaa";
    cout << "Hasil + : " << hasil << endl;

    return 0;
}
