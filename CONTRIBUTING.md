# Contributing to Modul PTKD

Terima kasih atas minat Anda untuk berkontribusi pada pengembangan modul Praktikum Teknik Komputer Dasar! 🎉

## Cara Berkontribusi

### Melaporkan Bug atau Kesalahan

Jika Anda menemukan kesalahan dalam modul praktikum:

1. Periksa apakah sudah ada issue yang sama
2. Buat issue baru dengan detail:
   - Deskripsi kesalahan (typo, code error, penjelasan kurang jelas)
   - Lokasi kesalahan (file dan section)
   - Environment (OS, IDE/Software version)
   - Screenshot jika memungkinkan

### Memperbaiki Typo atau Kesalahan Kecil

1. Fork repository
2. Buat branch baru: `git checkout -b fix/typo-praktikum1`
3. Lakukan perubahan
4. Commit: `git commit -m "Fix typo in 01_algoritma_pemrograman.md"`
5. Push: `git push origin fix/typo-praktikum1`
6. Buat Pull Request

### Menambah Konten atau Materi Baru

1. Diskusikan ide Anda di Issues terlebih dahulu
2. Fork dan buat branch: `git checkout -b feature/new-topic`
3. Tulis konten mengikuti format yang ada
4. Pastikan contoh code/simulasi bisa dijalankan dan diverifikasi
5. Update README.md jika perlu
6. Buat Pull Request dengan deskripsi lengkap

### Memperbaiki Code Examples atau Lab Configuration

**Untuk ALPRO (C++):**
1. Test code example di Code::Blocks atau compiler lain
2. Pastikan code berjalan tanpa error
3. Tambahkan komentar yang jelas
4. Ikuti best practices C++

**Untuk Jaringan (Cisco Packet Tracer):**
1. Test konfigurasi di Cisco Packet Tracer
2. Pastikan semua device dapat berkomunikasi
3. Dokumentasikan langkah konfigurasi dengan jelas
4. Sertakan file .pkt jika memungkinkan

## Style Guide

### Dokumentasi

- Gunakan Bahasa Indonesia yang jelas dan mudah dipahami
- Hindari jargon yang terlalu teknis tanpa penjelasan
- Sertakan screenshot untuk langkah-langkah penting
- Gunakan formatting Markdown yang konsisten
- Beri contoh praktis yang relevan

### Code (C++ untuk ALPRO)

- Ikuti standar penulisan C++ yang baik
- Gunakan nama variabel yang deskriptif
- Tambahkan komentar untuk logika yang kompleks
- Sertakan error handling jika diperlukan
- Pastikan code dapat di-compile dan dijalankan

**Contoh:**
```cpp
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int panjang, lebar, luas;
    
    // Input data
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    
    // Proses perhitungan
    luas = panjang * lebar;
    
    // Output hasil
    cout << "Luas = " << luas << endl;
    
    return 0;
}
```

### Dokumentasi Jaringan (Cisco Packet Tracer)

- Jelaskan topologi yang digunakan secara jelas
- Dokumentasikan setiap langkah konfigurasi
- Sertakan command lengkap dengan penjelasannya
- Gunakan screenshot untuk menunjukkan hasil
- Berikan troubleshooting tips jika ada

**Contoh Format:**
```
**Konfigurasi Router:**
1. Masuk ke mode privileged: `enable`
2. Masuk ke configuration mode: `configure terminal`
3. Set hostname: `hostname R1`
4. Konfigurasi interface:
   ```
   interface GigabitEthernet0/0
   ip address 192.168.1.1 255.255.255.0
   no shutdown
   ```
```

### Commit Messages

Format:
```
<type>: <subject>

<body>
```

Types:
- `feat`: Fitur atau materi baru
- `fix`: Perbaikan bug atau kesalahan
- `docs`: Update dokumentasi
- `style`: Formatting
- `refactor`: Reorganisasi konten
- `test`: Menambah atau memperbaiki test case
- `chore`: Maintenance

**Contoh:**
```
docs: Add flowchart example in algoritma section

- Tambah diagram untuk menghitung luas segitiga
- Update penjelasan simbol flowchart
- Perbaiki typo di section 1.2.3
```

```
feat: Add Cisco Packet Tracer basic topology lab

- Praktikum baru tentang topologi jaringan sederhana
- Konfigurasi 2 PC dengan 1 switch
- Test konektivitas dengan ping
```

## Code of Conduct

- Bersikap ramah dan profesional
- Hormati pendapat orang lain
- Fokus pada pembelajaran
- Bantu sesama learner

## Review Process

1. Maintainer akan review Pull Request Anda
2. Mungkin ada request untuk perubahan
3. Setelah approved, akan di-merge

## Testing

Sebelum submit Pull Request:

**Untuk Materi ALPRO:**
```bash
# Test kompilasi C++ code
g++ -o test_program your_code.cpp
./test_program

# Atau di Code::Blocks: Build & Run
```

**Untuk Materi Jaringan:**
- Buka file .pkt di Cisco Packet Tracer
- Test konektivitas antar device (ping)
- Verifikasi konfigurasi di setiap device
- Pastikan semua requirements terpenuhi

**Untuk Dokumentasi:**
- Periksa typo dan grammar
- Pastikan link berfungsi
- Verifikasi format Markdown
- Review screenshot masih relevan

## Questions?

Jika ada pertanyaan:
- Buat issue dengan label "question"
- Diskusikan di forum atau grup praktikum
- Hubungi asisten praktikum

---

**Terima kasih atas kontribusi Anda! Setiap kontribusi, sekecil apapun, sangat membantu meningkatkan kualitas modul PTKD! 🙏**
