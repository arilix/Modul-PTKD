Laboratorium Teknik Komputer



# PRAKTIKUM 4
# PERULANGAN


## 4.1 Tujuan

1. Mahasiswa mampu menyusun flowchart dan program menggunakan struktur perulangan, baik sederhana maupun bersarang, menggunakan berbagai metode perulangan.


## 4.2 Landasan Teori

### 4.2.1 Pengantar Perulangan

Perulangan (looping) atau iterasi adalah proses menjalankan blok instruksi berulang-ulang sebanyak batas yang ditentukan. Perulangan meringkas penulisan program - instruksi ditulis 1 kali tapi dijalankan berkali-kali. Contoh: menampilkan tulisan yang sama sebanyak 100 kali tanpa harus menulis 100 baris.

**Dua jenis perulangan berdasarkan jumlah:**
1. **Perulangan yang diketahui batasnya (secara matematis)** → menggunakan FOR
2. **Perulangan yang belum diketahui batasnya** → menggunakan WHILE dan DO WHILE

**Perbedaan WHILE dan DO WHILE:**
- **WHILE**: kondisi diperiksa di AWAL perulangan
- **DO WHILE**: kondisi diperiksa di AKHIR perulangan (statement dijalankan minimal 1 kali)


### 4.2.2 Pernyataan FOR

Pernyataan FOR digunakan untuk perulangan yang sudah diketahui batas perulangannya. Contoh: diulang 5 kali, diulang selama nilai tidak lebih besar dari b.

**Yang perlu diketahui sebelum perulangan FOR:**
1. Batas perulangan
2. Nilai/kondisi awal variabel acuan
3. Perubahan pada variabel acuan setelah statement dikerjakan

**Sintaks FOR:**
```cpp
for(inisialisasi; kondisi; perubahan){
     statement;
}
```

**Penjelasan bagian-bagian FOR:**
- **inisialisasi**: memberikan nilai/kondisi awal variabel acuan untuk batas perulangan
- **kondisi**: pengendali perulangan, menentukan apakah perulangan dilanjutkan atau dihentikan
- **perubahan**: mengubah nilai variabel pengendali setelah statement dijalankan (kenaikan/penurunan)
- **statement**: blok program yang dijalankan ketika kondisi terpenuhi

**Contoh program FOR:**
```cpp
#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "Angka             Angka kuadrat \n";
    cout << "‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐‐\n";

    for (angka = 1; angka <= 10; angka++)
        cout << angka << "\t\t" << (angka * angka) << endl;

    return 0;
}
```


### 4.2.3 Pernyataan WHILE

Urutan pengerjaan sama dengan FOR. Perbedaan: digunakan saat belum diketahui batas perulangannya. Kondisi diperiksa terlebih dahulu sebelum menjalankan statement.

**PENTING:** Harus menambahkan perubahan nilai variabel pengendali dalam statement agar tidak terjadi infinity loop.

**Sintaks WHILE:**
```cpp
while (syarat/kondisi){
      pernyataan1;
      pernyataan2;
      ...
      perubahan;
}
```

**Contoh program WHILE:**
```cpp
#include <iostream>

using namespace std;

int main() {
    int n = 1;

    while(n <= 10)
        cout << n++ << " ";
    return 0;
}
```


### 4.2.4 Pernyataan DO-WHILE

**Sintaks DO-WHILE:**
```cpp
do {
    pernyataan1;
    pernyataan2;
    ...
    perubahan;
} while (syarat/kondisi);
```

**Perbedaan WHILE dan DO-WHILE:**
- **WHILE**: kondisi diperiksa **SEBELUM** menjalankan statement. Jika kondisi salah, statement tidak dijalankan
- **DO-WHILE**: statement dijalankan **TERLEBIH DAHULU**, baru kondisi diperiksa. Statement minimal dijalankan 1 kali

**PENTING:** Sama seperti WHILE, harus menambahkan perubahan nilai variabel pengendali agar tidak terjadi infinity loop.

**Contoh program DO-WHILE:**
```cpp
#include <iostream>

using namespace std;

int main(){
    int n = 1;

    do {
        cout << n++ << " ";
    } while(n <= 10);
    return 0;
}
```


### 4.2.5 Pernyataan BREAK

Pernyataan BREAK digunakan untuk berhenti atau keluar secara paksa dari perulangan, tidak peduli apakah kondisi masih terpenuhi atau tidak. BREAK bisa digunakan untuk semua jenis perulangan (FOR, WHILE, DO WHILE). Setelah BREAK dijalankan, program melanjutkan ke statement setelah blok perulangan.

**Contoh sintaks BREAK:**
```cpp
int n = 0;

while (n++ < 10) {
    cout << n << endl;

    if (n == 5)
        break;
}
```

**Contoh program penggunaan BREAK:**
```cpp
#include <iostream>

using namespace std;

int main() {
    int n= 0;
    int angka;

    for (angka=0; angka < 20; angka++) {
        n += angka;

        if (n >= 100)
            break;
    }

    cout << "Deret Bilangan: 1 + 2 + ... + " << angka << endl;
    cout << "Jumlah Deret Bilangan = " << n;

    return 0;
}
```

**Penjelasan program:**
- Program menjumlahkan deret bilangan 0 + 1 + 2 + 3 + ...
- Perulangan berhenti ketika jumlah (`n`) sudah mencapai atau melebihi 100
- Perintah `break` menghentikan perulangan meskipun kondisi `angka < 20` masih terpenuhi


## 4.3 Tugas Praktikum

_(Tugas praktikum akan diberikan oleh instruktur)_
