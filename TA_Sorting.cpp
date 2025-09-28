#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar posisi lagu
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printPlaylist(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << arr[i] << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah lagu dalam playlist: ";
    cin >> n;

    string playlist[n];
    cout << "Masukkan judul lagu:" << endl;
    cin.ignore(); // Supaya getline tidak terlewati
    for (int i = 0; i < n; i++) {
        getline(cin, playlist[i]);
    }

    bubbleSort(playlist, n);

    cout << "\nPlaylist setelah diurutkan berdasarkan judul lagu:" << endl;
    printPlaylist(playlist, n);

    return 0;
}
