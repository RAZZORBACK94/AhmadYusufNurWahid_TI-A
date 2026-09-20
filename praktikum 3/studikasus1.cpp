#include <iostream>
#include <iomanip> // Library wajib untuk mengatur format tabel
#include <string>

using namespace std;

int main()
{

     string nama;
     string posisi;
     int tarif;
     int jamKerja;
     long long totalGaji;

     cout << "======================= Data Karyawan =======================" << endl;

     cout << "Nama Karyawan: ";
     cin >> nama;

     cout << "Posisi Karyawan: ";
     cin >> posisi;

     cout << "Jam Kerja : ";
     cin >> jamKerja;

     if (posisi == "magang")
     {
          tarif = 15000;
     }
     else if (posisi == "staff junior")
     {
          tarif = 25000;
     }
     else if (posisi == "staff senior")
     {
          tarif = 35000;
     }
     else if (posisi == "team leader")
     {
          tarif = 45000;
     }
     else if (posisi == "kepala depatemen")
     {
          tarif = 55000;
     }

     totalGaji = jamKerja * tarif;

     cout << "======================= Tabel Gaji Karyawan =======================" << endl;
     cout << setw(20) << left << "Nama Karyawan" << ": " << nama << endl;
     cout << setw(20) << left << "Posisi" << ": " << posisi << endl;
     cout << setw(20) << left << "Jam Kerja" << ": " << jamKerja << endl;
     cout << setw(20) << left << "Tarif per Jam" << ": Rp." << tarif << endl;
     cout << setw(20) << left << "Total Gaji" << ": Rp." << totalGaji << endl;

     return 0;
}