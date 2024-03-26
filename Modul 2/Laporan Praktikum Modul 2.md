# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Rizal Wahyu Pratama</p>
<p align="center">2311110029</p>

## Tujuan Praktikum

Dengan adanya praktikum ini, penulis telah menargetkan beberapa tujuan diantaranya:
1. Mahasiswa dapat memahami konsep array.
2. Mahasiswa dapat mengetahui jenis dimensi array dan cara penulisannya.
3. Mahasiswa dapat mengimplementasikan array pada kode program yang dibuat.
   
## Dasar Teori

Array atau larik merupakan kumpulan data yang setiap elemennya bertipe sama yang tersusun secara linear dan saling berdekatan dalam memori. Array sangat berguna dalam pemrograman utamanya dalam pengolahan data besar dengan waktu yang singkat dan efisien. Array dapat di akses dengan membedakan indeks arraynya sehingga array memiliki indeks yang menunjukkan posisinya, indeks array dimulai dari indeks ke-0. 

Terdapat beberapa hal yang perlu diperhatikan dalam penggunaan array, diantaranya sistem sintaksis, sematik, dan kebenaran logika (Hanief & Jepriana, 2020). Dimana sintaksis ini merupakan struktur tata bahasa yang digunakan dalam program (Ed.D & Afifah, 2021). Dalam array, terdapat sintaksis yang dapat digunakan untuk mengakses dan memanipulasi elemen-elemen yang ada di dalamnya sehingga hal ini dapat memudahkan programer dalam menggunakan array. Terdapat beberapa keuntungan dalam penggunaan array, sebagai berikut:

1. Array dapat dengan mudah mengelompokkan data yang terkait dalam satu struktur.
2. Dalam hal akses data, elemen array dapat diakses lebih cepat daripada mencari data secara linear.
3. Dalam melakukan perulangan, kita dapat melakukan operasi pada seluruh elemen array dengan efisien.

Terdapat beberapa jenis array yang sering digunakan beberapa programer, diantaranya:

**1. Array Satu Dimensi**

Array satu dimensi ini merupakan kumpulan elemen sama yang disimpan dalam satu baris saja dan dapat diakses menggunakan indeks dari arraynya.

Contoh array satu dimensi:

```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi array satu dimensi
    double suhu[7]; // Array dengan 7 elemen

    // Menginisialisasi nilai-nilai suhu
    suhu[0] = 28.5; // Hari ke-1
    suhu[1] = 30.0; // Hari ke-2
    suhu[2] = 29.3; // Hari ke-3
    suhu[3] = 31.2; // Hari ke-4
    suhu[4] = 27.8; // Hari ke-5
    suhu[5] = 26.5; // Hari ke-6
    suhu[6] = 32.0; // Hari ke-7

    // Mengakses dan mencetak nilai suhu untuk hari ke-4
    cout << "Suhu pada hari ke-4: " << suhu[3] << " derajat Celsius" << endl;

    return 0;
}
```
Output:
```C++
Suhu pada hari ke-4: 27.8 derajat Celcius
```

Pada kode di atas, kita membuat array suhu dari hari ke-1 sampai suhu hari ke-7. Kemudian, kita coba akses array pada indeks ke-3 yang digunakan untuk mengakses suhu pada hari ke-4. Kita mengakses pada indeks ke-3 karena indeks pada array dimulai dari 0.

**2. Array Dua Dimensi**

Array dua dimensi merupakan sekumpulan elemen data yag sama, namun disusun dalam dua dimensi seperti baris dan kolom. Elemen yang ada pada array dua dimensi ini dibedakan menjadi dua seperti indeks baris dan indeks kolom.

Contoh array dua dimensi:

```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi array 2 dimensi untuk menyimpan nilai siswa
    // Terdapat 3 siswa dan 4 mata pelajaran
    int nilai[3][4] = {
        {80, 75, 85, 90}, // Nilai siswa 1 untuk 4 mata pelajaran
        {70, 85, 80, 75}, // Nilai siswa 2 untuk 4 mata pelajaran
        {90, 80, 85, 95}  // Nilai siswa 3 untuk 4 mata pelajaran
    };

    // Mengakses dan mencetak nilai siswa 2 untuk mata pelajaran ke-3
    cout << "Nilai siswa 2 untuk mata pelajaran ke-3: " << nilai[1][2] << endl;

    return 0;
}
```
Output:
```C++
Nilai siswa 2 untuk mata pelajaran ke-3: 80
```

Pada kode di atas, kita dapat mengakses berbagai elemen yang ada pada array dua dimensi yang ada. Sebagai contoh jika diakses adalah Nilai siswa ke-2 pada pelajaran ke-3. Di akses dengan nilai[1][2], maka kita akan mengakses indeks ke-1 untuk akses elemen ke-2 yang mengacu pada baris dan indeks ke-2 untuk elemen ke-3 yang berikutnya mengacu pada kolom.

## Guided 

### 1. [Nama Topik]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code guided praktikan" << endl;
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Unguided 

### 1. [Soal]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
Ed.D, P. Z., & Afifah, W. (2021). Analisis Konten Etnografi & Grounded 
Theory, dan Hermeneutika Dalam Penelitian. Jakarta Timur: PT Bumi 
Askara.
Hanief, S., & Jepriana, I. (2020). Konsep Algoritme dan Aplikasinya Dalam 
Bahasa Pemrograman C++. Penerbit Andi. Yogyakarta: Andi.
