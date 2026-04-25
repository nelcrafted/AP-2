#include <iostream>
using namespace std;

void sapa(string nama) { // nama adalah parameter formal
    cout << "Halo " << nama << " Selamat datang di AP 2!" << endl;
}

int main () {
    system("CLS");

    string namaPengguna = "Alya";
    
    sapa(namaPengguna); // namaPEngguna adalah parameter aktual

    return 0;
}