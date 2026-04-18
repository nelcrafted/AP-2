#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("CLS");
    vector <string> nama = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};
    cout << "Isi vector di awal : " << endl;
    for (int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }

    nama.push_back("Houra");
    nama.pop_back();
    nama.erase(nama.begin() + 1);

    cout << endl;

    cout << "Isi vector setelah perubahan : " << endl;
    for (int i = 0; i < nama.size(); i++){
        cout << nama[i] << endl;
    }

    cout << endl;

    cout << "Jumlah data tersisa : " << nama.size() << endl;
}