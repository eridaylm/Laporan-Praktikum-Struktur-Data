#include <iostream>
#include <string>
using namespace std;

void sebutAngka(int n) {
    string kata[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};

    if (n < 12) {
        cout << kata[n];
    } else if (n < 20) {
        cout << kata[n - 10] << " belas";
    } else if (n < 100) {
        cout << kata[n / 10] << " puluh";
        if (n % 10 != 0) {
            cout << " " << kata[n % 10];
        }
    } else if (n == 100) {
        cout << "seratus";
    } 
}

int main() {
    int angka;

    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        cout << angka << ": ";
        sebutAngka(angka);
        cout << endl;
    } else {
        cout << "Input harus bilangan positif 0-100!" << endl;
    }

    return 0;
}