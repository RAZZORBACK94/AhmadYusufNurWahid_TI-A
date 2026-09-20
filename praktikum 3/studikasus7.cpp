#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float jarakTempuh;
    float konsumsiBBM;
    float hargaPerLiter;
    float totalBiaya;
    string efisien;

    cout << "================ Data Perjalanan ================" << endl;
    
   
    cout << setw(15) << "Jarak Tempuh (km) "<< " : ";
    cin >> jarakTempuh;

    cout << setw(15) << "Konsumsi Bahan Bakar (km/l) "<< " : ";
    cin >> konsumsiBBM;

    cout << setw(15) << "Harga Bahan Bakar Per Liter "<< " : ";
    cin >> hargaPerLiter;

    if(konsumsiBBM > 15) {
        efisien = "Efisien";
    }else if (konsumsiBBM >= 10 && konsumsiBBM <= 15) {
        efisien = "Cukup Efisien";
    }else {
        efisien = "Tidak Efisien";
    }

    double biaya = (jarakTempuh/konsumsiBBM)*hargaPerLiter;

    cout << "================ Total Biaya ================" << endl;
    cout << left << setw(25) << "Jarak Tempuh"<< ": " << jarakTempuh << endl;
    cout << left << setw(25) << "Konsumsi Bahan Bakar"<< ": " << konsumsiBBM << endl;
    cout << left << setw(25) << "Harga Bahan Bakar"<< ": " << hargaPerLiter << endl;
    cout << left << setw(25) << "Total Biaya"<< ": " << fixed << setprecision(0) << biaya << endl;
    cout << left << setw(25) << "Status Efisiensi"<< ": " << efisien << endl;

    return 0;
}