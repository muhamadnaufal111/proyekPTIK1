#include <iostream>
#include <limits>

using namespace std;

struct Data {
    char no_rekam_medis[20], nama_pasien[20], tanggal_lahir[20], usia[20], jenis_kelamin[20], no_telepon[20], berat_badan[20], tinggi_badan[20], keluhan_utama[20], tanggal_masuk[20], alamat[20];
};

Data pasien[100];
int jumlahData = 0;

void inputData() {
    cout << "Jumlah Data Pasien yang Akan Diinput: ";
    int tambahanData;
    cin >> tambahanData;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan newline (\n) di buffer

    for (int i = 0; i < tambahanData; ++i) {
        system("cls");
        cout << "Data Ke-" << jumlahData + 1 << endl;
        cout << "No Rekam Medis   : ";
        cin.getline(pasien[jumlahData].no_rekam_medis, sizeof(pasien[jumlahData].no_rekam_medis));

        cout << "Nama Pasien      : ";
        cin.getline(pasien[jumlahData].nama_pasien, sizeof(pasien[jumlahData].nama_pasien));

        cout << "Tanggal Lahir    : ";
        cin.getline(pasien[jumlahData].tanggal_lahir, sizeof(pasien[jumlahData].tanggal_lahir));

        cout << "Usia             : ";
        cin.getline(pasien[jumlahData].usia, sizeof(pasien[jumlahData].usia));

        cout << "Jenis Kelamin    : ";
        cin.getline(pasien[jumlahData].jenis_kelamin, sizeof(pasien[jumlahData].jenis_kelamin));

        cout << "No Telepon       : ";
        cin.getline(pasien[jumlahData].no_telepon, sizeof(pasien[jumlahData].no_telepon));

        cout << "Berat Badan      : ";
        cin.getline(pasien[jumlahData].berat_badan, sizeof(pasien[jumlahData].berat_badan));

        cout << "Tinggi Badan     : ";
        cin.getline(pasien[jumlahData].tinggi_badan, sizeof(pasien[jumlahData].tinggi_badan));

        cout << "Keluhan Utama    : ";
        cin.getline(pasien[jumlahData].keluhan_utama, sizeof(pasien[jumlahData].keluhan_utama));

        cout << "Tanggal Masuk    : ";
        cin.getline(pasien[jumlahData].tanggal_masuk, sizeof(pasien[jumlahData].tanggal_masuk));

        cout << "Alamat           : ";
        cin.getline(pasien[jumlahData].alamat, sizeof(pasien[jumlahData].alamat));

        ++jumlahData;
    }
}

int main() {
    inputData(); // Panggil fungsi inputData()
    return 0;
}
