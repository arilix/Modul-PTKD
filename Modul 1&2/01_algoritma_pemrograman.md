Laboratorium Teknik Komputer



# PRAKTIKUM 1
# ALGORITMA DAN PEMROGRAMAN


## 1.1 Tujuan

1. Mahasiswa dapat memahami konsep dasar algoritma dan pemrograman.
2. Mahasiswa mampu memahami dan menggunakan flowchart.
3. Mahasiswa dapat menentukan tipe data yang sesuai untuk variabel dan konstanta dalam input dan output algoritma.
4. Mahasiswa dapat mengetahui dan menggunakan macam-macam operator.
5. Mahasiswa mampu menyusun algoritma sekuensial sederhana maupun kompleks menggunakan flowchart.


## 1.2 Landasan Teori

### 1.2.1 Algoritma

Algoritma adalah urutan langkah-langkah logis untuk menyelesaikan suatu permasalahan secara sistematis. Algoritma merupakan inti dari pemrograman, karena sebelum menulis kode program, programmer harus merancang langkah-langkah penyelesaian masalah terlebih dahulu.

**Contoh Algoritma Sederhana - Memasak Air:**
1. Siapkan panci berisi air dan kompor
2. Letakkan panci di atas kompor
3. Nyalakan kompor
4. Tunggu hingga air mendidih
5. Matikan kompor

**Contoh Algoritma - Menghitung Luas Lingkaran:**
1. Input jari-jari lingkaran (r)
2. Hitung Luas = 3.14 × r × r
3. Tampilkan hasil Luas

**Karakteristik Algoritma yang Baik:**
- Memiliki logika yang jelas dan sistematis
- Memiliki awal dan akhir yang jelas
- Setiap langkah harus dapat dilaksanakan
- Menghasilkan output yang benar
- Efisien dalam penggunaan sumber daya


### 1.2.2 Pemrograman

Pemrograman adalah proses menyusun, menguji, dan memperbaiki kode untuk membangun program komputer. Pemrograman melibatkan penerjemahan algoritma ke dalam bahasa yang dapat dipahami komputer.

**Tahapan Pemrograman:**
1. Analisis masalah
2. Perancangan algoritma
3. Penulisan kode program
4. Testing dan debugging
5. Dokumentasi


### 1.2.3 Flowchart

Flowchart adalah diagram alir yang menggambarkan urutan proses dan hubungan antar proses dalam suatu program. Flowchart menggunakan simbol-simbol standar untuk merepresentasikan berbagai jenis operasi.

**Simbol-Simbol Flowchart:**

| Simbol | Nama | Fungsi |
|--------|------|--------|
| → | Flow Direction | Penghubung antar proses |
| ◯ | Terminator | Awal dan akhir program |
| ◇ | Decision | Pengambilan keputusan (kondisi) |
| ▭ | Process | Proses pengolahan data |
| ▱ | Input/Output | Operasi input atau output data |
| ⬡ | Preparation | Inisialisasi nilai variabel |

**Contoh Flowchart - Menghitung Luas Segitiga:**
```
START
  ↓
INPUT alas, tinggi
  ↓
PROCESS: luas = (alas × tinggi) / 2
  ↓
OUTPUT luas
  ↓
END
```


### 1.2.4 Variabel dan Tipe Data

#### A. Variabel

Variabel adalah wadah untuk menyimpan nilai yang dapat berubah selama program berjalan. Setiap variabel harus memiliki nama dan tipe data.

**Jenis Variabel:**
1. **Variabel Lokal** - Dideklarasikan di dalam fungsi, hanya dapat diakses dalam fungsi tersebut
2. **Variabel Global** - Dideklarasikan di luar semua fungsi, dapat diakses oleh semua fungsi

**Format Deklarasi:**
```cpp
tipe_data nama_variabel;
```

**Contoh:**
```cpp
int umur;
float nilai;
char huruf;
```

#### B. Tipe Data

Tipe data menentukan jenis nilai yang dapat disimpan dalam variabel dan ukuran memori yang dialokasikan.

**Tipe Data Dasar dalam C++:**

| Tipe Data | Ukuran | Rentang Nilai | Keterangan |
|-----------|--------|---------------|------------|
| `int` | 4 byte | -2,147,483,648 s/d 2,147,483,647 | Bilangan bulat |
| `short` | 2 byte | -32,768 s/d 32,767 | Bilangan bulat pendek |
| `long` | 4 byte | -2,147,483,648 s/d 2,147,483,647 | Bilangan bulat panjang |
| `char` | 1 byte | -128 s/d 127 atau 0 s/d 255 | Karakter/huruf |
| `float` | 4 byte | ±3.4e±38 (7 digit) | Bilangan desimal |
| `double` | 8 byte | ±1.7e±308 (15 digit) | Bilangan desimal presisi ganda |
| `bool` | 1 byte | true atau false | Nilai boolean |

**Tipe Data Unsigned (Tanpa Tanda):**

| Tipe Data | Ukuran | Rentang Nilai |
|-----------|--------|---------------|
| `unsigned char` | 1 byte | 0 - 255 |
| `unsigned int` | 4 byte | 0 - 4,294,967,295 |
| `unsigned short` | 2 byte | 0 - 65,535 |

#### C. Konstanta

Konstanta adalah variabel yang nilainya tetap dan tidak dapat diubah setelah inisialisasi.

**Format Deklarasi:**
```cpp
#define NAMA_KONSTANTA nilai
const tipe_data nama_konstanta = nilai;
```

**Contoh:**
```cpp
#define PI 3.14159
const int MAX = 100;
```


### 1.2.5 Operator

Operator adalah simbol yang digunakan untuk melakukan operasi pada nilai atau variabel.

#### A. Operator Aritmatika

| Operator | Fungsi | Contoh | Hasil |
|----------|--------|--------|-------|
| `+` | Penjumlahan | 7 + 2 | 9 |
| `-` | Pengurangan | 6 - 2 | 4 |
| `*` | Perkalian | 4 * 5 | 20 |
| `/` | Pembagian | 8 / 2 | 4 |
| `%` | Modulus (sisa bagi) | 5 % 2 | 1 |

#### B. Operator Increment & Decrement

| Operator | Nama | Keterangan |
|----------|------|------------|
| `++` | Increment | Menambah nilai 1 |
| `--` | Decrement | Mengurangi nilai 1 |

**Perbedaan Prefix dan Postfix:**
- `++a` (prefix): Nilai ditambah dulu, baru digunakan
- `a++` (postfix): Nilai digunakan dulu, baru ditambah

#### C. Operator Penugasan (Assignment)

| Operator | Contoh | Ekuivalen |
|----------|--------|-----------|
| `=` | a = 5 | a bernilai 5 |
| `+=` | a += 3 | a = a + 3 |
| `-=` | a -= 2 | a = a - 2 |
| `*=` | a *= 4 | a = a * 4 |
| `/=` | a /= 2 | a = a / 2 |
| `%=` | a %= 3 | a = a % 3 |

#### D. Operator Relasi (Perbandingan)

| Operator | Fungsi | Contoh |
|----------|--------|--------|
| `==` | Sama dengan | a == b |
| `!=` | Tidak sama dengan | a != b |
| `>` | Lebih besar | a > b |
| `<` | Lebih kecil | a < b |
| `>=` | Lebih besar atau sama | a >= b |
| `<=` | Lebih kecil atau sama | a <= b |

Operator relasi menghasilkan nilai boolean (`true` atau `false`).

#### E. Operator Logika

| Operator | Fungsi | Contoh | Hasil |
|----------|--------|--------|-------|
| `&&` | AND (Dan) | true && true | true |
| `\|\|` | OR (Atau) | true \|\| false | true |
| `!` | NOT (Tidak) | !true | false |

**Tabel Kebenaran AND (&&):**
| A | B | A && B |
|---|---|--------|
| true | true | true |
| true | false | false |
| false | true | false |
| false | false | false |

**Tabel Kebenaran OR (||):**
| A | B | A \|\| B |
|---|---|--------|
| true | true | true |
| true | false | true |
| false | true | true |
| false | false | false |

#### F. Operator Bitwise

| Operator | Fungsi | Contoh |
|----------|--------|--------|
| `&` | Bitwise AND | a & b |
| `\|` | Bitwise OR | a \| b |
| `^` | Bitwise XOR | a ^ b |
| `~` | Bitwise NOT | ~a |
| `<<` | Shift Left | a << 2 |
| `>>` | Shift Right | a >> 2 |


### 1.2.6 Pemrograman Sekuensial

Pemrograman sekuensial adalah program yang instruksinya dijalankan secara berurutan dari atas ke bawah, tanpa percabangan atau perulangan.

**Karakteristik Program Sekuensial:**
1. Setiap instruksi dieksekusi satu per satu
2. Setiap instruksi dijalankan tepat satu kali
3. Urutan eksekusi sesuai dengan urutan penulisan
4. Instruksi terakhir adalah akhir program

**Contoh Algoritma Sekuensial - Menghitung Luas Persegi Panjang:**
```
1. Mulai
2. Input panjang
3. Input lebar
4. Hitung luas = panjang × lebar
5. Tampilkan luas
6. Selesai
```


---

Lanjut ke [Praktikum 2 — Pengenalan C++](02_pengenalan_cpp.md)

---

Praktikum Pemrograman | 1
