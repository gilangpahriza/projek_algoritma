#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX = 50;
    string nim[MAX], nama[MAX], status[MAX];
    float tugas[MAX], uts[MAX], uas[MAX], akhir[MAX];
    char grade[MAX];
    int jml = 0, menu;

    do {
        cout <<"\n ====================================\n";
        cout <<   " | PROGRAM DATA NILAI MAHASISWA     |\n";
        cout <<   " ====================================\n";
        cout << "\n1. Input  2. Tampil  0. Keluar : ";
        cin >> menu;

        if (menu == 1) {
            cout << "Jumlah mahasiswa: ";
            cin >> jml;

            for (int i = 0; i < jml; i++) {
                cout << "\nNIM Nama Tugas UTS UAS : ";
                cin >> nim[i] >> nama[i]
                    >> tugas[i] >> uts[i] >> uas[i];

                akhir[i] = tugas[i]*0.3 + uts[i]*0.3 + uas[i]*0.4;

                if (akhir[i] >= 85) grade[i] = 'A';
                else if (akhir[i] >= 70) grade[i] = 'B';
                else if (akhir[i] >= 55) grade[i] = 'C';
                else if (akhir[i] >= 40) grade[i] = 'D';
                else grade[i] = 'E';

                status[i] = (akhir[i] >= 60) ? "LULUS" : "TIDAK LULUS";
            }
        }

        else if (menu == 2) {
            if (jml == 0) {
                cout << "Data belum ada\n";
            } else {
                cout << "\nNIM        Nama        Akhir  G  Status\n";
                cout << "---------------------------------------\n";
                for (int i = 0; i < jml; i++) {
                    cout << left
                         << setw(10) << nim[i]
                         << setw(12) << nama[i]
                         << setw(7)  << akhir[i]
                         << setw(3)  << grade[i]
                         << status[i] << endl;
                }
            }
        }
    } while (menu != 0);

    return 0;
}
