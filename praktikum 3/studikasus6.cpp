#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

   double suhu1,suhu2,suhu3,suhu4,suhu5;
    string cuaca;
  

    cout << setw(15) << "Suhu hari ke 1  : ";
    cin >> suhu1;
    cout << setw(15) << "Suhu hari ke 2  : ";
    cin >> suhu2;
    cout << setw(15) << "Suhu hari ke 3  : ";
    cin >> suhu3;
    cout << setw(15) << "Suhu hari ke 4  : ";
    cin >> suhu4;
    cout << setw(15) << "Suhu hari ke 5  : ";
    cin >> suhu5;

    double ratarata = (suhu1 + suhu2 + suhu3 + suhu4 + suhu5) / 5;

    if(ratarata > 30){
        cuaca = "Cuaca Panas";
    } else if (ratarata >= 20 && ratarata <= 30){
        cuaca = "Cuaca Normal";
    } else {
        cuaca = "Cuaca Dingin";
    }

    
    cout << fixed << setprecision(1);
    cout << "===================== Hasil Suhu =====================" << endl;
    cout << left << setw(15) << "Suhu hari 1" << ": " << suhu1 << " C" << endl;
    cout << left << setw(15) << "Suhu hari 2" << ": " << suhu2 << " C" << endl;
    cout << left << setw(15) << "Suhu hari 3" << ": " << suhu3 << " C" << endl;
    cout << left << setw(15) << "Suhu hari 4" << ": " << suhu4 << " C" << endl;
    cout << left << setw(15) << "Suhu hari 5" << ": " << suhu5 << " C" << endl;
    cout << left << setw(15) << "Suhu Rata-Rata" << ": " << ratarata << " C" << endl;
    cout << left << setw(15) << "Cuaca saat ini" << ": " << cuaca << endl;

    return 0;



}

