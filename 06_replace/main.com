#include <iostream>
using namespace std;

int main() {
    string teks = "Aku fans Ronaldo";
    teks.replace(9, 7, "Messi");
    cout << "Setelah replace: " << teks << endl;
    return 0;
}
