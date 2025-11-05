#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama = "ZHEFITRA ANANDA WIJAYA";
    
    int panjang1 = nama.length(); 
    int panjang2 = nama.size();    

    cout << "Teks: " << nama << std::endl;
    cout << "Panjang (length()): " << panjang1 << std::endl;
    cout << "Panjang (size()): " << panjang2 << std::endl;
    
    return 0;
}