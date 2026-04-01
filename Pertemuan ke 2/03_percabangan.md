Laboratorium Teknik Komputer



# PRAKTIKUM 3
# PERCABANGAN


## 3.1 Tujuan

1. Mahasiswa mampu menyusun flowchart dan program menggunakan struktur percabangan, baik sederhana maupun bersarang, menggunakan berbagai metode percabangan.


## 3.2 Landasan Teori

### 3.2.1 Pengantar Percabangan

Struktur percabangan atau seleksi kondisi adalah metode dalam pemrograman untuk mendapatkan keputusan dari kemungkinan True atau False. Konsep percabangan dapat dianalogikan seperti pertigaan jalan dimana pengendara harus memilih belok kanan atau kiri. Proses percabangan bergantung pada kondisi yang ditentukan programmer.

**Contoh dalam kehidupan sehari-hari:**
- Apabila air sudah mendidih, maka dapat dikatakan air tersebut sudah matang.
- Apabila suatu nilai lebih dari nol, maka nilai tersebut dinyatakan nilai positif. Sebaliknya, apabila nilai tersebut kurang dari nol, maka nilai tersebut dinyatakan nilai negatif.

**Bentuk instruksi percabangan:**
- Instruksi Percabangan Operator
- Instruksi Percabangan IF
  - Pernyataan IF Sederhana
  - Pernyataan IF-ELSE
- Instruksi Percabangan CASE


### 3.2.2 Instruksi Percabangan Operator

Tidak semua bahasa pemrograman memiliki metode ini, namun C++ memilikinya. Operator kondisional dilambangkan dengan simbol tanda tanya (?) dan titik dua (:). Hampir sama dengan percabangan IF, namun berbeda tujuan. Operator kondisional digunakan untuk memberikan nilai langsung pada variabel melalui seleksi kondisi. Disebut juga **ternary operator** karena merupakan operator dengan 3 operand.

**Sintaks dasar:**
```cpp
nilai1 ? nilai2 : nilai3
```

**Contoh penggunaan:**
```cpp
a = (x >= 0) ? "bilangan positif" : "bilangan negatif"
```

**Percabangan operator dengan lebih dari satu kondisi:**
```cpp
a = (x < 0) ? "Kurang dari nol" : (x > 0) ? "Lebih dari nol" : "Sama dengan nol"
```


### 3.2.3 Percabangan IF

#### A. IF Sederhana

Flowchart pola IF sederhana:
- Jika kondisi **True** → Jalankan blok pernyataan
- Jika kondisi **False** → Lanjut ke instruksi berikutnya

**Sintaks IF:**
```cpp
if(kondisi) {
    pernyataan;
    ...
}
```

**Catatan:** Penggunaan "{" dan "}" hanya diperlukan apabila blok pernyataan berisi lebih dari 1 baris.

**Contoh 1: Program IF sederhana**
```cpp
#include <iostream>

using namespace std;

int main() {
    int usia;
    cout << "Berapa usia Anda: ";
    cin >> usia;

    if (usia < 17)
       cout << "Anda tidak boleh menonton bioskop";
}
```

**Contoh 2: Program IF dengan lebih dari 1 baris pernyataan**
```cpp
#include <iostream>

using namespace std;

int main() {
    int usia;
    cout << "Berapa usia Anda: ";
    cin >> usia;
    if (usia < 17) {
         cout << "Anda tidak boleh menonton bioskop"<<endl;
         cout << "Anda belum cukup umur";
    }
}
```


#### B. IF-ELSE dan ELSE IF

- **ELSE IF**: digunakan untuk menyeleksi kondisi lain selain IF
- **ELSE**: digunakan apabila semua kondisi tidak terpenuhi (False)

**Sintaks IF Majemuk:**
```cpp
if (kondisi1){
      perintah1;
      ...
}
else if (kondisi2) {
      perintah2;
      ...
}
else{
      perintah3;
      ...
}
```

**Penjelasan:**
- Jika kondisi1 **benar** → jalankan perintah1
- Jika kondisi1 **salah** → periksa kondisi2
- Jika kondisi2 **benar** → jalankan perintah2
- Jika kondisi1 dan kondisi2 **salah** → jalankan perintah3

**Contoh 3: Program IF-ELSE**
```cpp
#include <iostream>

using namespace std;

int main() {
    int usia;
    cout << "Berapa usia Anda: ";
    cin >> usia;
    if (usia < 17) {
         cout << "Anda tidak boleh menonton bioskop" << endl;
         cout << " Anda belum cukup umur ";
    } else {
         cout << "Anda boleh menonton bioskop."<<endl;
         cout << "Selamat menonton";
    }
}
```


#### C. Nested IF (IF Bersarang)

**Sintaks Nested IF:**
```cpp
if (kondisi1){
     if (kondisi1a){
           perintah1a;
           ...
     }
     else {
           perintah1b;
           ...
     }
}
else {
     if (kondisi2){
           perintah2a;
           ...
     }
     else {
           perintah2b;
           ...
     }
}
```

**Penjelasan Nested IF:**
1. Jika kondisi1 benar → seleksi kondisi1a
2. Jika kondisi1a benar → jalankan perintah1a; jika salah → jalankan perintah1b
3. Jika kondisi1 salah → seleksi kondisi2
4. Jika kondisi2 benar → jalankan perintah2a; jika salah → jalankan perintah2b


### 3.2.4 Percabangan Switch-Case

Switch-Case lebih ringkas dibanding pernyataan IF untuk seleksi kondisi. Struktur ini lebih efisien untuk banyak kondisi.

**Perbandingan IF dan SWITCH-CASE:**

```cpp
// Menggunakan IF
if (ekspresi == konstanta_1) {
     pernyataan_1;
     ...
} else if (ekspresi == konstanta_2) {
     pernyataan_2;
     ...
} else {
     pernyataan_lain;
     ...
}
```

```cpp
// Menggunakan SWITCH-CASE
switch (ekspresi) {
    case konstanta_1:
      pernyataan_1;
      break;
    case konstanta_2:
      pernyataan_2;
      break;
    default:
      pernyataan_lain;
}
```

**Cara kerja SWITCH-CASE:**
- **SWITCH**: penampung nilai yang akan diseleksi
- **CASE**: penyeleksi/pembanding nilai
- **break**: keluar dari percabangan setelah kondisi terpenuhi
- **default**: dijalankan jika tidak ada kondisi yang terpenuhi

**Hal yang perlu diperhatikan:**
- Keyword `case` harus diisi konstanta, tidak bisa pernyataan kondisional (range)
- Konstanta harus bertipe `int` atau `char` (tidak bisa string atau double/float)
- `break` membuat program keluar dari SWITCH-CASE setelah menjalankan pernyataan
- `default` dijalankan jika semua case bernilai salah

**Contoh program SWITCH-CASE:**
```cpp
#include <iostream>

using namespace std;

int main () {
     int n;

     cout << "Masukkan bilangan: ";
     cin >> n;

     switch (n) {
          case 1:
                cout << "Anda memasukkan angka satu";
                break;
          case 2:
                cout << "Anda memasukkan angka dua";
                break;
          case 3:
                cout << "Anda memasukkan angka tiga";
                break;
          default:
                cout << "Anda memasukkan angka selain 1, 2, dan 3";
                break;
     }
}
```

**Perbedaan IF dan SWITCH-CASE:**
- IF dapat menyeleksi operasi logika/kondisional; SWITCH-CASE tidak
- SWITCH-CASE lebih efektif dan ringkas untuk lebih dari 2 kondisi sederhana
- Keduanya dapat dikombinasikan dengan catatan tidak ada kesalahan sintaks
- SWITCH-CASE tidak dapat menyeleksi tipe data string atau double/float


## 3.3 Tugas Praktikum

_(Tugas praktikum akan diberikan oleh instruktur)_
