Laboratorium Teknik Komputer



# PRAKTIKUM 11
# PENGURUTAN ARRAY


## 11.1 Tujuan

1. Mahasiswa mampu menyusun program pengurutan menggunakan array.


## 11.2 Landasan Teori

### 11.2.1 Pengantar Pengurutan Array

Sorting atau pengurutan adalah proses menyusun data yang semula tidak teratur menjadi teratur berdasarkan aturan tertentu.

Jenis urutan yang umum:
- Ascending (kecil ke besar)
- Descending (besar ke kecil)

Contoh data `7, 4, 8, 6` dapat diurutkan menjadi:
- Ascending: `4, 6, 7, 8`
- Descending: `8, 7, 6, 4`

Keuntungan data terurut:
1. Memudahkan pencarian, perbaikan, penyisipan, penggabungan, dan penghapusan data.
2. Membantu proses kompilasi saat tabel simbol dibutuhkan.
3. Mempercepat pencarian data yang dilakukan berulang.

Metode sorting yang dikenal antara lain:
- Bubble sort
- Merge sort
- Selection sort
- Insertion sort
- Quick sort
- Shell sort
- Heap sort

Pada praktikum ini pembahasan difokuskan pada metode yang umum digunakan.


### 11.2.2 Bubble Sort

Bubble sort (metode gelembung) mengurutkan data dengan membandingkan elemen bersebelahan, lalu menukar posisinya jika belum sesuai aturan urut.

Prinsip umum:
- Ascending: tukar jika elemen kiri lebih besar dari elemen kanan.
- Descending: tukar jika elemen kiri lebih kecil dari elemen kanan.

Proses dilakukan berulang sampai tidak ada pertukaran lagi.

Kelebihan:
- Mudah dipahami dan diimplementasikan.

Kekurangan:
- Kurang efisien untuk jumlah data besar.


### 11.2.3 Selection Sort

Selection sort mengurutkan data dengan cara memilih elemen paling kecil (atau paling besar) dari bagian array yang belum terurut, lalu menukarnya ke posisi yang seharusnya.

Langkah umum:
1. Cari nilai minimum dari rentang data yang belum terurut.
2. Tukar dengan elemen di posisi awal rentang tersebut.
3. Ulangi untuk posisi berikutnya sampai seluruh data terurut.


### 11.2.4 Insertion Sort

Insertion sort bekerja dengan menyisipkan elemen ke posisi yang tepat pada bagian array yang sudah dianggap terurut.

Langkah umum:
1. Ambil elemen dari kiri ke kanan mulai elemen kedua.
2. Bandingkan dengan elemen sebelumnya.
3. Geser elemen yang lebih besar, lalu sisipkan elemen pada posisi yang sesuai.

Kelemahan:
- Banyak proses pergeseran saat data besar, sehingga kurang optimal untuk array berukuran besar.


### 11.2.5 Penjelasan Program `task1.cpp`

Program pada `task1.cpp` menunjukkan implementasi dua metode pengurutan pada array integer yang sama.

Alur program:
1. Data awal disimpan pada array `data1`.
2. Data disalin ke `data2` agar masing-masing metode memakai data awal yang identik.
3. Fungsi `BubbleSort` mengurutkan `data1` secara ascending dengan pertukaran elemen bersebelahan.
4. Fungsi `SelectionSort` mengurutkan `data2` secara ascending dengan memilih elemen minimum tiap iterasi.
5. Hasil akhir kedua metode ditampilkan dan dapat dibandingkan.

Fungsi utama yang digunakan:
- `Tukar(int *a, int *b)` untuk menukar dua nilai.
- `BubbleSort(int data[], int n)` untuk pengurutan gelembung.
- `SelectionSort(int data[], int n)` untuk pengurutan seleksi.
- `tampil(int data[], int n)` untuk menampilkan isi array.


### 11.2.6 Logika Pengurutan pada `task1.cpp`

Data awal yang diproses:
`23, 5, 17, 9, 30, 2, 14, 8, 1, 19`


#### A. Logika Bubble Sort

Struktur loop pada program:
1. Loop luar (`i`) berjalan dari `0` sampai `n-2` sebagai penanda putaran.
2. Loop dalam (`j`) berjalan dari `n-1` turun ke `i+1`.
3. Elemen `data[j-1]` dibandingkan dengan `data[j]`.
4. Jika `data[j-1] > data[j]`, keduanya ditukar dengan fungsi `Tukar`.

Makna logikanya:
1. Dalam setiap putaran, elemen terkecil dari bagian yang belum terurut akan "bergerak" ke sisi kiri.
2. Setelah putaran ke-`i`, posisi `0` sampai `i` sudah terisi nilai yang benar untuk urutan ascending.
3. Proses berhenti setelah seluruh posisi terurut.

Contoh ringkas putaran awal:
1. Putaran 1: nilai `1` berpindah bertahap ke posisi paling kiri.
2. Putaran 2: nilai `2` berpindah ke posisi indeks 1.
3. Putaran 3: nilai `5` menempati posisi indeks 2.


#### B. Logika Selection Sort

Struktur loop pada program:
1. Loop luar (`i`) menentukan posisi yang sedang diisi (dari kiri ke kanan).
2. Variabel `k` menyimpan indeks nilai minimum sementara, diawali `k = i`.
3. Loop dalam (`j`) mencari nilai yang lebih kecil pada rentang `i+1` sampai `n-1`.
4. Jika ditemukan nilai lebih kecil (`data[k] > data[j]`), maka `k` diperbarui.
5. Setelah pencarian selesai, `data[i]` ditukar dengan `data[k]`.

Makna logikanya:
1. Setiap putaran langsung memilih satu nilai minimum untuk ditempatkan di posisi final.
2. Setelah putaran ke-`i`, bagian kiri array (hingga indeks `i`) sudah pasti terurut.
3. Jumlah pertukaran biasanya lebih sedikit dibanding Bubble Sort, walau sama-sama memiliki banyak perbandingan.


#### C. Kompleksitas Singkat

1. Bubble Sort: waktu rata-rata dan terburuk `O(n^2)`.
2. Selection Sort: waktu rata-rata dan terburuk `O(n^2)`.
3. Keduanya cocok untuk data kecil, tetapi kurang efisien untuk data berukuran besar.


### 11.2.7 Contoh Program Task 1 (`task1.cpp`)

```cpp
#include <iostream>
using namespace std;

// Fungsi tukar
void Tukar(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Bubble Sort
void BubbleSort(int data[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=n-1; j>i; j--){
			if(data[j-1] > data[j]){
				Tukar(&data[j-1], &data[j]);
			}
		}
	}
}

// Selection Sort
void SelectionSort(int data[], int n){
	for(int i=0; i<n-1; i++){
		int k = i;
		for(int j=i+1; j<n; j++){
			if(data[k] > data[j]){
				k = j;
			}
		}
		Tukar(&data[i], &data[k]);
	}
}

// Fungsi tampilkan array
void tampil(int data[], int n){
	for(int i=0; i<n; i++){
		cout << data[i] << " ";
	}
	cout << endl;
}

int main(){
	int data1[10] = {23, 5, 17, 9, 30, 2, 14, 8, 1, 19};
	int data2[10];

	// Copy array biar tidak berubah
	for(int i=0; i<10; i++){
		data2[i] = data1[i];
	}

	cout << "Data awal: ";
	tampil(data1, 10);

	// Bubble Sort
	BubbleSort(data1, 10);
	cout << "Hasil Bubble Sort: ";
	tampil(data1, 10);

	// Selection Sort
	SelectionSort(data2, 10);
	cout << "Hasil Selection Sort: ";
	tampil(data2, 10);

	return 0;
}
```


### 11.2.8 Pembahasan Terperinci Task 1

1. Program menggunakan dua array (`data1` dan `data2`) agar perbandingan dua metode tetap adil karena keduanya memproses data awal yang sama.
2. Fungsi `Tukar` dipakai oleh dua algoritma, sehingga tidak ada duplikasi kode pertukaran nilai.
3. Pada `BubbleSort`, perbandingan dilakukan pada elemen bersebelahan (`j-1` dan `j`) dari kanan ke kiri.
4. Jika elemen kiri lebih besar, keduanya ditukar, sehingga elemen kecil akan terdorong ke sisi kiri.
5. Pada putaran pertama Bubble Sort, nilai terkecil (`1`) akan sampai ke indeks pertama.
6. Pada putaran kedua, nilai terkecil berikutnya (`2`) menempati posisi kedua, dan seterusnya sampai terurut.
7. Pada `SelectionSort`, setiap putaran mencari indeks nilai minimum (`k`) dari area yang belum terurut.
8. Setelah minimum ditemukan, dilakukan satu kali pertukaran dengan posisi saat ini (`i`).
9. Dengan pola ini, bagian kiri array selalu bertambah terurut setiap putaran.
10. Hasil akhir Bubble Sort dan Selection Sort pada program ini sama, yaitu urutan ascending dari nilai terkecil ke terbesar.

Simulasi ringkas hasil akhir:
1. Data awal: `23 5 17 9 30 2 14 8 1 19`
2. Hasil Bubble Sort: `1 2 5 8 9 14 17 19 23 30`
3. Hasil Selection Sort: `1 2 5 8 9 14 17 19 23 30`


## 11.3 Tugas Praktikum

_(Tugas praktikum akan diberikan oleh instruktur)_
