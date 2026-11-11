
#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung total nilai
int jumlahNilai(int arr[], int n) {

    // Base Case (kondisi berhenti)
    if (n == 0) {
        return 0;
    }

    // Recursive Case
    return arr[n - 1] + jumlahNilai(arr, n - 1);
}

int main() {

    int n;

    // Input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    // Memeriksa jumlah mahasiswa
    if (n <= 0) {
        cout << "Jumlah mahasiswa harus lebih dari 0!" << endl;
        return 0;
    }

    // Membuat array dinamis
    int *nilai = new int[n];

    // Input nilai mahasiswa
    cout << "Masukkan nilai mahasiswa:" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];
    }

    // Inisialisasi nilai terbesar dan terkecil
    int terbesar = nilai[0];
    int terkecil = nilai[0];

    // Mencari nilai terbesar dan terkecil
    for (int i = 1; i < n; i++) {

        if (nilai[i] > terbesar) {
            terbesar = nilai[i];
        }

        if (nilai[i] < terkecil) {
            terkecil = nilai[i];
        }
    }

    // Menghitung total menggunakan fungsi rekursif
    int total = jumlahNilai(nilai, n);

    // Menghitung rata-rata
    double rataRata = (double)total / n;

    // Menampilkan hasil
    cout << string(30, '=') << endl;
    cout << "Nilai terbesar: " << terbesar << endl;
    cout << "Nilai terkecil: " << terkecil << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;

    // Menghapus memori array dinamis
    delete[] nilai;

    return 0;
}
