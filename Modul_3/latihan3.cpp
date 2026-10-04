#include <iostream>

using namespace std;

void tampilkanArray(int arr[3][3], const string& nama) {
    cout << "Isi Array " << nama << ":" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void tukarPosisiArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    if (baris >= 0 && baris < 3 && kolom >= 0 && kolom < 3) {
        int temp = arr1[baris][kolom];
        arr1[baris][kolom] = arr2[baris][kolom];
        arr2[baris][kolom] = temp;
    } else {
        cout << "Posisi tidak valid!" << endl;
    }
}

void tukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    tampilkanArray(array1, "1");
    tampilkanArray(array2, "2");
    
    cout << "Menukar nilai pada posisi [1][1] (baris 1, kolom 1)..." << endl;
    tukarPosisiArray(array1, array2, 1, 1);
    
    tampilkanArray(array1, "1 (Setelah ditukar)");
    tampilkanArray(array2, "2 (Setelah ditukar)");
    
    int a = 10;
    int b = 20;
    int* p1 = &a;
    int* p2 = &b;
    
    cout << "Nilai sebelum ditukar pointer:" << endl;
    cout << "a = " << *p1 << ", b = " << *p2 << endl;
    
    tukarPointer(p1, p2);
    
    cout << "Nilai setelah ditukar pointer:" << endl;
    cout << "a = " << *p1 << ", b = " << *p2 << endl;
    
    return 0;
}
