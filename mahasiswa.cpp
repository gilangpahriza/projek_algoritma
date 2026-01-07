
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 50;
    string nim[MAX], nama[MAX], status[MAX];
    float tugas[MAX], uts[MAX], uas[MAX], akhir[MAX];
    char grade[MAX];
    int jumlah = 0, pilih;

    do {
        cout << "\n====================================\n";
        cout << "   SISTEM PENILAIAN MAHASISWA\n";
        cout << "====================================\n";
        cout << "1. Input Data Mahasiswa\n";
        cout << "2. Tampilkan Data Mahasiswa\n";
        cout << "0. Keluar\n";
        cout << "Pilih Menu : ";
        cin >> pilih;

        if (pilih == 1) {
            cout << "\nMasukkan jumlah mahasiswa: ";
            cin >> jumlah;

            for (int i = 0; i < jumlah; i++) {
                cout << "\nMahasiswa ke-" << i + 1 << endl;
                cout << "NIM         : ";
                cin >> nim[i];
                cout << "Nama        : ";
                cin >> nama[i];
                cout << "Nilai Tugas : ";
                cin >> tugas[i];
                cout << "Nilai UTS   : ";
                cin >> uts[i];
                cout << "Nilai UAS   : ";
                cin >> uas[i];

                akhir[i] = (tugas[i] * 0.3) + (uts[i] * 0.3) + (uas[i] * 0.4);

                if (akhir[i] >= 85) grade[i] = 'A';
                else if (akhir[i] >= 70) grade[i] = 'B';
                else if (akhir[i] >= 55) grade[i] = 'C';
                else if (akhir[i] >= 40) grade[i] = 'D';
                else grade[i] = 'E';

                if (akhir[i] >= 60)
                    status[i] = "LULUS";
                else
                    status[i] = "TIDAK LULUS";
            }

            cout << "\nData berhasil disimpan!\n";
        }

        else if (pilih == 2) {
            if (jumlah == 0) {
                cout << "\nBelum ada data mahasiswa!\n";
            } else {
                cout << "\n================ DATA MAHASISWA ==================\n";
                cout << left << setw(12) << "NIM"
                     << setw(12) << "Nama"
                     << setw(10) << "Akhir"
                     << setw(8)  << "Grade"
                     << setw(15) << "Status" << endl;
                cout << "--------------------------------------------------\n";

                for (int i = 0; i < jumlah; i++) {
                    cout << left << setw(12) << nim[i]
                         << setw(12) << nama[i]
                         << setw(10) << akhir[i]
                         << setw(8)  << grade[i]
                         << setw(15) << status[i] << endl;
                }
            }
        }

        else if (pilih == 0) {
            cout << "\nTerima kasih, program selesai.\n";
        }

        else {
            cout << "\nMenu tidak valid!\n";
        }

    } while (pilih != 0);

    return 0;
}
