Laboratorium Teknik Komputer



# PRAKTIKUM 12
# PENCARIAN ARRAY


## 12.1 Tujuan

1. Mahasiswa mampu menyusun program pencarian menggunakan array.


## 12.2 Landasan Teori

### 12.2.1 Pengantar Pencarian Array

Searching (pencarian) adalah proses menemukan data atau nilai tertentu pada array, baik array satu dimensi maupun dua dimensi.

Jenis pencarian yang dibahas:
1. Pencarian beruntun (Sequential Search)
2. Pencarian bagi dua (Binary Search)


### 12.2.2 Pencarian Beruntun (Sequential Search)

Sequential search melakukan penelusuran elemen array satu per satu dari awal hingga akhir sampai data yang dicari ditemukan.

Karakteristik:
- Dapat digunakan pada data terurut maupun tidak terurut.
- Proses berhenti ketika data ditemukan atau elemen habis diperiksa.

Langkah umum:
1. Mulai dari elemen pertama.
2. Bandingkan dengan nilai yang dicari.
3. Jika sama, pencarian selesai.
4. Jika berbeda, lanjut ke elemen berikutnya.


### 12.2.3 Pencarian Bagi Dua (Binary Search)

Binary search adalah metode pencarian dengan membagi rentang data menjadi dua bagian secara berulang.

Syarat utama:
- Data harus dalam keadaan terurut.

Langkah umum:
1. Tentukan batas bawah dan batas atas.
2. Hitung posisi tengah.
3. Bandingkan data tengah dengan nilai target.
4. Jika sama, data ditemukan.
5. Jika target lebih kecil, pencarian dilanjutkan ke bagian kiri.
6. Jika target lebih besar, pencarian dilanjutkan ke bagian kanan.
7. Ulangi sampai data ditemukan atau rentang pencarian habis.

Metode ini umumnya lebih cepat dibanding pencarian beruntun pada data terurut.


### 12.2.4 Penjelasan Program `task2.cpp`

Program pada `task2.cpp` menerapkan konsep pencarian beruntun (sequential search) pada kata-kata di dalam kalimat.

Alur program:
1. Program menyimpan kalimat dalam variabel string `teks`.
2. Pengguna memasukkan kata yang ingin dicari.
3. Program membaca karakter satu per satu, lalu memecah kalimat menjadi kata berdasarkan spasi.
4. Setiap kata dibandingkan dengan kata target.
5. Jika cocok, program menampilkan posisi kata ke-n dan status ditemukan.
6. Jika tidak ada kecocokan sampai akhir kalimat, program menampilkan pesan bahwa kata tidak ditemukan.

Catatan:
- Pendekatan ini sejalan dengan sequential search karena pemeriksaan dilakukan berurutan dari awal sampai akhir data.
- Pencarian bersifat sensitif huruf besar-kecil (case-sensitive).


### 12.2.5 Contoh Program Task 2 (`task2.cpp`)

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
	string teks = "Acara halal bi halal di laksanakan pada tanggal 8";
	string cari;

	cout << "Kalimat: " << teks << endl;
	cout << "Masukkan kata yang dicari: ";
	cin >> cari;

	int nomorKata = 0;
	bool ditemukan = false;
	string kata = "";

	for (int i = 0; i <= teks.length(); i++) {
		// Jika spasi atau akhir kalimat
		if (teks[i] == ' ' || i == teks.length()) {
			if (kata != "") {
				nomorKata++;

				if (kata == cari) {
					cout << "Kata ditemukan pada kata ke-" << nomorKata << endl;
					ditemukan = true;
				}

				kata = "";
			}
		} else {
			kata += teks[i];
		}
	}

	if (!ditemukan)
		cout << "Kata tidak ditemukan" << endl;

	return 0;
}
```


### 12.2.6 Pembahasan Terperinci Task 2

1. Program menyimpan satu kalimat dalam variabel `teks`, lalu menerima input kata target pada variabel `cari`.
2. Variabel `kata` digunakan sebagai penampung sementara karakter demi karakter sampai bertemu spasi atau akhir kalimat.
3. Loop berjalan dari indeks `0` sampai `teks.length()` agar kata terakhir tetap diproses.
4. Kondisi `i == teks.length()` berfungsi sebagai penanda akhir string, setara dengan "pemisah virtual" untuk kata terakhir.
5. Setiap kali ditemukan pemisah, jika `kata` tidak kosong maka `nomorKata` bertambah.
6. Kata yang sudah lengkap lalu dibandingkan dengan `cari`.
7. Jika sama, program menampilkan posisi kata (`nomorKata`) dan mengubah status `ditemukan` menjadi `true`.
8. Setelah dibandingkan, `kata` dikosongkan kembali untuk menampung kata berikutnya.
9. Jika sampai loop selesai tidak ada kecocokan, maka `ditemukan` tetap `false` dan program menampilkan pesan "Kata tidak ditemukan".
10. Pola ini termasuk sequential search karena pencarian dilakukan berurutan dari kata pertama sampai kata terakhir tanpa melompati data.

Contoh uji singkat:
1. Input `halal` menghasilkan dua kecocokan pada kata ke-2 dan ke-4.
2. Input `kampus` menghasilkan pesan "Kata tidak ditemukan".


## 12.3 Tugas Praktikum

### Task 2 - Analisis Program Pencarian (`task2.cpp`)

Kerjakan poin berikut:
1. Jalankan program dengan minimal dua kata input: satu ditemukan dan satu tidak ditemukan.
2. Catat output untuk setiap input uji.
3. Jelaskan fungsi variabel `teks`, `cari`, `kata`, `nomorKata`, dan `ditemukan`.
4. Jelaskan alasan penggunaan kondisi `i <= teks.length()` dan `i == teks.length()` pada loop.
5. Uraikan mekanisme pemisahan kata dan proses perbandingan kata target.
6. Buat kesimpulan keterkaitan program dengan konsep Sequential Search.
