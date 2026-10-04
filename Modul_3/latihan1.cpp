#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> n;

    if (n > 10) {
        cout << "Jumlah mahasiswa melebihi batas maksimal (10)." << endl;
        return 1;
    } else if (n <= 0) {
        cout << "Jumlah mahasiswa tidak valid." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nData Mahasiswa ke-" << (i + 1) << endl;
        cout << "Nama\t\t: ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        cout << "NIM\t\t: ";
        cin >> mhs[i].nim;
        cout << "Nilai UTS\t: ";
        cin >> mhs[i].uts;
        cout << "Nilai UAS\t: ";
        cin >> mhs[i].uas;
        cout << "Nilai Tugas\t: ";
        cin >> mhs[i].tugas;

        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "Data Nilai Akhir Mahasiswa" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nama\t\t: " << mhs[i].nama << endl;
        cout << "NIM\t\t: " << mhs[i].nim << endl;
        cout << "Nilai Akhir\t: " << mhs[i].nilaiAkhir << endl;
    }

    return 0;
}
