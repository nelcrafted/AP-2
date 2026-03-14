#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, bmi;
    system("cls");

    cout << "Masukkan berat badan anda (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi anda (m): ";
    cin >> tinggi;

    bmi = berat / (tinggi * tinggi);

    cout << "BMI anda : " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori berat badan : Berat badan kurang" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Kategori berat badan : Normal" << endl;
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "Kategori berat badan : Berat badan berlebih" << endl;
    }
    else {
        cout << "Kategori berat badan : Obesitas" << endl;
    }
}