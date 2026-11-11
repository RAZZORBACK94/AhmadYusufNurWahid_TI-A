#include <iostream>
#include <string>
#include <limits>
using namespace std;

int n;

class Proyek
{
public:
    string nama;
    int anggaran;
    int pekerja;
};


void tambahProyek(Proyek *&array, int &n)
{
    Proyek *temp = new Proyek[n + 1];

    for (int i = 0; i < n; i++)
    {
        temp[i] = array[i];
    }

    cout << "\nMasukkan Data Proyek Baru:" << endl;
    cout << string(30, '=') << endl;

    Proyek projectBaru;

    // Clear leftover newline from previous cin
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Nama Proyek: ";
    getline(cin, projectBaru.nama);

    cout << "Anggaran: ";
    cin >> projectBaru.anggaran;

    cout << "Jumlah Pekerja: ";
    cin >> projectBaru.pekerja;

    temp[n] = projectBaru;

    delete[] array;
    array = temp;

    n++;

    cout << "Proyek berhasil ditambahkan!" << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Proyek " << i + 1 << ": "
             << temp[i].nama
             << ", Anggaran: Rp " << temp[i].anggaran
             << ", Jumlah Pekerja: " << temp[i].pekerja
             << endl;
    }
}


void hapusProyek(Proyek *&array, int &n)
{
    if (n <= 0)
    {
        cout << "Tidak ada proyek untuk dihapus!" << endl;
        return;
    }

    int index;

    cout << "\nMasukkan Indeks Proyek yang Ingin Dihapus (0 - " << n - 1 << "): ";
    cin >> index;

    if (index < 0 || index >= n)
    {
        cout << "Indeks tidak valid!" << endl;
        return;
    }

    Proyek *temp = new Proyek[n - 1];

    // Copy data sebelum indeks
    for (int i = 0; i < index; i++)
    {
        temp[i] = array[i];
    }

    // Copy data setelah indeks
    for (int i = index; i < n - 1; i++)
    {
        temp[i] = array[i + 1];
    }

    delete[] array;
    array = temp;

    n--;

    cout << "Proyek berhasil dihapus!" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Proyek " << i + 1 << ": "
             << temp[i].nama
             << ", Anggaran: Rp " << temp[i].anggaran
             << ", Jumlah Pekerja: " << temp[i].pekerja
             << endl;
    }
}

// Recursive: Total Anggaran
int totalAnggaran(Proyek *array, int n)
{
    if (n == 0)
    {
        return 0;
    }

    return array[n - 1].anggaran + totalAnggaran(array, n - 1);
}

// Recursive: Total Pekerja
int totalPekerja(Proyek *array, int n)
{
    if (n == 0)
    {
        return 0;
    }

    return array[n - 1].pekerja + totalPekerja(array, n - 1);
}

int main()
{
    cout << "Masukkan jumlah Proyek: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Jumlah Proyek harus lebih dari 0!" << endl;
        return 0;
    }

    // Membuat array dinamis
    Proyek *proyek = new Proyek[n];

    // Input data proyek
    for (int i = 0; i < n; i++)
    {
        cout << "\nMasukkan Data Proyek " << i + 1 << endl;

        cout << "Nama Proyek: ";
        getline(cin >> ws, proyek[i].nama);

        cout << "Anggaran: ";
        cin >> proyek[i].anggaran;

        cout << "Jumlah Pekerja: ";
        cin >> proyek[i].pekerja;
    }

    // Menampilkan data awal
    cout << "\nData Proyek yang Dimasukkan:" << endl;
    cout << string(30, '=') << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Proyek " << i + 1 << ": "
             << proyek[i].nama
             << ", Anggaran: Rp " << proyek[i].anggaran
             << ", Jumlah Pekerja: " << proyek[i].pekerja
             << endl;
    }

    // Menambah proyek
    tambahProyek(proyek, n);

    // Menghapus proyek
    hapusProyek(proyek, n);

    // Memastikan masih ada proyek
    if (n == 0)
    {
        cout << "Tidak ada proyek tersisa untuk dihitung!" << endl;
        delete[] proyek;
        return 0;
    }

    // Mencari proyek dengan anggaran terbesar
    int index_anggaran_terbesar = 0;

    for (int i = 1; i < n; i++)
    {
        if (proyek[i].anggaran > proyek[index_anggaran_terbesar].anggaran)
        {
            index_anggaran_terbesar = i;
        }
    }

    // Menghitung statistik
    int total = totalAnggaran(proyek, n);

    double rata_rata = static_cast<double>(totalPekerja(proyek, n)) / n;

    // Menampilkan statistik
    cout << "\n" << string(30, '=') << endl;
    cout << "STATISTIK PROYEK" << endl;
    cout << string(30, '=') << endl;

    cout << "Total Anggaran: Rp " << total << endl;

    cout << "Rata-rata Jumlah Pekerja: " << rata_rata << endl;

    cout << "Proyek dengan Anggaran Terbesar: "
         << proyek[index_anggaran_terbesar].nama
         << ", Anggaran: Rp "
         << proyek[index_anggaran_terbesar].anggaran
         << endl;

    // Menghapus memori array dinamis
    delete[] proyek;

    return 0;
}
