#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()  {
    double meter,sentimeter,millimeter,kilometer, hasil;
    string tujuan;
    cout << "================ Tabel Konversi Satuan Panjang ================" << endl;
    cout << setw(20) << left << "meter" << setw(20) << left << "sentimeter" << setw(20) << left << "millimeter" << setw(20) << left << "kilometer" << endl;
    cout << "===============================================================" << endl;
    for (meter = 1; meter <= 10; meter++) {
        sentimeter = meter * 100;
        millimeter = meter * 1000;
        kilometer = meter / 1000.0;

        cout << setw(20) << left << meter
             << setw(20) << left << sentimeter
             << setw(20) << left << millimeter
             << setw(20) << left << kilometer
             << endl;
    }

    cout << "===============================================================" << endl;

    cout << "masukkan nilai meter: ";
    cin >> meter;

    cout << "pilih tujuan konversi: ";
    cin >>  tujuan;

    if (tujuan == "sentimeter")
    {
        hasil = meter * 100;
    }
    else if (tujuan == "millimeter")
    {
        hasil = meter * 1000;
    }
    else if (tujuan == "kilometer")
    {
        hasil = meter / 1000.0;
    }
    else
    {
        cout << "tujuan konversi tidak valid" << endl;
    }

    cout << "Hasil konversi: " << hasil << " " << tujuan << endl;
    
    return 0;
}