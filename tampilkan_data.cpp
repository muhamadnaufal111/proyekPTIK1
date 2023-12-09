#include <iostream>
#include <iomanip>

using namespace std;

struct Patient {
    // Define the structure for patient data
    // You might need to adjust the data types based on your requirements
    string no_rekam_medis;
    string nama_pasien;
    string tanggal_lahir;
    int usia;
    string jenis_kelamin;
    string no_telepon;
    double berat_badan;
    double tinggi_badan;
    string keluhan_utama;
    string tanggal_masuk;
    string alamat;
};

const int MAX_DATA = 100; // Adjust the maximum number of patients if needed

Patient pasien[MAX_DATA];
int jumlahData = 0;

void tampilkanData() {
    system("cls");
    cout << "\n========================================================================= Menampilkan Data Pasien =================================================================================\n\n";
    cout << left << setw(5) << "No" << setw(18) << "No Rekam Medis" << setw(20) << "Nama Pasien" << setw(20) << "Tanggal Lahir"
         << setw(8) << "Usia" << setw(15) << "Jenis Kelamin" << setw(15) << "No Telepon" << setw(15) << "Berat Badan"
         << setw(15) << "Tinggi Badan" << setw(20) << "Keluhan Utama" << setw(15) << "Tanggal Masuk" << setw(20) << "Alamat" << endl;

    for (int i = 0; i < jumlahData; ++i) {
        cout << left << setw(5) << i + 1 << setw(18) << pasien[i].no_rekam_medis << setw(20) << pasien[i].nama_pasien
             << setw(20) << pasien[i].tanggal_lahir << setw(8) << pasien[i].usia << setw(15) << pasien[i].jenis_kelamin
             << setw(15) << pasien[i].no_telepon << setw(15) << pasien[i].berat_badan << setw(15) << pasien[i].tinggi_badan
             << setw(20) << pasien[i].keluhan_utama << setw(15) << pasien[i].tanggal_masuk << setw(20) << pasien[i].alamat << endl;
    }

    cout << "\n===================================================================================================================================================================================\n";
}

int main() {
    // You can add code here to input patient data and increment jumlahData
    // For example, you might use a loop to input multiple patients

    // After inputting data, you can call the tampilkanData function to display the information
    tampilkanData();

    return 0;
}

