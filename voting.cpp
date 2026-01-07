#include <iostream>
using namespace std;

int main() {
    string nim[100];
    int jumlahmahasiwa;
    int pilihan;

    int sangatbaik = 0;
    int baik = 0;       
    int cukup = 0;
    int kurang = 0; 
    int sangatkurang = 0;   

    cout << "=====SISTEM VOTING PENILAIAN MAHASISWA=====" << endl;
    cout << "Masukkan jumlah mahasiswa yang akan dinilai: ";
    cin >> jumlahmahasiwa;  

    for (int i = 0; i < jumlahmahasiwa; i++) {
        cout << "Masukkan NIM mahasiswa ke-" << i + 1 << ": ";
        cin >> nim[i];

        cout << "Pilih penilaian untuk mahasiswa dengan NIM " << nim[i] << ":" << endl;
        cout << "1. Sangat Baik" << endl;
        cout << "2. Baik" << endl;
        cout << "3. Cukup" << endl;
        cout << "4. Kurang" << endl;
        cout << "5. Sangat Kurang" << endl;
        cout << "Masukkan pilihan Anda (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                sangatbaik++;
                break;
            case 2:
                baik++;
                break;
            case 3:
                cukup++;
                break;
            case 4:
                kurang++;
                break;
            case 5:
                sangatkurang++;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                i--; // ulangi input untuk mahasiswa yang sama
                continue;
        }
    }
    cout << "\n=====HASIL VOTING PENILAIAN MAHASISWA=====" << endl;
    cout << "Sangat Baik: " << sangatbaik << endl;  
    cout << "Baik: " << baik << endl;
    cout << "Cukup: " << cukup << endl;
    cout << "Kurang: " << kurang << endl;
    cout << "Sangat Kurang: " << sangatkurang << endl;
    
    return 0;


}