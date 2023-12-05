#include <iostream>
#include <cstdlib> // Untuk system("cls")
using namespace std;

// Mendefinisikan struktur untuk menyimpan informasi pasien
struct Pasien {
    int no_rekam_medis;
    string nama_pasien;
    // Tambahkan data member lain sesuai kebutuhan
};

// Fungsi untuk menampilkan data pasien
void tampilkanData(Pasien pasien[], int jumlahData) {
    cout << "Data Pasien:\n";
    for (int i = 0; i < jumlahData; ++i) {
        cout << "No Rekam Medis   : " << pasien[i].no_rekam_medis << endl;
        cout << "Nama Pasien      : " << pasien[i].nama_pasien << endl;
        // Tambahkan baris serupa untuk data member lainnya
        cout << "-------------------------\n";
    }
}

// Fungsi untuk mengedit data pasien
void editData(Pasien pasien[], int &jumlahData) {
    int nomorEdit;
    cout << "Masukkan Nomor Data yang Akan Diedit : ";
    cin >> nomorEdit;

    if (nomorEdit >= 1 && nomorEdit <= jumlahData) {
        --nomorEdit;
        cout << "No Rekam Medis   : ";
        cin >> pasien[nomorEdit].no_rekam_medis;
        cout << "Nama Pasien      : ";
        cin >> pasien[nomorEdit].nama_pasien;
        // Baris serupa untuk data member lainnya

        // Setelah mengedit, tampilkan data yang telah diperbarui
        cout << "Data berhasil diubah. Berikut data terbaru:\n";
        tampilkanData(pasien, jumlahData);
    } else {
        system("cls");
        cout << "Nomor data tidak valid.";
        cin.ignore(); // Membersihkan buffer input
        cin.get();    // Menunggu tombol enter
        system("cls");
    }
}

int main() {
    const int maksPasien = 100; // Sesuaikan ukuran berdasarkan kebutuhan Anda
    Pasien pasien[maksPasien];
    int jumlahData = 0; // Melacak jumlah pasien saat ini

    // Panggil fungsi editData
    editData(pasien, jumlahData);

    return 0;
}
