#include <iostream>
#include <iomanip> 
#include <string> 

using namespace std;

int main() {
    double jumlahRupiah, kurs, jumlahHasilKonversi;
    string tujuanKonversi;

    cout << "================ Konversi Mata Uang ================" << endl;
    cout << "Masukkan jumlah uang dalam Rupiah: ";
    cin >> jumlahRupiah;
   
    cout << "Masukkan Tujuan Konversi (dollar, euro, yen, rupee, rial, won, ringgit, bath): " ;
    cin >> tujuanKonversi;

    if (tujuanKonversi == "dollar") {
        kurs = 15000;
    } else if (tujuanKonversi == "euro") {
        kurs = 16000;
    } else if (tujuanKonversi == "yen") {
        kurs = 120;
    } else if (tujuanKonversi == "rupee") {
        kurs = 200;
    } else if (tujuanKonversi == "rial") {
        kurs = 4000;
    } else if (tujuanKonversi == "won") {
        kurs = 13;
    } else if (tujuanKonversi == "ringgit") {
        kurs = 3500;
    } else if (tujuanKonversi == "bath") {
        kurs = 500;
    } else {
        cout << "Tujuan konversi tidak valid." << endl;
        return 0;
    }
    
    jumlahHasilKonversi = jumlahRupiah / kurs;

    cout << setw(30) << left << "Jumlah dalam Rupiah " << ": Rp." << fixed << setprecision(0) << jumlahRupiah << endl;
    cout << setw(30) << left << ("Kurs (" + tujuanKonversi + ")") << ": Rp." << fixed << setprecision(0) << kurs << endl;
    cout << setw(30) << left << ("Jumlah dalam (" + tujuanKonversi + ")") << ": " << fixed << setprecision(2) << jumlahHasilKonversi << endl;
    return 0;
}