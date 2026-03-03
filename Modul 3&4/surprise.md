Laboratorium Teknik Komputer



# TUGAS PRAKTIKUM ALTERNATIF
# PEMROGRAMAN MODUL 3 & 4


## STUDI KASUS: ANALISIS BILANGAN GENAP DAN GANJIL

Buatlah program C++ untuk menganalisis bilangan genap dan ganjil dalam range tertentu yang menggabungkan konsep dari **Modul 3 (Percabangan)** dan **Modul 4 (Perulangan)**.

---

## 📋 DESKRIPSI PROGRAM

Program dapat melakukan berbagai analisis terhadap bilangan genap dan ganjil, serta operasi matematika lainnya. Program berjalan dengan sistem menu yang terus berulang sampai user memilih keluar.

---

## 🎯 MENU PROGRAM

```
=== ANALISIS BILANGAN GENAP & GANJIL ===
1. Analisis Range Bilangan
2. Cek Properti Bilangan
3. Deret Bilangan Custom
4. Statistik Lengkap
5. Keluar
Pilih menu (1-5):
```

Program terus berjalan sampai user pilih menu keluar.

---

## 📝 DETAIL FITUR

### **FITUR 1: Analisis Range Bilangan**

Input bilangan bulat positif n (1-1000).

**Output yang harus ditampilkan:**

**1. Bilangan Genap:**
- Tampilkan semua bilangan genap dari 1 hingga n
- Hitung jumlah total bilangan genap
- Hitung rata-rata bilangan genap

**2. Bilangan Ganjil:**
- Tampilkan semua bilangan ganjil dari 1 hingga n
- Hitung jumlah total bilangan ganjil
- Hitung rata-rata bilangan ganjil

**3. Perbandingan:**
- Tampilkan mana yang lebih besar: jumlah genap atau ganjil
- Hitung selisih antara jumlah genap dan ganjil
- Tampilkan persentase genap dan ganjil

**Validasi:**
- n harus bilangan positif (> 0)
- n maksimal 1000
- Jika tidak valid, minta input ulang

---

### **FITUR 2: Cek Properti Bilangan**

Input sebuah bilangan bulat, kemudian program akan mengecek berbagai properti:

**Pengecekan yang harus ada:**

**A. Kategori Dasar (IF-ELSE):**
- Bilangan positif, negatif, atau nol
- Bilangan genap atau ganjil
- Bilangan satu digit, dua digit, atau lebih

**B. Kategori Khusus (Nested IF):**
- Bilangan prima atau bukan
- Bilangan sempurna atau bukan (jumlah faktor = bilangan itu sendiri)
- Bilangan kuadrat sempurna atau bukan

**C. Kategori Matematika (SWITCH-CASE):**

Berikan opsi kategori yang ingin dicek:
```
1. Kelipatan 3, 5, atau bukan keduanya
2. Angka puluhan (10-19, 20-29, dst)
3. Faktorial bilangan (jika <= 10)
4. Kembali ke menu utama
```

**Output:**
- Tampilkan semua properti yang ditemukan
- Berikan kesimpulan apakah bilangan "spesial" atau "biasa"
  - Spesial: jika prima ATAU sempurna ATAU kuadrat sempurna
  - Biasa: jika tidak memenuhi kriteria spesial

---

### **FITUR 3: Deret Bilangan Custom**

Input:
- Bilangan awal (a)
- Bilangan akhir (b)
- Tipe deret yang diinginkan

**Tipe Deret (SWITCH-CASE):**

**Case 1 - Genap Saja:**
- Tampilkan hanya bilangan genap dari a ke b
- Hitung jumlah dan rata-rata

**Case 2 - Ganjil Saja:**
- Tampilkan hanya bilangan ganjil dari a ke b
- Hitung jumlah dan rata-rata

**Case 3 - Kelipatan Tertentu:**
- Input kelipatan (misal: 3, 5, 7)
- Tampilkan bilangan kelipatan tersebut dari a ke b
- Hitung jumlah dan rata-rata

**Case 4 - Prima Saja:**
- Tampilkan hanya bilangan prima dari a ke b
- Hitung jumlah dan rata-rata

**Case 5 - Custom Pattern:**
- Input pola: G (genap) atau J (ganjil)
- Contoh: GGJGJ = genap, genap, ganjil, genap, ganjil
- Tampilkan bilangan sesuai pola sampai mencapai b atau pola habis

**Validasi:**
- a <= b
- a dan b dalam range -1000 sampai 1000
- Untuk kelipatan: harus > 0

---

### **FITUR 4: Statistik Lengkap**

Input range bilangan (mulai dan akhir), program akan menampilkan:

**Statistik Umum:**
- Total bilangan dalam range
- Jumlah bilangan genap
- Jumlah bilangan ganjil
- Bilangan terbesar dan terkecil
- Sum total semua bilangan
- Rata-rata semua bilangan

**Distribusi (tampilkan dengan grafik bintang):**
```
Positif : ********** (10 bilangan)
Negatif : ***** (5 bilangan)
Nol     : * (1 bilangan)

Genap   : ******** (8 bilangan)
Ganjil  : ******** (8 bilangan)

Prima   : **** (4 bilangan)
Komposit: *********** (11 bilangan)
```

**Analisis Kelipatan:**
- Berapa bilangan kelipatan 2, 3, 4, 5, dst (sampai 10)
- Tampilkan dalam tabel

**Bilangan Spesial yang Ditemukan:**
- Daftar bilangan prima
- Daftar bilangan sempurna
- Daftar bilangan kuadrat sempurna
- Daftar bilangan Fibonacci (jika ada dalam range)

---

## ✅ KONSEP YANG HARUS DIGUNAKAN

**Dari Modul 3 - Percabangan:**
- IF Sederhana
- IF-ELSE
- Nested IF (IF bersarang)
- SWITCH-CASE
- Operator Ternary (? :)

**Dari Modul 4 - Perulangan:**
- FOR
- WHILE
- DO-WHILE
- Nested Loop (perulangan bersarang)
- BREAK

---

## 💡 HINTS

**Cek Bilangan Prima:**
```
Bilangan prima hanya habis dibagi 1 dan dirinya sendiri
Gunakan loop untuk cek pembagi dari 2 sampai akar bilangan
```

**Cek Bilangan Sempurna:**
```
Bilangan sempurna: jumlah faktor = bilangan itu sendiri
Contoh: 6 = 1 + 2 + 3
Gunakan loop untuk mencari semua faktor
```

**Cek Kuadrat Sempurna:**
```
Bilangan kuadrat sempurna: hasil dari n × n
Contoh: 16 = 4 × 4
Gunakan loop atau fungsi sqrt()
```

---

## 📦 PENGUMPULAN

**Format:**
```
NIM_Nama/
└── laporan.pdf
```

**Isi Laporan:**
1. Cover
2. Flowchart program (minimal menu utama dan 2 fitur)
3. Source code lengkap dengan komentar
4. Screenshot hasil running (semua menu)
5. Tabel testing dengan berbagai input
6. Kesimpulan

---

**Praktikum Pemrograman**

**Laboratorium Teknik Komputer**
