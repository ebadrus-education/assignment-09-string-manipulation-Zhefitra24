#include <iostream>
using namespace std;

int main() {
    string teks = "Lamine Yamal bukan Wonderkid";
    teks.erase(13, 6);
    cout << "Setelah erase: " << teks << endl;
    return 0;
}
