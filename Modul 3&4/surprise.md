Laboratorium Teknik Komputer



# TUGAS PRAKTIKUM
# PEMROGRAMAN


## Tugas Praktikum 3 - Percabangan

**Studi Kasus: Sistem Pendaftaran Beasiswa Mahasiswa**

Buatlah program C++ untuk sistem pendaftaran beasiswa yang menggabungkan semua konsep percabangan (IF-ELSE, SWITCH-CASE, Nested IF, dan Operator Ternary) dalam satu alur program.

**Deskripsi Program:**

Program menerima data mahasiswa dan menentukan kelayakan penerimaan beasiswa berdasarkan kriteria berikut:

**Input yang diperlukan:**
1. Nama mahasiswa
2. Usia mahasiswa
3. IPK (Indeks Prestasi Kumulatif)
4. Jenis beasiswa yang dipilih (1: Akademik, 2: Prestasi, 3: Kurang Mampu)
5. Penghasilan orang tua (per bulan)

**Logika Program:**

1. **Validasi Usia (Nested IF):**
   - Jika usia < 17: "Belum memenuhi syarat usia minimum"
   - Jika usia 17-25: Lanjut ke pengecekan berikutnya
   - Jika usia > 25: "Melebihi batas usia maksimum"

2. **Pengecekan IPK (IF-ELSE):**
   - IPK >= 3.5: "IPK Sangat Baik"
   - IPK >= 3.0 dan < 3.5: "IPK Baik"
   - IPK >= 2.75 dan < 3.0: "IPK Cukup"
   - IPK < 2.75: "IPK tidak memenuhi syarat minimum"

3. **Jenis Beasiswa (SWITCH-CASE):**
   - Case 1 (Akademik): Syarat IPK minimal 3.5
   - Case 2 (Prestasi): Syarat IPK minimal 3.0
   - Case 3 (Kurang Mampu): Syarat IPK minimal 2.75 DAN penghasilan orang tua < Rp 3.000.000
   - Default: "Pilihan tidak valid"

4. **Status Kelayakan (Operator Ternary):**
   - Gunakan operator ternary untuk menentukan status akhir: "DITERIMA" atau "DITOLAK"

**Output Program:**
```
=== HASIL VERIFIKASI BEASISWA ===
Nama          : [nama]
Usia          : [usia] tahun - [kategori usia]
IPK           : [ipk] - [kategori IPK]
Jenis Beasiswa: [jenis]
Status        : [DITERIMA/DITOLAK]
Keterangan    : [alasan diterima/ditolak]
```

**Ketentuan:**
- Program harus menggabungkan minimal 4 jenis percabangan dalam satu alur logis
- Tambahkan validasi input untuk setiap data yang dimasukkan
- Berikan keterangan yang jelas mengapa diterima atau ditolak


## Tugas Praktikum 4 - Perulangan

**Studi Kasus: Sistem Analisis Nilai Mahasiswa**

Buatlah program C++ untuk menganalisis data nilai mahasiswa dalam satu kelas yang menggabungkan semua konsep perulangan (FOR, WHILE, DO-WHILE, Nested Loop, dan BREAK) dalam satu alur program.

**Deskripsi Program:**

Program menerima data nilai beberapa mahasiswa dan melakukan berbagai analisis statistik menggunakan berbagai jenis perulangan.

**Alur Program (DO-WHILE untuk menu utama):**
```
=== SISTEM ANALISIS NILAI MAHASISWA ===
1. Input Data Nilai Mahasiswa
2. Tampilkan Statistik Kelas
3. Tampilkan Grafik Distribusi Nilai
4. Cari Mahasiswa Berprestasi
5. Keluar
Pilih menu (1-5):
```

**Fitur-fitur yang harus diimplementasikan:**

**1. Input Data Nilai (FOR Loop):**
- Input jumlah mahasiswa (n)
- Gunakan FOR untuk input nama dan nilai setiap mahasiswa
- Simpan dalam array
- Validasi: nilai harus 0-100

**2. Statistik Kelas (WHILE Loop):**
- Gunakan WHILE untuk menghitung:
  - Nilai tertinggi
  - Nilai terendah
  - Rata-rata kelas
  - Total mahasiswa lulus (nilai >= 60)
  - Total mahasiswa tidak lulus (nilai < 60)

**3. Grafik Distribusi Nilai (Nested FOR Loop):**
- Tampilkan grafik bintang (*) berdasarkan rentang nilai:
  ```
  90-100 (A): *****
  80-89  (B): *******
  70-79  (C): ****
  60-69  (D): ***
  0-59   (E): **
  ```
- Gunakan nested loop: outer loop untuk kategori, inner loop untuk menampilkan bintang

**4. Cari Mahasiswa Berprestasi (WHILE + BREAK):**
- Gunakan WHILE untuk mencari dan menampilkan mahasiswa dengan nilai >= 85
- Gunakan BREAK jika sudah menemukan 5 mahasiswa pertama atau sudah mencapai akhir data
- Tampilkan: Ranking, Nama, Nilai

**5. Menu (DO-WHILE):**
- Program terus berjalan sampai user memilih "Keluar"
- Gunakan DO-WHILE untuk looping menu

**Output yang diharapkan:**

```
=== STATISTIK KELAS ===
Jumlah Mahasiswa : [n]
Nilai Tertinggi  : [max]
Nilai Terendah   : [min]
Rata-rata Kelas  : [avg]
Lulus            : [jumlah] mahasiswa
Tidak Lulus      : [jumlah] mahasiswa

=== DISTRIBUSI NILAI ===
90-100 (A): *****      (5 mahasiswa)
80-89  (B): *******    (7 mahasiswa)
70-79  (C): ****       (4 mahasiswa)
60-69  (D): ***        (3 mahasiswa)
0-59   (E): **         (2 mahasiswa)

=== TOP 5 MAHASISWA BERPRESTASI ===
1. [Nama] - [Nilai]
2. [Nama] - [Nilai]
...
```

**Ketentuan:**
- Maksimal 50 mahasiswa
- Gunakan array untuk menyimpan data
- Setiap fitur harus menggunakan jenis perulangan yang ditentukan
- Program harus robust dengan validasi input


## Tugas Bonus

Buatlah program C++ yang menggabungkan **Praktikum 3 dan Praktikum 4** dalam satu sistem terpadu:

**Sistem Manajemen Beasiswa Berbasis Kinerja Akademik**

**Deskripsi:**
- Gabungkan sistem beasiswa (Praktikum 3) dengan analisis nilai (Praktikum 4)
- Program menerima data beberapa mahasiswa yang mendaftar beasiswa
- Untuk setiap mahasiswa, input: Nama, Usia, IPK, Jenis Beasiswa, Penghasilan Orang Tua
- Gunakan **perulangan** untuk input data banyak mahasiswa
- Gunakan **percabangan** untuk menentukan kelayakan setiap mahasiswa
- Tampilkan:
  - Statistik pendaftar (total, diterima, ditolak)
  - Daftar mahasiswa yang diterima beasiswa
  - Analisis berdasarkan jenis beasiswa (berapa yang diterima per kategori)

**Konsep yang digunakan:**
- FOR/WHILE: Input dan proses data multiple mahasiswa
- DO-WHILE: Menu utama program
- Nested IF: Validasi usia dan kelayakan
- IF-ELSE: Kategori IPK
- SWITCH-CASE: Jenis beasiswa
- Operator Ternary: Status akhir
- Nested Loop: Tampilan grafik statistik penerimaan

**Output yang diharapkan:**
```
=== STATISTIK PENDAFTARAN BEASISWA ===
Total Pendaftar           : [n]
Diterima                  : [jumlah] ([persentase]%)
Ditolak                   : [jumlah] ([persentase]%)

=== DISTRIBUSI PER JENIS BEASISWA ===
Akademik     : [diterima]/[total pendaftar]
Prestasi     : [diterima]/[total pendaftar]
Kurang Mampu : [diterima]/[total pendaftar]

=== DAFTAR PENERIMA BEASISWA ===
1. [Nama] - IPK: [ipk] - [Jenis Beasiswa]
2. [Nama] - IPK: [ipk] - [Jenis Beasiswa]
...
```

---

**Kumpulkan semua tugas dalam satu laporan praktikum:**
```
NIM_Nama/
├── Praktikum3/
│   └── beasiswa_mahasiswa.cpp
├── Praktikum4/
│   └── analisis_nilai_mahasiswa.cpp
└── Bonus/
    └── manajemen_beasiswa_terpadu.cpp
```

---

**Petunjuk Pengerjaan:**
1. Setiap program harus memiliki komentar untuk menjelaskan fungsi kode
2. Gunakan nama variabel yang deskriptif
3. Test program dengan berbagai input untuk memastikan kebenarannya
4. Screenshot hasil running program untuk dilampirkan dalam laporan
5. Format laporan: PDF dengan struktur (Tujuan, Code, Screenshot Output, Kesimpulan)

---

Praktikum Pemrograman
