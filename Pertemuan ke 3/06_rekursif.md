Laboratorium Teknik Komputer



# PRAKTIKUM 6
# REKURSIF


## 6.1 Tujuan

1. Mahasiswa mampu membuat function dengan menggunakan parameter input dan parameter output.
2. Mahasiswa mampu memahami dan membuat fungsi rekursif.


## 6.2 Landasan Teori

### 6.2.1 Fungsi Rekursif

Rekursif adalah teknik dalam pemrograman di mana sebuah fungsi memanggil dirinya sendiri, baik secara langsung maupun tidak langsung.

- Rekursif langsung: function memanggil dirinya sendiri di dalam body function.
- Rekursif tidak langsung: function memanggil function lain terlebih dahulu, lalu kembali memanggil dirinya sendiri.

Format fungsi rekursif langsung:

```cpp
Tipe_fungsi nama_fungsi(parameter) {
    // statement
    nama_fungsi(parameter_baru);
}
```

Format fungsi rekursif tidak langsung:

```cpp
ret_tipe satu(parameter) {
    // statement
    dua(parameter_baru);
}

ret_tipe dua(parameter) {
    // statement
    satu(parameter_baru);
}
```

Secara fungsi, rekursif mirip dengan perulangan, tetapi dilakukan melalui pemanggilan function berulang. Dalam penggunaannya tetap diperlukan:
- Seleksi kondisi sebagai batas berhenti (base case)
- Perubahan nilai variabel pengendali

Kelemahan rekursif:
- Membutuhkan stack yang cukup besar.
- Memiliki overhead pemanggilan function berulang.

Namun, pada beberapa kasus, rekursif justru lebih sederhana dibanding perulangan.


### 6.2.2 Proses Rekursif

Contoh function rekursif:

```cpp
#include <stdio.h>

void rekursif(int x, int y) {
    if (y == 0) return;

    x++;
    y--;

    printf("Masuk  -> x = %d || y = %d\n", x, y);
    rekursif(x, y);
    printf("Keluar -> x = %d || y = %d\n", x, y);
}

int main() {
    rekursif(1, 3);
    return 0;
}
```

Alur umum:
1. Jika kondisi dasar terpenuhi (`y == 0`), function berhenti.
2. Jika belum, nilai diubah (`x++`, `y--`).
3. Function memanggil dirinya sendiri.
4. Setelah mencapai kondisi dasar, function kembali satu per satu ke atas (unwinding).


Contoh menghitung faktorial dengan rekursif:

```cpp
#include <iostream>
using namespace std;

long factorial(long a) {
    if (a > 1)
        return a * factorial(a - 1);
    else
        return 1;
}

int main() {
    long n;
    cout << "Tuliskan bilangan = ";
    cin >> n;

    cout << n << "! = " << factorial(n) << endl;
    return 0;
}
```

Konsep faktorial rekursif:
- $n! = n \times (n-1)!$
- Kondisi dasar: $1! = 1$ (atau saat nilai sudah mencapai batas dasar)


## 6.3 Tugas Praktikum

_(Tugas praktikum akan diberikan oleh instruktur)_
