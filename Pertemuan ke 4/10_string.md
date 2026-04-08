Laboratorium Teknik Komputer



# PRAKTIKUM 10
# STRING


## 10.1 Tujuan

1. Mahasiswa dapat memahami penggunaan tipe data string.
2. Mahasiswa mampu menyusun program dengan memanfaatkan operasi string.


## 10.2 Landasan Teori

### 10.2.1 Pengantar String

Dalam mengolah, memanipulasi, dan menampung data teks, digunakan bentuk data yang disebut string. Contohnya untuk menyimpan kata, nama, atau kalimat.

Pada C/C++, string pada dasarnya direpresentasikan sebagai kumpulan karakter (array satu dimensi bertipe `char`) yang diakhiri karakter null (`\0`).

String dalam program C/C++ dapat muncul dalam bentuk:
1. Hard-coded string literals.
2. Array karakter yang didefinisikan programmer.
3. Pointer ke karakter.

Ciri utama string tetap sama, yaitu berakhir dengan karakter null dan direpresentasikan mulai dari alamat karakter pertama.


### 10.2.2 Konstanta String

Konstanta string ditulis langsung di dalam program menggunakan tanda kutip dua.

Contoh:
```cpp
"nama"
```

Ketika compiler menemukan literal string, data karakter akan disimpan berurutan dalam memori dan otomatis ditambahkan karakter null (`\0`) di bagian akhir.


### 10.2.3 Variabel String

Untuk menyimpan string ke variabel, perlu disediakan array karakter yang cukup menampung seluruh karakter ditambah satu karakter null.

Contoh deklarasi:
```cpp
char company[20];
```

Instruksi di atas mendeklarasikan variabel string dengan panjang maksimal 20 karakter (termasuk karakter null).


### 10.2.4 Library String

Beberapa fungsi operasi string yang umum digunakan pada C/C++:

1. `strcpy`
- Digunakan untuk menyalin string.

2. `strlen`
- Digunakan untuk mengetahui panjang string.
- Nilai keluaran berupa bilangan bulat panjang string.

3. `strcat`
- Digunakan untuk menggabungkan string.

4. `strupr`
- Digunakan untuk mengubah huruf menjadi kapital.

5. `strlwr`
- Digunakan untuk mengubah huruf menjadi kecil.

6. `strstr`
- Digunakan untuk mencari substring pada string lain.

7. `strrev`
- Digunakan untuk membalik urutan string.


## 10.3 Tugas Praktikum

_(Tugas praktikum akan diberikan oleh instruktur)_
