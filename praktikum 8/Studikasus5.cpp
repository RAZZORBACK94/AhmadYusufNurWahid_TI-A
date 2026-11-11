#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlahProduk;

    cout << "Masukkan jumlah produk: ";
    cin >> jumlahProduk;

    if (jumlahProduk <= 0) {
        cout << "Jumlah produk tidak valid." << endl;
        return 0;
    }

    string* nama = new string[jumlahProduk];
    int* harga = new int[jumlahProduk];
    int* terjual = new int[jumlahProduk];
    long long* pendapatan = new long long[jumlahProduk];

    long long total = 0;

    for (int i = 0; i < jumlahProduk; i++) {
        cout << "Masukkan data produk (nama, harga, jumlah terjual): ";
        cin >> nama[i] >> harga[i] >> terjual[i];

        pendapatan[i] = (long long) harga[i] * terjual[i];
        total += pendapatan[i];
    }

    cout << endl;

    int tertinggi = 0;

    for (int i = 0; i < jumlahProduk; i++) {
        cout << "Produk " << i + 1 << ": \"" << nama[i]
             << "\", Harga: Rp " << harga[i]
             << ", Terjual: " << terjual[i] << endl;

        if (pendapatan[i] > pendapatan[tertinggi]) {
            tertinggi = i;
        }
    }

    cout << "\nTotal pendapatan: Rp " << total << endl;

    cout << "Rata-rata pendapatan per produk: Rp "
         << total / jumlahProduk << endl;

    cout << "Produk dengan pendapatan tertinggi: \""
         << nama[tertinggi] << "\" (Rp "
         << pendapatan[tertinggi] << ")" << endl;

    delete[] nama;
    delete[] harga;
    delete[] terjual;
    delete[] pendapatan;

    return 0;
}
