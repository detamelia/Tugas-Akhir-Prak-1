#include <iostream>
using namespace std;

int main() {
    int jumlah;

    cout << "PROGRAM DAFTAR MATA KULIAH SEMESTER" << endl;

    cout << "Masukkan jumlah mata kuliah: ";
    cin >> jumlah;

    string matkul[jumlah];
    int sks[jumlah];
    int totalSKS = 0;

    cout << "\nMasukkan nama mata kuliah dan jumlah SKS:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "\nMata kuliah ke-" << i+1 << " : ";
        cin >> ws; 
        getline(cin, matkul[i]);

        cout << "Jumlah SKS " << matkul[i] << " : ";
        cin >> sks[i];

        totalSKS += sks[i];
    }

    cout << "\nDAFTAR MATA KULIAH SEMESTER INI" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << i+1 << ". " << matkul[i] << " (" << sks[i] << " SKS)" << endl;
    }

    cout << "\nTotal SKS semester ini: " << totalSKS << endl;

    if (totalSKS < 18) {
        cout << "Keterangan: SKS masih kurang, boleh menambah mata kuliah." << endl;
    } else if (totalSKS > 24) {
        cout << "Keterangan: SKS melebihi batas maksimal (24)." << endl;
    } else {
        cout << "Keterangan: SKS sudah sesuai ketentuan." << endl;
    }

    return 0;
}
