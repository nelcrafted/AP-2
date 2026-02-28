#include <iostream>
using namespace std;

int main()
{
    system("cls");
    float volume, luas, r;
    float phi =3.14;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    luas = 4 * phi * (r * r);
    cout << "Luas = " << luas << endl;

    volume = (float)4 / (float)3 * phi * (r * r * r);
    cout << "Volume = " << volume << endl;
}