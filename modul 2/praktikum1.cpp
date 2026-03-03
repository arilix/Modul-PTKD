#include <iostream>
using namespace std;

int main() {
    int p, l, tinggi;

    cout << "===masukkan program===" << endl;
    cout << "Masukkan panjang : ";
    cin >> p;
    cout << "Masukkan lebar : ";
    cin >> l;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;

    int volume = p * l * tinggi;
    cout << "Volume balok: " << volume << endl;

    return 0;
}