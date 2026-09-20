#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double a1, a2, a3, a4, a5;
    string variasi;

    cout << "Masukkan nilai ke-1 : ";
    cin >> a1;

    cout << "Masukkan nilai ke-2 : ";
    cin >> a2;

    cout << "Masukkan nilai ke-3 : ";
    cin >> a3;

    cout << "Masukkan nilai ke-4 : ";
    cin >> a4;

    cout << "Masukkan nilai ke-5 : ";
    cin >> a5;

    // Menghitung rata-rata
    double average_a = (a1 + a2 + a3 + a4 + a5) / 5.0;

    // Menghitung standar deviasi populasi
    double standar_deviasi = sqrt(
        (pow(a1 - average_a, 2) +
         pow(a2 - average_a, 2) +
         pow(a3 - average_a, 2) +
         pow(a4 - average_a, 2) +
         pow(a5 - average_a, 2)) / 5.0
    );

    if(standar_deviasi > 2) {
        variasi = "tinggi";
    } else {
        variasi = "rendah";
    }

    cout << fixed << setprecision(1);
    cout << setw(30) << left << "Rata Rata" << ": " << average_a << endl;
    cout << setw(30) << left << "Standar Deviasi" << ": " << standar_deviasi << endl;
    cout << setw(30) << left << "Variasi" << ": " << variasi << endl;

    return 0;
}