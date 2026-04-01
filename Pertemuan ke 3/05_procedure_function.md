Laboratorium Teknik Komputer



# PRAKTIKUM 5
# PROCEDURE & FUNCTION


## 5.1 Tujuan

1. Mahasiswa mampu memanfaatkan function yang sudah disediakan oleh Code Block.
2. Mahasiswa mampu membuat function dengan memanfaatkan variabel lokal maupun global.
3. Mahasiswa mampu membuat function dengan menggunakan parameter input dan parameter output.
4. Mahasiswa mampu membuat function yang mengembalikan dan tidak mengembalikan nilai.


## 5.2 Landasan Teori

### 5.2.1 Pengertian

Procedure dan Function dalam bahasa pemrograman biasa juga disebut dengan sub routine. Secara garis besar, procedure dan function memiliki pengertian yang sama, yaitu sebuah blok statement yang dapat dipanggil lebih dari satu kali dari lokasi berbeda dalam sebuah program.

Namun, jika dibandingkan lebih detail, terdapat perbedaan di antara keduanya:
- Function adalah blok program yang jika dipanggil dan dijalankan akan mengembalikan suatu nilai.
- Procedure adalah blok program yang tidak mengembalikan nilai.

Pada bahasa C++ (dan turunan C lainnya), procedure umumnya diwakili oleh function dengan tipe kembalian `void`, yang berarti function tersebut tidak memiliki nilai balik.

Berikut kegunaan function:
1. Lebih ringkas karena mengurangi penulisan program berulang.
2. Mendukung pendekatan top-down dan divide-and-conquer.
3. Program lebih mudah dipahami karena lebih terstruktur.
4. Memudahkan troubleshooting karena alur program jelas.
5. Mempermudah pembuatan dokumentasi.
6. Mendukung reuseability karena function dapat dipanggil berkali-kali.

Dalam bahasa C/C++, function dapat dibagi menjadi dua:

A. Standard Library Function
Function yang sudah disediakan oleh header/library C/C++.

Contoh: untuk menggunakan `system("cls")`, perlu deklarasi library:
```cpp
#include <stdlib.h>
```

B. Programmer-Defined Function
Function yang dibuat sendiri oleh programmer, memiliki nama unik, dan dapat berada dalam file program atau library buatan sendiri.


### 5.2.2 Format Function

Bentuk umum penulisan function:

```cpp
tipe_data nama_function(tipe_data argument1, tipe_data argument2, ...) {
    statement;
}
```

Keterangan:
- `tipe_data`: tipe data nilai yang dihasilkan function.
- `nama_function`: nama function yang unik.
- `argument`: parameter yang digunakan function.
- `statement`: instruksi di dalam function.

Contoh function:

```cpp
float luas_lingkaran(float jari) {
    return (3.14 * jari * jari);
}
```


### 5.2.3 Struktur Function

Ada dua cara penempatan programmer-defined function:

A. Function ditulis di atas `main()`
- Tidak perlu deklarasi prototype.

B. Function ditulis di bawah `main()`
- Harus menggunakan function prototype.

Contoh function prototype:

```cpp
long kuadrat(long l);
void garis();
double maks(double x, double y);
```

Penjelasan:
- `kuadrat()` punya parameter `long` dan nilai balik `long`.
- `garis()` tidak punya parameter dan tidak punya nilai balik (`void`).
- `maks()` punya dua parameter `double` dan nilai balik `double`.


### 5.2.4 Function Parameter

Terdapat dua jenis parameter:
1. Parameter formal: variabel pada definisi function.
2. Parameter aktual: variabel/konstanta saat pemanggilan function.

Contoh program:

```cpp
#include <stdio.h>

float L_persegipanjang(float p, float l);
float L_lingkaran(float r);

int main() {
    float pj = 20.25;
    float lb = 4.75;
    float ls;

    ls = L_persegipanjang(pj, lb);
    printf("HASIL HITUNG LUAS PERSEGI PANJANG = %f\n", ls);

    ls = L_lingkaran(10);
    printf("HASIL HITUNG LUAS LINGKARAN = %f\n", ls);

    return 0;
}

float L_persegipanjang(float pj, float lb) {
    return (pj * lb);
}

float L_lingkaran(float r) {
    return (3.14 * r * r);
}
```


### 5.2.5 Jenis Function

A. Function yang Mengembalikan Nilai
- Memiliki tipe data di depan nama function.
- Menggunakan `return` untuk mengembalikan nilai.

Contoh:

```cpp
#include <iostream>
using namespace std;

double gaya(double m, double a) {
    double hasil;
    hasil = m * a;
    return hasil;
}

int main() {
    double m, a, f;
    cout << "Massa      : ";
    cin >> m;
    cout << "Percepatan : ";
    cin >> a;

    f = gaya(m, a);
    cout << "F: " << f;

    return 0;
}
```

B. Function yang Tidak Mengembalikan Nilai
- Menggunakan `void`.
- Hasil biasanya langsung ditampilkan atau diproses di dalam function.

Contoh:

```cpp
#include <iostream>
using namespace std;

void gaya(double m, double a) {
    double hasil;
    hasil = m * a;
    cout << hasil;
}

int main() {
    double m, a;
    cout << "Massa      : ";
    cin >> m;
    cout << "Percepatan : ";
    cin >> a;

    cout << "F: ";
    gaya(m, a);

    return 0;
}
```


### 5.2.6 Cara Pelewatan Parameter Function

A. Pass by Value
Nilai parameter aktual disalin ke parameter formal. Perubahan pada parameter formal tidak mengubah nilai asli variabel aktual.

Contoh:

```cpp
#include <iostream>
using namespace std;

int pangkat(int x) {
    x = x * x;
    return x;
}

int main() {
    int n = 10;
    cout << "Hasil " << n << " x " << n << " = " << pangkat(n) << endl;
    return 0;
}
```

B. Pass by Reference
Parameter dikirim berdasarkan alamat/referensi sehingga perubahan pada parameter formal memengaruhi variabel aktual.

Contoh:

```cpp
#include <iostream>
using namespace std;

void tukar(int *x, int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;

    cout << endl;
    cout << "Nilai di Akhir Function tukar()" << endl;
    cout << "x = " << *x << " y = " << *y << endl;
}

int main() {
    int i = 10, j = 20;

    cout << "Nilai Sebelum Function Dipanggil" << endl;
    cout << "i = " << i << " j = " << j << endl;

    tukar(&i, &j);

    cout << endl;
    cout << "Nilai Setelah Function Dipanggil" << endl;
    cout << "i = " << i << " j = " << j << endl;

    return 0;
}
```


## 5.3 Tugas Praktikum

_(Tugas praktikum akan diberikan oleh instruktur)_
