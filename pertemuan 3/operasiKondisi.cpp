#include <iostream>
using namespace std;

int main()
{
    int nilai;

    system("cls");
    cout << "Masukkan nilai : ";
    cin >> nilai;

    // if (nilai <= 65)
    // {
    //     cout << "Anda tidak lulus" << endl;
    // }

    // if (nilai <= 65){
    //     cout << "Anda tidak lulus" << endl;
    // }
    // else{
    //     cout << "Anda Lulus" << endl;
    // }

    // if (nilai == 100) {
    //     cout << "Anda Keceh" << endl;
    // }
    // else if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // }
    // else {
    //     cout << "Anda Lulus" << endl;
    // }

    // if (nilai <= 65) {
    //     cout << "Anda tidak lulus" << endl;
    // }
    // else {
    //     if (nilai == 100) {
    //         cout << "Anda Lulus & Anda Hebat" << endl;
    //     }
    //     else {
    //         cout << "Anda Lulus" << endl;
    //     }
    // }

    // switch (nilai) {
    //     case 1:
    //         cout << "Senin" << endl;
    //         break;
    //     case 2:
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3:
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4:
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5:
    //         cout << "Jumat" << endl;
    //         break;
    //     case 6:
    //         cout << "Sabtu" << endl;
    //         break;
    //     case 7:
    //         cout << "Minggu" << endl;
    //         break;
    //     default:
    //         cout << "Inputan Salah" << endl;
    //         break;
    // }

    // switch (nilai) {
    //     case 85 ... 100: cout << "Nilai A" << endl; break;
    //     case 80 ... 84: cout << "Nilai B+" << endl; break;
    //     case 75 ... 79: cout << "Nilai B" << endl; break;
    //     case 70 ... 74: cout << "Nilai C+" << endl; break;
    //     case 65 ... 69: cout << "Nilai C" << endl; break;
    //     case 60 ... 64: cout << "Nilai D" << endl; break;
    //     default: cout << "Inputan Salah" << endl; break;
    // }

    (nilai % 2 == 0) ? cout << "Nilai Genap" << endl : cout << "Nilai Ganjil" << endl;
}