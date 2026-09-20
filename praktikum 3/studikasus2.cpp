#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    string namaBarang;
    float hargaBarang, diskon, hargaStlhDiskon;

    cout << "Nama Barang: ";
    cin >> namaBarang;

    if (namaBarang == "baju") {
        hargaBarang = 100000;
    } else if (namaBarang == "celana") {
        hargaBarang = 150000;
    } else if (namaBarang == "sepatu") {
        hargaBarang = 200000;
    } else {
        cout << "Nama barang tidak valid." << endl;
        return 0;
    }

    cout << "Diskon: ";
    cin >> diskon;

    hargaStlhDiskon = hargaBarang - (hargaBarang * diskon/100);

    cout << setw(25) << left << "Harga Awal" << ": Rp." << hargaBarang << endl;
    cout << setw(25) << left << "Diskon" << ": "<< diskon << endl;
    cout << setw(25) << left << fixed << setprecision(2);
    cout << setw(25) << left << "Harga Setelah Diskon" << ": Rp." << hargaStlhDiskon << endl;

    return 0;
}