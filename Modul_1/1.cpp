#include <iostream>
using namespace std;

int main() {
    float bil1, bil2;
    cout << "Masukkan dua bilangan : ";
    cin >> bil1 >> bil2;

    cout << "Penjumlahan: " << bil1 + bil2 << endl;
    cout << "Pengurangan: " << bil1 - bil2 << endl;
    cout << "Perkalian: " << bil1 * bil2 << endl;
    
    if (bil2 != 0) {
        cout << "Pembagian: " << bil1 / bil2 << endl;
    } else {
        cout << "Pembagian: Error (tidak bisa dibagi dengan nol)" << endl;
    }

    return 0;
}
