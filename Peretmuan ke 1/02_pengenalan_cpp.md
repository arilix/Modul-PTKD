Laboratorium Teknik Komputer



# PRAKTIKUM 2
# PENGENALAN C++


## 2.1 Tujuan

1. Mahasiswa mampu mengenal elemen dasar C++.
2. Mahasiswa mampu menerapkan flowchart pada program.
3. Mahasiswa mampu menyusun program sekuensial, baik sederhana maupun kompleks.


## 2.2 Landasan Teori

### 2.2.1 Pengantar C++

C++ adalah bahasa pemrograman yang dikembangkan oleh Bjarne Stroustrup pada awal tahun 1980-an di Bell Laboratories. C++ merupakan pengembangan dari bahasa C dengan penambahan fitur Object-Oriented Programming (OOP).

**Keunggulan C++:**
- Bahasa tingkat menengah (mid-level language)
- Mendukung programming paradigm yang beragam
- Performa tinggi dan efisien
- Portable (dapat berjalan di berbagai platform)
- Memiliki standard library yang lengkap

**Compiler C++ yang Populer:**
- GCC (GNU Compiler Collection)
- Clang
- Microsoft Visual C++
- Code::Blocks (IDE dengan GCC compiler)
- Dev-C++


### 2.2.2 Struktur Program C++

Setiap program C++ memiliki struktur dasar yang terdiri dari beberapa bagian penting.

#### A. Program C++ Sederhana

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Selamat Datang di Praktikum Pemrograman";
    return 0;
}
```

**Output:**
```
Selamat Datang di Praktikum Pemrograman
```

#### B. Penjelasan Struktur

**1. Preprocessor Directive (`#include`)**
```cpp
#include <iostream>
```
- Diawali dengan simbol `#`
- Memanggil library yang berisi fungsi-fungsi yang dibutuhkan
- `iostream` adalah library untuk input/output (cin dan cout)

**2. Namespace (`using namespace std;`)**
```cpp
using namespace std;
```
- `std` adalah namespace standar C++
- Berisi fungsi seperti `cin`, `cout`, `endl`
- Tanpa baris ini, harus menulis `std::cout` setiap kali

**Perbandingan dengan dan tanpa namespace:**

Dengan namespace:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Menggunakan namespace std";
    return 0;
}
```

Tanpa namespace:
```cpp
#include <iostream>

int main() {
    std::cout << "Tanpa namespace std";
    return 0;
}
```

**3. Fungsi main()**
```cpp
int main() {
    // kode program
    return 0;
}
```
- Fungsi utama yang wajib ada
- Program dimulai dari fungsi `main()`
- Tipe `int` berarti mengembalikan nilai integer
- `return 0;` menandakan program sukses dijalankan
- Kurung kurawal `{}` menandai awal dan akhir blok kode

**4. Statement dan Expression**
```cpp
cout << "Hello World";
```
- `cout` adalah fungsi output (console output)
- `<<` adalah operator insertion untuk mengirim data ke cout
- Setiap statement diakhiri dengan semicolon (`;`)


### 2.2.3 Input dan Output

#### A. Output dengan cout

`cout` digunakan untuk menampilkan data ke layar.

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Teks biasa" << endl;
    cout << "Baris 1" << endl << "Baris 2" << endl;
    
    int angka = 42;
    cout << "Nilai angka: " << angka << endl;
    
    return 0;
}
```

**Output:**
```
Teks biasa
Baris 1
Baris 2
Nilai angka: 42
```

**Manipulator Output:**
- `endl` - Pindah baris baru (newline)
- `\n` - Alternatif untuk pindah baris
- `\t` - Tab

#### B. Input dengan cin

`cin` digunakan untuk membaca input dari keyboard.

```cpp
#include <iostream>
using namespace std;

int main() {
    int umur;
    string nama;
    
    cout << "Masukkan nama: ";
    cin >> nama;
    
    cout << "Masukkan umur: ";
    cin >> umur;
    
    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << " tahun" << endl;
    
    return 0;
}
```

**Contoh Interaksi:**
```
Masukkan nama: Budi
Masukkan umur: 20
Nama: Budi
Umur: 20 tahun
```


### 2.2.4 Komentar

Komentar adalah teks yang diabaikan oleh compiler, digunakan untuk dokumentasi kode.

```cpp
// Ini komentar satu baris

/* 
   Ini komentar
   multi baris
*/

int main() {
    int x = 5;  // Deklarasi variabel x
    
    /* 
       Kode berikut menghitung
       luas persegi
    */
    int luas = x * x;
    
    return 0;
}
```


### 2.2.5 Program Sekuensial dengan C++

Program sekuensial adalah program yang instruksinya dijalankan berurutan dari atas ke bawah.

#### Contoh 1: Menghitung Luas Persegi Panjang

**Algoritma:**
1. Input panjang
2. Input lebar
3. Hitung luas = panjang × lebar
4. Tampilkan hasil

**Flowchart:**
```
[START]
   ↓
[INPUT panjang, lebar]
   ↓
[PROSES: luas = panjang * lebar]
   ↓
[OUTPUT luas]
   ↓
[END]
```

**Program C++:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int panjang, lebar, luas;
    
    cout << "=== Program Hitung Luas Persegi Panjang ===" << endl;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    
    cout << "Masukkan lebar: ";
    cin >> lebar;
    
    luas = panjang * lebar;
    
    cout << "\nHasil:" << endl;
    cout << "Luas = " << luas << " satuan persegi" << endl;
    
    return 0;
}
```

**Output:**
```
=== Program Hitung Luas Persegi Panjang ===
Masukkan panjang: 10
Masukkan lebar: 5

Hasil:
Luas = 50 satuan persegi
```

#### Contoh 2: Konversi Suhu Celsius ke Fahrenheit

**Algoritma:**
1. Input suhu dalam Celsius
2. Hitung Fahrenheit = (Celsius × 9/5) + 32
3. Tampilkan hasil

**Program C++:**
```cpp
#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    
    cout << "=== Konversi Celsius ke Fahrenheit ===" << endl;
    cout << "Masukkan suhu (Celsius): ";
    cin >> celsius;
    
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    
    cout << celsius << " C = " << fahrenheit << " F" << endl;
    
    return 0;
}
```

**Output:**
```
=== Konversi Celsius ke Fahrenheit ===
Masukkan suhu (Celsius): 25
25 C = 77 F
```

#### Contoh 3: Menghitung Rata-rata

**Program C++:**
```cpp
#include <iostream>
using namespace std;

int main() {
    float nilai1, nilai2, nilai3, rata;
    
    cout << "=== Hitung Rata-rata ===" << endl;
    cout << "Masukkan nilai 1: ";
    cin >> nilai1;
    
    cout << "Masukkan nilai 2: ";
    cin >> nilai2;
    
    cout << "Masukkan nilai 3: ";
    cin >> nilai3;
    
    rata = (nilai1 + nilai2 + nilai3) / 3;
    
    cout << "\nRata-rata: " << rata << endl;
    
    return 0;
}
```


### 2.2.6 Tips Programming C++

**1. Penamaan Variabel yang Baik:**
- Gunakan nama yang deskriptif: `jumlahSiswa` bukan `js`
- Hindari karakter khusus dan spasi
- Tidak boleh diawali angka
- Case-sensitive (huruf besar/kecil berbeda)

**2. Indentasi dan Formatting:**
```cpp
// Good
int main() {
    int x = 5;
    if (x > 0) {
        cout << "Positif";
    }
}

// Bad
int main(){
int x=5;
if(x>0){
cout<<"Positif";}}
```

**3. Gunakan Komentar:**
- Jelaskan logika yang kompleks
- Dokumentasikan fungsi
- Beri catatan untuk kode yang penting

**4. Testing:**
- Test dengan berbagai input
- Perhatikan edge cases
- Debug dengan cout untuk melihat nilai variabel


---

Selamat belajar! Tugas praktikum tersedia di [surprise.md](surprise.md)

---

Praktikum Pemrograman | 2
