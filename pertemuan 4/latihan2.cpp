#include <iostream>
using namespace std;

int main()
{
    string kalimat;
    system("cls");

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++)
    {
    char c = kalimat[i];

    if (c == 'a' || c == 'e' || c == 'i'|| c == 'o' || c == 'u')
        {
            kalimat[i] = toupper(c);
        }
    }

    cout << "Hasil modifikasi : " << kalimat << endl;
}