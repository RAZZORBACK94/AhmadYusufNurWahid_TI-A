
#include <iostream>
using namespace std;

int main() {
    int barisA, kolomA, barisB, kolomB;

    // Input ukuran matriks A
    cout << "Masukkan jumlah baris matriks A: ";
    cin >> barisA;
    cout << "Masukkan jumlah kolom matriks A: ";
    cin >> kolomA;

    // Input ukuran matriks B
    cout << "Masukkan jumlah baris matriks B: ";
    cin >> barisB;
    cout << "Masukkan jumlah kolom matriks B: ";
    cin >> kolomB;

    // Pemeriksaan apakah matriks dapat dikalikan
    if (kolomA != barisB) {
        cout << "Error: Matriks tidak dapat dikalikan!" << endl;
        return 0;
    }

    // Membuat array dinamis matriks A
    int **A = new int*[barisA];
    for (int i = 0; i < barisA; i++) {
        A[i] = new int[kolomA];
    }

    // Membuat array dinamis matriks B
    int **B = new int*[barisB];
    for (int i = 0; i < barisB; i++) {
        B[i] = new int[kolomB];
    }

    // Membuat array dinamis hasil perkalian
    int **C = new int*[barisA];
    for (int i = 0; i < barisA; i++) {
        C[i] = new int[kolomB];
    }

    // Input elemen matriks A
    cout << "\nMasukkan elemen matriks A:" << endl;
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cin >> A[i][j];
        }
    }

    // Input elemen matriks B
    cout << "\nMasukkan elemen matriks B:" << endl;
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cin >> B[i][j];
        }
    }

    // Mengalikan kedua matriks menggunakan pointer
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            *(*(C + i) + j) = 0;

            for (int k = 0; k < kolomA; k++) {
                *(*(C + i) + j) +=
                *(*(A + i) + k) * *(*(B + k) + j);
            }
        }
    }

    // Menampilkan hasil perkalian
    cout << "\nHasil perkalian Matriks A dan B:" << endl;
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << *(*(C + i) + j) << " ";
        }
        cout << endl;
    }

    // Menghapus memori dinamis matriks A
    for (int i = 0; i < barisA; i++) {
        delete[] A[i];
    }
    delete[] A;

    // Menghapus memori dinamis matriks B
    for (int i = 0; i < barisB; i++) {
        delete[] B[i];
    }
    delete[] B;

    // Menghapus memori dinamis matriks C
    for (int i = 0; i < barisA; i++) {
        delete[] C[i];
    }
    delete[] C;

    return 0;
}
