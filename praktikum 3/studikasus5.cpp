#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

int main() {
    
     double weight, height, bmi;
     string kategori;
     bool ideal;

     cout << "Masukkan berat badan (kg): ";
     cin >> weight;
     cout << "Masukkan tinggi badan (cm): ";
     cin >> height;

     bmi = weight / ((height / 100) * (height / 100));
     if (bmi < 18.5)
     {
        kategori = "Kekurangan Berat Badan (underweight)";
        ideal = false;
     }
     else if (bmi >= 18.5 && bmi <= 24.9)
     {
        kategori = "Berat Badan Ideal";
        ideal = true;
     }
     else if (bmi >= 25 && bmi <= 29.9)
     {
        kategori = "Kelebihan Berat Badan (overweight)";
        ideal = false;
     }
     else if (bmi >= 30)
     {
        kategori = "Obesitas";
        ideal = false;
     } else {
        cout << "Kategori tidak valid" << endl;
     }

     cout << "================ Hasil Perhitungan BMI ================" << endl;
     cout << setw(15) << left << "BMI" << ": " << fixed << setprecision(2) << bmi << endl;
     cout << setw(15) << left << "Kategori" << ": " << kategori << endl;
     cout << setw(15) << left << "Ideal" << ": " << (ideal ? "Ya" : "Tidak") << endl;

    return 0;
}