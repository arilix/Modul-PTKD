Laboratorium Teknik Komputer



# TUGAS PRAKTIKUM
# PEMROGRAMAN MODUL 3 & 4


## STUDI KASUS: SISTEM PENILAIAN DAN BEASISWA MAHASISWA

Buatlah program C++ untuk mengelola data nilai mahasiswa dan menentukan penerimaan beasiswa yang menggabungkan **SEMUA** konsep dari **Modul 3 (Percabangan)** dan **Modul 4 (Perulangan)**.

---

## 📋 DESKRIPSI PROGRAM

Program dapat menerima data beberapa mahasiswa, menganalisis nilai, dan menentukan kelayakan beasiswa. Program berjalan dengan sistem menu yang terus berulang sampai user memilih keluar.

---

## 🎯 MENU PROGRAM

```
=== SISTEM PENILAIAN & BEASISWA ===
1. Input Data Mahasiswa
2. Tampilkan Data Mahasiswa
3. Cek Kelayakan Beasiswa
4. Statistik Kelas
5. Keluar
Pilih menu (1-5):
```

Program terus berjalan sampai user pilih menu keluar.

---

## 📝 DETAIL FITUR

### **FITUR 1: Input Data Mahasiswa**

Input data untuk beberapa mahasiswa (maksimal 30 mahasiswa):
- NIM
- Nama
- Usia
- IPK (0.00-4.00)
- Jenis beasiswa yang dipilih:
  - 1 = Beasiswa Akademik
  - 2 = Beasiswa Prestasi  
  - 3 = Beasiswa Kurang Mampu
- Penghasilan orang tua (hanya untuk jenis beasiswa kurang mampu)

**Validasi yang harus ada:**
- Usia: 17-25 tahun
- IPK: 0.00-4.00
- Jenis beasiswa: 1, 2, atau 3
- Penghasilan: tidak boleh negatif

---

### **FITUR 2: Tampilkan Data Mahasiswa**

Tampilkan semua data mahasiswa dalam bentuk tabel dengan kolom:
- No
- NIM
- Nama
- Usia
- IPK
- Grade (A/B+/B/C+/C/D)
- Jenis Beasiswa

**Konversi IPK ke Grade:**
- IPK >= 3.50: A
- IPK >= 3.00: B+
- IPK >= 2.75: B
- IPK >= 2.50: C+
- IPK >= 2.00: C
- IPK < 2.00: D

---

### **FITUR 3: Cek Kelayakan Beasiswa**

Untuk setiap mahasiswa, cek kelayakan berdasarkan jenis beasiswa yang dipilih:

**Beasiswa Akademik:**
- Usia 17-23 tahun
- IPK >= 3.50

**Beasiswa Prestasi:**
- Usia 17-24 tahun
- IPK >= 3.25

**Beasiswa Kurang Mampu:**
- Usia 17-25 tahun
- IPK >= 2.75
- Penghasilan orang tua < Rp 3.000.000

Tampilkan hasil untuk setiap mahasiswa: **DITERIMA** atau **DITOLAK** beserta alasannya.

---

### **FITUR 4: Statistik Kelas**

Tampilkan informasi statistik:

**Statistik Umum:**
- Total mahasiswa
- IPK tertinggi (dan nama mahasiswa)
- IPK terendah (dan nama mahasiswa)
- Rata-rata IPK kelas

**Distribusi Grade (tampilkan dengan bintang):**
```
A  : **** (4 mahasiswa)
B+ : ***** (5 mahasiswa)
B  : *** (3 mahasiswa)
...
```

**Distribusi Beasiswa:**
- Total pendaftar per jenis beasiswa
- Total yang diterima per jenis beasiswa
- Total yang ditolak per jenis beasiswa

**Distribusi Beasiswa:**
- Total pendaftar per jenis beasiswa
- Total yang diterima per jenis beasiswa
- Total yang ditolak per jenis beasiswa

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

## 📦 PENGUMPULAN

**Format:**
```
NIM_Nama/
└── laporan.pdf
```

**Isi Laporan:**
1. Cover
2. Flowchart program
3. Source code lengkap
4. Screenshot hasil running
5. Kesimpulan

---

**Praktikum Pemrograman**

**Laboratorium Teknik Komputer**

