#include "Doublylist.h"

int main() {
    List L;
    CreateList(L);

    // Latihan 1: Input Data Kendaraan
    for (int i = 0; i < 4; i++) {
        infotype data;
        cout << "masukkan nomor polisi: ";
        cin >> data.nopol;
        cout << "masukkan warna kendaraan: ";
        cin >> data.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> data.thnBuat;

        if (findElm(L, data) != Nil) {
            cout << "nomor polisi sudah terdaftar" << endl;
        } else {
            address P = alokasi(data);
            insertLast(L, P);
        }
        cout << endl;
    }

    cout << "DATA LIST 1" << endl << endl;
    printInfo(L);
    cout << endl;

    // Latihan 2: Cari Elemen Berdasarkan Nomor Polisi
    infotype cari;
    cout << "Masukkan Nomor Polisi yang dicari  : ";
    cin >> cari.nopol;
    cout << endl;

    address PFound = findElm(L, cari);
    if (PFound != Nil) {
        cout << "Nomor Polisi : " << PFound->info.nopol << endl;
        cout << "warna        : " << PFound->info.warna << endl;
        cout << "Tahun        : " << PFound->info.thnBuat << endl;
    } else {
        cout << "Nomor polisi tidak ditemukan." << endl;
    }
    cout << endl;

    // Latihan 3: Hapus Elemen Berdasarkan Nomor Polisi
    infotype hapus;
    cout << "Masukkan Nomor Polisi yang akan dihapus  : ";
    cin >> hapus.nopol;

    address PDel = findElm(L, hapus);
    if (PDel != Nil) {
        if (PDel == L.First) {
            deleteFirst(L, PDel);
        } else if (PDel == L.Last) {
            deleteLast(L, PDel);
        } else {
            address Prec = PDel->prev;
            deleteAfter(Prec, PDel);
        }
        dealokasi(PDel);
        cout << "Data dengan nomor polisi " << hapus.nopol << " berhasil dihapus." << endl;
    } else {
        cout << "Data dengan nomor polisi " << hapus.nopol << " tidak ditemukan." << endl;
    }
    cout << endl;

    cout << "DATA LIST 1" << endl << endl;
    printInfo(L);

    return 0;
}
