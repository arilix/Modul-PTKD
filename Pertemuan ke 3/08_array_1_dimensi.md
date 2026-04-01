Laboratorium Teknik Komputer



# PRAKTIKUM 8
# ARRAY 1 DIMENSI


## 8.1 Tujuan

1. Mahasiswa dapat memahami Array 1 dimensi.
2. Mahasiswa mampu menyusun program menggunakan struktur Array 1 dimensi.


## 8.2 Landasan Teori

### 8.2.1 Pengertian Array

Untuk menyimpan sebuah nilai dengan tipe data tertentu, biasanya digunakan satu variabel.

Contoh:

```cpp
int f1, f2, f3, f4, f5;
```

Variabel di atas digunakan untuk menyimpan lima data integer. Namun jika data berjumlah banyak, tidak diketahui, atau dapat bertambah, penggunaan variabel satu per satu tidak efisien.

Array (larik) adalah sekumpulan data dengan urutan tertentu, bertipe data sama, dan menggunakan nama yang sama. Posisi tiap elemen ditunjukkan oleh indeks.

Berdasarkan dimensi, array dibagi menjadi:
- Array 1 dimensi
- Array 2 dimensi
- Array multi-dimensi


### 8.2.2 Struktur Dasar Array 1 Dimensi

Array 1 dimensi adalah deklarasi variabel dengan tipe data sama yang elemen-elemennya diakses melalui satu indeks. Secara default, indeks dimulai dari 0.

Contoh pengisian nilai:

```cpp
ujian[0] = 78;
ujian[1] = 84;
ujian[2] = 97;
ujian[3] = 60;
```

Sebelum diisi, array harus dideklarasikan:

```cpp
int ujian[4];
```

Nilai `4` menunjukkan jumlah elemen. Karena indeks dimulai dari 0, elemen valid untuk contoh ini adalah indeks 0 sampai 3.

Bentuk umum deklarasi:

```cpp
type_data variabel[jumlah_elemen];
```

Contoh:

```cpp
int nil[5];
```

Inisialisasi langsung saat deklarasi:

```cpp
int nil[5] = {7, 14, 21, 28, 35};
```

Representasi penyimpanan:
- Index: 0, 1, 2, 3, 4
- Nilai: 7, 14, 21, 28, 35


### 8.2.3 Menghitung Jumlah Elemen Array

Untuk menghitung jumlah elemen array, dapat menggunakan `sizeof()`.

Contoh:

```cpp
int array[] = {166, 7, 26, 82};
cout << sizeof(array) / sizeof(int);
```

Ekspresi tersebut menghasilkan `4`, sesuai jumlah elemen array.

Rumus umum:

- Banyak elemen = `sizeof(array) / sizeof(tipe_elemen)`


### 8.2.4 Melewatkan Array Sebagai Argumen Fungsi

Array dapat dikirim ke fungsi sebagai parameter. Saat array dimanipulasi di fungsi, nilai aslinya dapat ikut berubah.

Contoh:

```cpp
#include <iostream>
using namespace std;

void ubah(int x[]) {
    x[1] = 100;
}

int main() {
    int ujian[] = {90, 95, 85, 75};
    ubah(ujian);
    cout << "Elemen kedua dari array ujian adalah = " << ujian[1] << endl;
    return 0;
}
```

Pada contoh tersebut, elemen kedua berubah karena array diteruskan sebagai parameter fungsi.


## 8.3 Tugas Praktikum

_(Tugas praktikum akan diberikan oleh instruktur)_
