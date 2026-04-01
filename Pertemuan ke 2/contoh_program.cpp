#include <iostream>
using namespace std;

int main() {
    int n, pilihan;

    do {
        cout << "\n=== MENU PROGRAM ===" << endl;
        cout << "1. Tampilkan bilangan genap & ganjil" << endl;
        cout << "2. Cek bilangan positif/negatif & genap/ganjil" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            // Modul 4: FOR loop
            cout << "Masukkan batas n: ";
            cin >> n;

            cout << "Genap : ";
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0)   // Modul 3: IF
                    cout << i << " ";
            }

            cout << "\nGanjil: ";
            for (int i = 1; i <= n; i++) {
                if (i % 2 != 0)   // Modul 3: IF
                    cout << i << " ";
            }
            cout << endl;

        } else if (pilihan == 2) {
            // Modul 3: IF-ELSE
            int angka;
            cout << "Masukkan bilangan: ";
            cin >> angka;

            if (angka > 0)
                cout << "Positif" << endl;
            else if (angka < 0)
                cout << "Negatif" << endl;
            else
                cout << "Nol" << endl;

            if (angka % 2 == 0)
                cout << "Genap" << endl;
            else
                cout << "Ganjil" << endl;

        } else if (pilihan != 3) {
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 3);  // Modul 4: DO-WHILE

    cout << "Program selesai." << endl;
    return 0;
}
