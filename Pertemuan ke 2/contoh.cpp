#include <iostream>

using namespace std;

int main() {
    int pilihan;
    double a,b;

    do {
        cout << "Pilih operasi: 1. Penjumlahan 2. Pengurangan 3. Perkalian 4. Pembagian 5. Keluar" << endl;
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;
        } else if (pilihan == 5) {
            cout << "Terima kasih telah menggunakan kalkulator!" << endl;
            break;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

        switch (pilihan)
        {
        case 1:
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case 2:
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case 3:
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << a << " / " << b << " = " << a / b << endl;
            else
                cout << "Error: Pembagian dengan nol!" << endl;
            break;
        
        default:
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 5);

    return 0;
}
