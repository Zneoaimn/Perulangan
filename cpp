#include <iostream>
using namespace std;

int main() {
    int n;
    int jumlahGanjil = 0, jumlahGenap = 0;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 1; i < n; ++i) {  // Loop hanya sampai < n
        if (i % 2 == 0) {
            jumlahGenap += i;  // Menambahkan ke jumlah genap
        } else {
            jumlahGanjil += i;  // Menambahkan ke jumlah ganjil
        }
    }

    cout << "Jumlah total bilangan ganjil: " << jumlahGanjil << endl;
    cout << "Jumlah total bilangan genap: " << jumlahGenap << endl;

    return 0;
}
