#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string bidang;
    int p = 0, l = 0, t = 0, v, lp;

    cout << "Masukkan Bidang (kubus, balok, kerucut, tabung): ";
    cin >> bidang;

    if (bidang == "kubus")
    {
        cout << "Masukkan Panjang: ";
        cin >> p;

    } else if (bidang == "balok")
    {
        cout << "Masukkan Panjang: ";
        cin >> p;

        cout << "Masukkan Lebar: ";
        cin >> l;

        cout << "Masukkan Tinggi: ";
        cin >> t;
    } else if (bidang == "tabung" || bidang == "kerucut") {
        
        cout << "Masukkan Jari-jari: ";
        cin >> p;

        cout << "Masukkan Tinggi: ";
        cin >> t;
    } else {
        cout << "Bidang tidak valid." << endl;
        return 0;
    }

    
    if (bidang == "balok")
    {
        v = p * l * t;
        lp = 2 * (p * l + p * t + l * t);
    }
    else if (bidang == "kubus")
    {
        v = p * p * p;
        lp = 6 * (p * p);
    }
    else if (bidang == "tabung")
    {
        v = 3.14 * (p * p) * t;
        lp = 2 * 3.14 * p * (p + t);
    }
    else if (bidang == "kerucut")
    {
        v = 1 / 3.0 * 3.14 * (p * p) * t;
        lp = 3.14 * p * (p + sqrt((t*t) + (p*p)));
    }
    else
    {
        cout << "Bidang tidak valid." << endl;
        return 0;
    }
    

    cout << left << setw(15) << (bidang == "kerucut" || bidang == "tabung" ? "Jari-jari" : "Panjang")
     << left << setw(15) << "Lebar"
     << left << setw(15) << "Tinggi"
     << left << setw(15) << "Volume"
     << left << setw(15) << "Luas Permukaan"
     << endl;

    cout << left << setw(15) << p
         << left << setw(15) << l
         << left << setw(15) << t
         << left << setw(15) << v
         << left << setw(15) << lp
         << endl;

    return 0;
}