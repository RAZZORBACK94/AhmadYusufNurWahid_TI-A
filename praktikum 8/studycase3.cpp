
#include <iostream>
using namespace std;

// Fungsi rekursif untuk menampilkan matriks
void tampilMatriks(int **matriks, int baris, int kolom, int i = 0) {
    if (i == baris) {
        return;
    }

    for (int j = 0; j < kolom; j++) {
        cout << *(*(matriks + i) + j) << " ";
    }

    cout << endl;

    tampilMatriks(matriks, baris, kolom, i + 1);
}

int main() {
    int baris, kolom;

    // Input ukuran matriks
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    // Membuat array dinamis matriks asli
    int **A = new int*[baris];
    for (int i = 0; i < baris; i++) {
        A[i] = new int[kolom];
    }

    // Membuat array dinamis matriks transpose
    int **T = new int*[kolom];
    for (int i = 0; i < kolom; i++) {
        T[i] = new int[baris];
    }

    // Input elemen matriks
    cout << "\nMasukkan elemen matriks:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> A[i][j];
        }
    }

    // Proses transpose menggunakan pointer
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            *(*(T + j) + i) = *(*(A + i) + j);
        }
    }

    // Menampilkan matriks asli
    cout << "\nMatriks asli:" << endl;
    tampilMatriks(A, baris, kolom);

    // Menampilkan matriks transpose
    cout << "\nMatriks transpose:" << endl;
    tampilMatriks(T, kolom, baris);

    // Menghapus memori matriks asli
    for (int i = 0; i < baris; i++) {
        delete[] A[i];
    }
    delete[] A;

    // Menghapus memori matriks transpose
    for (int i = 0; i < kolom; i++) {
        delete[] T[i];
    }
    delete[] T;

    return 0;
}
