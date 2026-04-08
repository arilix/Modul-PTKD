Laboratorium Teknik Komputer



# PRAKTIKUM 13
# STRUKTUR (STRUCT)


## 13.1 Tujuan

1. Mahasiswa mampu memahami konsep `struct`.
2. Mahasiswa mampu menyusun program menggunakan `struct`.


## 13.2 Landasan Teori

### 13.2.1 Pengertian Struktur (Struct)

`Struct` adalah tipe data bentukan yang digunakan untuk mengelompokkan beberapa variabel dengan tipe data berbeda dalam satu nama.

Contohnya, data mahasiswa dapat terdiri dari nama (string), NIM (string), dan nilai (float) yang disatukan dalam satu struktur data.

Dalam pemrograman, `struct` sering dipakai untuk merepresentasikan satu entitas data (record) agar penyimpanan dan pengolahan data menjadi lebih terorganisir.


### 13.2.2 Deklarasi Struktur (Struct)

Bentuk umum deklarasi `struct` pada C++:

```cpp
struct NamaStruct {
    tipe_data anggota1;
    tipe_data anggota2;
    tipe_data anggota3;
};
```

Contoh:

```cpp
struct DataTanggal {
    int tahun;
    int bulan;
    int tanggal;
};
```

Setelah dideklarasikan, `struct` dapat digunakan sebagai tipe data untuk membuat variabel baru:

```cpp
DataTanggal tanggal_lahir;
```


### 13.2.3 Akses Anggota Struct

Untuk mengakses anggota dari variabel `struct`, digunakan operator titik (`.`).

Contoh:

```cpp
DataTanggal tanggal_lahir;
tanggal_lahir.tahun = 2026;
tanggal_lahir.bulan = 4;
tanggal_lahir.tanggal = 8;
```


### 13.2.4 Contoh Program Sederhana Struct

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string kelas;
};

int main() {
    Mahasiswa m;

    cout << "Nama  : ";
    getline(cin, m.nama);
    cout << "NIM   : ";
    getline(cin, m.nim);
    cout << "Kelas : ";
    getline(cin, m.kelas);

    cout << "\nData Mahasiswa" << endl;
    cout << "Nama  : " << m.nama << endl;
    cout << "NIM   : " << m.nim << endl;
    cout << "Kelas : " << m.kelas << endl;

    return 0;
}
```


## 13.3 Tugas Praktikum

_(Tugas praktikum akan diberikan oleh instruktur)_
