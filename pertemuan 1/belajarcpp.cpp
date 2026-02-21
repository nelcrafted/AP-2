#include <iostream> 
#include <conio.h>
using namespace std;

int main() {
    string nama;
    char kom, jenis_kelamin;
    int nim;
    float ip;

    cout << "Hello World !!" << endl;

    cout << "Masukkan Nama : ";
    // cin >> nama;
    getline(cin, nama); // agar karakter spasi terbaca

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "Masukkan Jenis Kelamin (L/P) : "; // getche
    jenis_kelamin = getche(); // agar lgsg tampil tanpa enter

    /* output */
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << jenis_kelamin << endl;
    putchar(jenis_kelamin); // untuk menampilkan karakter "jenis kelamin"

    getch(); //karakter yg diketik tdk ditampilkan di layar
}