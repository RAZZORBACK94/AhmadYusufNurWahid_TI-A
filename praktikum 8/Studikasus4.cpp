#include <iostream>
using namespace std;

int hitungDiskon(int harga[], int jumlah, int index) {
    if (index == jumlah) {
        return 0;
    }

    int total = harga[index];

    if (harga[index] == 500000) {
        total -= harga[index] * 0.05;
    }
    else if (harga[index] > 500000) {
        total -= harga[index] * 0.10;
    }

    return total + hitungDiskon(harga, jumlah, index + 1);
}

int main() {
    int jumlah;

    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah barang tidak valid." << endl;
        return 0;
    }

    int* harga = new int[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> harga[i];
    }

    cout << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << "Diskon untuk barang " << i + 1 << ": ";

        if (harga[i] == 500000) {
            cout << "5%" << endl;
        }
        else if (harga[i] > 500000) {
            cout << "10%" << endl;
        }
        else {
            cout << "Tidak ada diskon" << endl;
        }
    }

    int total = hitungDiskon(harga, jumlah, 0);

    cout << "\nTotal harga setelah diskon: "
         << total << endl;

    delete[] harga;

    return 0;
}
