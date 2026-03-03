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


**Ketentuan:**
- Program harus menggabungkan minimal 4 jenis percabangan dalam satu alur logis
- Tambahkan validasi input untuk setiap data yang dimasukkan
- Berikan keterangan yang jelas mengapa diterima atau ditolak


**Kumpulkan semua tugas dalam satu laporan praktikum:**
```
NIM_Nama/
└── Praktikum3/
    └── beasiswa_mahasiswa.pdf
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
