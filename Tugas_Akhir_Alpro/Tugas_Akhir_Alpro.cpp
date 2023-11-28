#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <ctime>

using namespace std;

struct tipedata {
    char nama[50];
    char jenkel, lagi, tipe2;
    int jumlah, total;
    int kembalian;
} td;

struct tiket {
    string tipe[11][4] = {
        {"1","Ultimate EXP","CAT 1          ","11,000,000"},
        {"2","My Universe ","Festival       ","5,700,000 "},
        {"3","CAT 1       ","Numered Seating","5,000,000 "},
        {"4","Festival    ","Free Standing  ","3,500,000 "},
        {"5","CAT 2       ","Numered Seating","4,000,000 "},
        {"6","CAT 3       ","Numered Seating","3,250,000 "},
        {"7","CAT 4       ","Numered Seating","2,500,000 "},
        {"8","CAT 5       ","Numered Seating","1,750,000 "},
        {"9","CAT 6       ","Numered Seating","1,250,000 "},
        {"10","CAT 7      ","Numered Seating","1,250,000 "},
        {"11","CAT 8      ","Numered Seating","800,000   "},
    };
} tk;

void headerprogram() {
    cout << "=========================================================================================" << endl;
    cout << "|                                                                                       |" << endl;
    cout << "|                                  WWW.COLDPLAY.COM                                     |" << endl;
    cout << "|                                                                                       |" << endl;
    cout << "|                                MUSIC of the SPHERES                                   |" << endl;
    cout << "|---------------------------------------------------------------------------------------|" << endl;
    cout << "|                          GELORA BUNG KARNO STADIUM JAKARTA                            |" << endl;
    cout << "|                             WEDNESDAY NOVEMBER 15, 2023                               |" << endl;
    cout << "|                     TICKETS AVAILABLE AT COLDPLAYINGJAKARTA.COM                       |" << endl;
    cout << "=========================================================================================" << endl;
}

void footerprogram() {
    cout << "=========================================================================================" << endl;
    cout << "|                                                                                       |" << endl;
    cout << "|                           SELAMAT MENIKMATI KONSER ANDA^.^                            |" << endl;
    cout << "|                                                                                       |" << endl;
    cout << "=========================================================================================" << endl;
}

void noid() {
    char noid[50];
atas1:
    cout << "Nomor Identitas(KTP/SIM/Paspor/Kartu Pelajar)(16 digit): ";
    cin.getline(noid, 50);
    if (strlen(noid) != 16) {
        cout << "Tulisakan Nomor Identitas Anda Dengan Benar\n";
        goto atas1;
    }
}

void nohp() {
    char nohp[50];
atas2:
    cout << "Nomor Handphone: ";
    cin.getline(nohp, sizeof(nohp));
    if (strlen(nohp) < 10 || strlen(nohp) > 12) {
        cout << "Tulisakan Nomor Handphone Anda Dengan Benar\n";
        goto atas2;
    }
}

int main() {
    headerprogram();

    cout << endl << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "|                              Masukan Data Pribadi Anda                                |" << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;

atas3:
    noid();
    nohp();
    cout << "Nama = ";
    cin.getline(td.nama, sizeof(td.nama));
    cout << "Alamat dari Nama adalah : " << td.nama << endl;

    cout << "Jenis Kelamin " << endl;
    cout << "a. Perempuan" << endl;
    cout << "b. Laki-Laki" << endl;
    cout << "Pilih Jenis Kelamin[a/b]: ";
    cin >> td.jenkel;
    cin.ignore();

    switch (td.jenkel) {
    case 'a':
        cout << "-----------------" << endl;
        cout << "| Hai, Mbak "<< td.nama <<" ^.^ | " << endl;
        cout << "--------------------------------" << endl;
        cout << "|Enter sekali untuk melanjutkan|" << endl;
        cout << "--------------------------------" << endl;
        break;
    case 'b':
        cout << "-----------------" << endl;
        cout << "| Hai, Mas " << td.nama << " ^.^ | " << endl;
        cout << "--------------------------------" << endl;
        cout << "|Enter sekali untuk melanjutkan|" << endl;
        cout << "--------------------------------" << endl;
        break;
    default:
        cout << "--------------------------" << endl;
        cout << "|Mohon Pilih dengan Benar|" << endl;
        cout << "--------------------------" << endl;
        goto atas3;
    }

    system("pause");
    system("cls");

    headerprogram();

    cout << endl;
    cout << "Nama: " << td.nama << endl;

kembali:

    cout << "=================================================================================================" << endl;
    cout << "|                                     Tiket Konser COLDPLAY                                     |" << endl;
    cout << "=================================================================================================" << endl;
    cout << endl << endl;
    cout << "-------------------------------------------------------------------------------------------------" << endl;
    cout << "|\tno\t" << "|\tZona\t\t|" << "\tTipe\t\t" << "\t|\tHarga\t\t|" << endl;
    cout << "-------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 4; j++) {
            cout << tk.tipe[i][j] << "\t\t|";
        }
        cout << endl;
    }
    cout << "-------------------------------------------------------------------------------------------------" << endl;

    cout << "Silahkan Pilih Tiket Konser yang Anda Inginkan" << endl;

atas4:
    cout << "Pilih[1-11]: ";
    cin >> td.tipe2;

    switch (td.tipe2) {

    case '1':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 11000000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup
        break;
    }

    case '2':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 5700000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    case '3':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 5000000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    case '4':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 3500000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    case '5':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 4000000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    case '6':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 3250000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    case '7':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 2500000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    case '8':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 1750000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    case '9':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 1250000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    case '10':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 1250000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    case '11':
    {
        cout << "Jumlah Yang dibeli: "; cin >> td.jumlah;
        int harga_tiket = 800000; // Harga tiket
        td.total = td.jumlah * harga_tiket;
        cout << "Total yang dibayar: " << td.total << endl;

        // Meminta pembayaran dari pengguna
        do {
            int pembayaran;
            cout << "Masukkan pembayaran: "; cin >> pembayaran;

            // Periksa apakah pembayaran cukup atau kurang
            if (pembayaran >= td.total) {
                td.kembalian = pembayaran - td.total;
                cout << "Kembalian Anda: " << td.kembalian << endl;
                break; // Pembayaran sudah cukup, keluar dari perulangan
            }
            else {
                cout << "Pembayaran kurang. Silakan masukkan pembayaran yang mencukupi." << endl;
            }
        } while (true); // Akan terus meminta pembayaran hingga pembayaran cukup

        break;
    }
    default:
    {
        cout << "Pilih dengan benar\n" << endl;
        goto atas4;
    }
    break;
        }
        cout << endl;
        cout << "--------------------------------" << endl;
        cout << "|Enter sekali untuk melanjutkan|" << endl;
        cout << "--------------------------------" << endl;

        getchar();

        system("pause");
        system("cls");

        headerprogram();

    cout << "Nama: " << td.nama << endl;
    cout << endl << endl;
    cout << "Apakah Ingin Membeli Lagi? [Y/T] : ";
    cin >> td.lagi;

    if (td.lagi == 'Y' || td.lagi == 'y') {
        cout << endl;
        goto kembali;
    }
    else if (td.lagi == 'T' || td.lagi == 't') {
        cout << "-----------------------------------------------------------------------------------------" << endl;
        cout << "Terimakasih " << td.nama << " telah melakukan pembelian tiket COLDPLAY" << endl;
        cout << "Silakan cek bukti pembayaran konser Anda ^.^ " << endl;
        cout << "-----------------------------------------------------------------------------------------" << endl;
        cout << endl;
    }

    footerprogram();
    cout << endl;
    cout << endl;
    ofstream myfile("BUKTI_PEMBAYARAN.txt");

    if (myfile.is_open()) {
        time_t now = time(0);
        tm ltm;
        localtime_s(&ltm, &now);

        myfile << "=========================================================================================" << endl;
        myfile << "|                                                                                       |" << endl;
        myfile << "|                                  WWW.COLDPLAY.COM                                     |" << endl;
        myfile << "|                                                                                       |" << endl;
        myfile << "|                                MUSIC of the SPHERES                                   |" << endl;
        myfile << "|---------------------------------------------------------------------------------------|" << endl;
        myfile << "|                         GELORA BUNG KARNO STADIUM JAKARTA                             |" << endl;
        myfile << "|                            WEDNESDAY NOVEMBER 15, 2023                                |" << endl;
        myfile << "|                     TICKETS AVAILABLE AT COLDPLAYINGJAKARTA.COM                       |" << endl;
        myfile << "=========================================================================================" << endl;
        myfile << endl << endl;
        myfile << "Pembelian tiket konser atas nama " << td.nama << " berhasil" << endl;
        myfile << "dengan jumlah tiket sebanyak " << td.jumlah << " buah tiket" << endl;
        myfile << "Dengan total pembayaran " << td.total << endl;
        myfile << "Kembalian: " << td.kembalian << endl;
        myfile << "Waktu dan Tanggal Pembelian: " << setw(2) << setfill('0') << ltm.tm_hour << ":"
            << setw(2) << setfill('0') << ltm.tm_min << ":"
            << setw(2) << setfill('0') << ltm.tm_sec << " "
            << setw(2) << setfill('0') << ltm.tm_mday << "-"
            << setw(2) << setfill('0') << 1 + ltm.tm_mon << "-"
            << 1900 + ltm.tm_year << endl;
        myfile << "Silahkan datang dan pesan tiket di situs kami lagi" << endl << endl;
        myfile << "=========================================================================================" << endl;
        myfile << "|                                                                                       |" << endl;
        myfile << "|                           SELAMAT MENIKMATI KONSER ANDA ^.^                           |" << endl;
        myfile << "|                                                                                       |" << endl;
        myfile << "=========================================================================================" << endl;
    }
    else {
        cout << "Gagal membuka file" << endl;
    }

    return 0;
}