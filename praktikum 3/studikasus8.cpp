#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    double panjang, lebar, tinggi, luas, hargaPerLiter, totalCat, totalBiaya;
    string kategori;

    cout << "Masukkan panjang ruangan (m): ";
    cin >> panjang;

    cout << "Masukkan lebar ruangan (m): ";
    cin >> lebar;

    cout << "Masukkan tinggi ruangan (m): ";
    cin >> tinggi;

    cout << "Masukkan harga cat per liter: ";
    cin >> hargaPerLiter;
    
    luas = 2 * (panjang * tinggi + lebar * tinggi);
    totalCat = luas / 10;
    totalBiaya = totalCat * hargaPerLiter;

    if (totalCat < 5) {
        kategori = "Sedikit";
    } else if (totalCat >= 5 && totalCat <= 10) {
        kategori = "Sedang";
    } else {
        kategori = "Banyak cat dibutuhkan";
    }

    cout << "================ Hasil Perhitungan Cat ================" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(50) << "Luas Dinding" << ": " << luas << " m^2" <<endl;
    cout << left << setw(50) << "Jumlah Liter Cat Yang Dibutuhkan" << ": " << totalCat << " liter" <<endl;
    cout << left << setw(50) << "Total Biaya Cat" << ": Rp." << totalBiaya <<endl;
    cout << left << setw(50) << "Kategori" << ": " << kategori <<endl;
    return 0;
}