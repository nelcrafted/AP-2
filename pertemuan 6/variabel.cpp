#include <iostream>
using namespace std;

string variabelGlobal = "Ilmu"; // contoh variabel global 

void namaVariabel() {
    string variabelLokal = "Komputer"; // contoh variabel lokal

    // coba askses 1
    cout << variabelLokal << endl;

    // coba akses 3
    cout << variabelGlobal << endl;
}

int main () {
    system("CLS");

    namaVariabel();

    // coba akses 2
    // cout << variabelLokal << endl; // ga bisa

    // coba akses 4
    cout << variabelGlobal << endl;

}