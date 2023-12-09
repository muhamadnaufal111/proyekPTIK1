#include <iostream>
#include <cstdlib> // untuk system("cls")
#include <conio.h> // untuk getch()

const int MAX_DATA = 100; // Jumlah maksimum data

struct Pasien {
    // Definisikan struktur data sesuai kebutuhan
    std::string nama;
    int usia;
    // Tambahkan data lain sesuai kebutuhan
};

Pasien pasien[MAX_DATA]; // Array untuk menyimpan data
int jumlahData = 0; // Variabel untuk melacak jumlah data

void hapusData() {
    int nomorHapus;
    std::cout << "Hapus data ke-";
    std::cin >> nomorHapus;

    if (nomorHapus >= 1 && nomorHapus <= jumlahData) {
        --nomorHapus;

        for (int i = nomorHapus; i < jumlahData - 1; ++i) {
            pasien[i] = pasien[i + 1];
        }

        --jumlahData;
        system("cls");
        std::cout << "\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-" << nomorHapus + 1 << " Terhapus ++++++++++++++++++++++++++++++";
        getch();
        system("cls");
    } else {
        system("cls");
        std::cout << "Nomor data tidak valid.";
        getch();
        system("cls");
    }
}

int main() {
    // Tambahkan kode untuk mengisi array 'pasien' dengan data awal
    // Contoh:
    // pasien[0] = {"John", 25};
    // pasien[1] = {"Alice", 30};
    // jumlahData = 2;

    hapusData(); // Panggil fungsi ini untuk menguji penghapusan data

    return 0;
}
