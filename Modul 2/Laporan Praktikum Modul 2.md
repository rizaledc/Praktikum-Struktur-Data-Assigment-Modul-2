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

**3. Array Multidimensi**

Array multidimensi memiliki kapasitas memori yang lebih besar dibandingkan dengan array satu dimensi dan dua dimensi. Dalam array multidimensi ini setiap elemen dikenali oleh indeks yang sama dengan jumlah dimensi yang ada. 

Berikut ini merupakan contoh dari array multidimensi:

```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi array 3 dimensi untuk menyimpan data koordinat titik dalam ruang 3D
    // Array ini memiliki dimensi 2x3x3
    int koordinat[2][3][3] = {
        {   // Untuk setiap koordinat[0][i][j]
            {1, 2, 3},  // (x, y, z) = (1, 2, 3)
            {4, 5, 6},  // (x, y, z) = (4, 5, 6)
            {7, 8, 9}   // (x, y, z) = (7, 8, 9)
        },
        {   // Untuk setiap koordinat[1][i][j]
            {10, 11, 12},   // (x, y, z) = (10, 11, 12)
            {13, 14, 15},   // (x, y, z) = (13, 14, 15)
            {16, 17, 18}    // (x, y, z) = (16, 17, 18)
        }
    };

    // Mengakses dan mencetak koordinat titik pada indeks tertentu
    cout << "Koordinat titik pada indeks [0][1][2]: (" << koordinat[0][1][0] << ", "
         << koordinat[0][1][1] << ", " << koordinat[0][1][2] << ")" << endl;

    return 0;
}
```

Output:
```C++
Koordinat titik pada indeks [0][1][2]: (4, 5, 6)
```

Contoh di atas memiliki dimensi 2x3x3 yang megartikan terdapat dua lapisan dengan 3 baris serta memiliki 3 kolom di dalamnya. Jadi dengan mengakses koordinat[0][1][2] maka outputnya adalah elemen pada baris ke-2, kolom ketiga, dari matriks pertama dengan output (4,5,6).

## Guided 

### 1. Guided 1
#### Matriks 3 Dimensi

#### Program Input Array Tiga Dimensi :

```C++
#include <iostream>
using namespace std;

// Program array 3 Dimensi
int main()
{
    //Deklarasi array dengan ukuran 2x3x3
    int arr[2][3][3];

    // Input elemen-elemen array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "] [" << y << "] [" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output elemen-elemen array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "] [" << y << "] [" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    cout << endl;

    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                // Menampilkan elemen array dengan menggunakan ends agar elemen-elemen dalam satu baris dipisahkan dengan spasi
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }

    // Mengembalikan nilai 0 menandakan program berjalan
    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
using namespace std;
```

Bagian ini merupakan bagian untuk mengincludekan libraries input dan output. Berikutnya kita akan mendeklarasikan namespace std, sehingga tidak perlu menuliskan std pada setiap penggunaan fungsi.

#### Bagian 2

```C++
int main()
{
    // Main program berada di dalam fungsi utama (main).
}
```

Bagian 2 ini merupakan bagian inti atau bagian yang pertama kali dieksekusi dalam fungsi.  Semua kode program akan dieksekusi mulai dari bagian ini.

#### Bagian 3

```C++
int arr[2][3][3];
```

Mendeklarasi array tiga dimensi dengan ukuran 2 x 3 x 3 dengan dua lapisan, dimana setiap lapisan berisi array 3 x 3.

#### Bagian 4

```C++
for (int x = 0; x < 2; x++)
{
    for (int y = 0; y < 3; y++)
    {
        for (int z = 0; z < 3; z++)
        {
            // Meminta pengguna untuk memasukkan nilai ke dalam array dan menyimpannya
            cout << "Input Array[" << x << "] [" << y << "] [" << z << "] = ";
            cin >> arr[x][y][z]; // Input nilai ke dalam array
        }
    }
    cout << endl; // Mencetak baris kosong setelah setiap iterasi x selesai
}
```

Bagian ini membuat nested loop yang dapat mengiterasi setiap elemen di dalam array serta meminta pengguna untuk memasukkan nilai pada setiap elemen.

#### Bagian 5

```C++
for (int x = 0; x < 2; x++)
{
    for (int y = 0; y < 3; y++)
    {
        for (int z = 0; z < 3; z++)
        {
            // Mencetak nilai dari setiap elemen array
            cout << "Data Array[" << x << "] [" << y << "] [" << z << "] = " << arr[x][y][z] << endl;
        }
    }
}
```

Bagian ini merupakan Output dari elemen array. Bagian ini juga menggunakan nested loop yang dapat digunakan untuk menginterasi setiap elemen dalam array serta mencetak nilainya ke layar.

#### Bagian 6

```C++
for (int x = 0; x < 2; x++)
{
    for (int y = 0; y < 3; y++)
    {
        for (int z = 0; z < 3; z++)
        {
            // Menampilkan nilai dari setiap elemen array dengan menggunakan ends agar elemen-elemen dalam satu baris dipisahkan dengan spasi
            cout << arr[x][y][z] << ends;
        }
        cout << endl;
    }
    cout << endl;
}
return 0;
```

Bagian ini digunakan untuk mendisplaykan array. Bagian ini juga menggunakan nested lopp untuk mengiterasi setiap elemen yang ada dan mencetaknya ke layar. Penggunaan ends ini dapat digunakan untuk memisahkan setiap elemen yang ada pada array dengan spasi. Lalu bagian return 0 juga digunakan untuk memastikan program berjalan sampai akhir tanpa ada kesalahan.

#### Output :

```C++
Input Array[0] [0] [0] = 1
Input Array[0] [0] [1] = 2
Input Array[0] [0] [2] = 3
Input Array[0] [1] [0] = 4
Input Array[0] [1] [1] = 5
Input Array[0] [1] [2] = 6
Input Array[0] [2] [0] = 7
Input Array[0] [2] [1] = 8
Input Array[0] [2] [2] = 9

Input Array[1] [0] [0] = 9
Input Array[1] [0] [1] = 8
Input Array[1] [0] [2] = 7
Input Array[1] [1] [0] = 6
Input Array[1] [1] [1] = 5
Input Array[1] [1] [2] = 4
Input Array[1] [2] [0] = 3
Input Array[1] [2] [1] = 2
Input Array[1] [2] [2] = 1

Data Array[0] [0] [0] = 1
Data Array[0] [0] [1] = 2
Data Array[0] [0] [2] = 3
Data Array[0] [1] [0] = 4
Data Array[0] [1] [1] = 5
Data Array[0] [1] [2] = 6
Data Array[0] [2] [0] = 7
Data Array[0] [2] [1] = 8
Data Array[0] [2] [2] = 9
Data Array[1] [0] [0] = 9
Data Array[1] [0] [1] = 8
Data Array[1] [0] [2] = 7
Data Array[1] [1] [0] = 6
Data Array[1] [1] [1] = 5
Data Array[1] [1] [2] = 4
Data Array[1] [2] [0] = 3
Data Array[1] [2] [1] = 2
Data Array[1] [2] [2] = 1

123
456
789

987
654
321
```

**Penjelasan:**

#### Full Code Screenshot


### 2. Guided 2
#### Nilai Maksimum pada Array

Program Mencari Nilai Maksimum pada Array :

```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int maks, a, lokasi;

    // Meminta pengguna untuk memasukkan panjang array
    cout << "Masukkan panjang array  : ";
    cin >> a;

    // Memeriksa apakah panjang array valid
    if (a <= 0){
        cout << "Panjang array harus lebih besar dari 0"<<endl;
        return 1; // Mengembalikan 1 menandakan kesalahan
    }

    // Deklarasi array dengan panjang sesuai input pengguna
    int array[a];

    // Meminta pengguna untuk memasukkan nilai-nilai array
    cout <<"Masukkan "<<a<<" angka\n";
    for (int i = 0 ; i < a ; i++) {
        cout<<"Array ke-"<<(i+1)<<": ";
        cin >> array[i];
    }

    // Inisialisasi nilai maksimum dengan elemen pertama array
    maks = array[0];
    lokasi = 0;

    // Mencari nilai maksimum dan lokasinya dalam array
    for (int i = 1 ; i < a; i++) {
        if (array[i] > maks) {
            maks = array[i];
            lokasi = i; // Memperbarui lokasi nilai maksimum
        }
    }

    // Menampilkan nilai maksimum dan lokasinya dalam array
    cout << "Nilai maksimum adalah " << maks << " Berada pada array ke-" << (lokasi + 1) << endl;
    
    return 0; // Mengembalikan 0 menandakan program berjalan dengan sukses
}
```

**Penjelasan:**

Output:

```C++
Masukkan panjang array  : 3
Masukkan 3 angka
Array ke-1: 1
Array ke-2: 7
Array ke-3: 2
Nilai maksimum adalah 7 Berada pada array ke-2
```

**Penjelasan:**

#### Full Code Screenshot



## Unguided 

### 1.  Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

Data Array : 1 2 3 4 5 6 7 8 9 10

Nomor Genap : 2, 4, 6, 8 , 10,

Nomor Ganjil : 1, 3, 5, 7, 9,

Noted: Inputan boleh berubah.

Kode Program:
```C++
//Menggunakan library input/output dan struktur data
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

//Membuat kode inti atau main code
int main() {
    string name; // membuat variabel
    //membuat vektor bertipe integer
    vector<int> numbers;
    vector<int> evenNumbers;
    vector<int> oddNumbers;
    
    //meminta inputan
    cout << "Masukkan nama Anda:" << endl;
    getline(cin, name);
    cout<<endl;
    //Menyapa pengguna dan meminta inputan angka
    cout<<"Halo, "<< name << ". Selamat datang di Program pemilihan angka genap dan ganjil." << endl<<endl;
    cout << "Masukkan angka anda, pisahkan dengan spasi!" << endl;
    cout << "Klik enter untuk menampilkan hasil !" << endl;
    string input;
    getline(cin, input);
    
    // Membaca angka-angka dari baris input
    stringstream ss(input);
    int num;
    while (ss >> num) {
        numbers.push_back(num);
    }
    
    // Memisahkan angka genap dan ganjil dari inputan pengguna
    for (int num : numbers) {
        if (num % 2 == 0) { //menggunakan modulus
            evenNumbers.push_back(num);  //jika habis di bagi 2 masuk ke sini
        } else {
            oddNumbers.push_back(num); //jika tidak habis masuk kesini
        }
    }
    
    // Menampilkan angka-angka genap
    cout << "Angka genap: ";
    for (int num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Menampilkan angka-angka ganjil
    cout << "Angka ganjil: ";
    for (int num : oddNumbers) {
        cout << num << " ";
    }
    cout << endl<<endl;
    
    return 0;
}

Output:

```C++
Masukkan nama Anda:
Rizal Wahyu Pratama 

Halo, Rizal Wahyu Pratama. Selamat datang di Program pemilihan angka genap dan ganjil.

Masukkan angka anda, pisahkan dengan spasi!
Klik enter untuk menampilkan hasil !
12 14 13 15 17 18 101 107 108 100 109
Angka genap: 12 14 18 108 100
Angka ganjil: 13 15 17 101 107 109
```

#### Full code Screenshot:



#### Screenshot Output



## Kesimpulan

Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi

Ed.D, P. Z., & Afifah, W. (2021). Analisis Konten Etnografi & Grounded 
Theory, dan Hermeneutika Dalam Penelitian. Jakarta Timur: PT Bumi 
Askara.

Hanief, S., & Jepriana, I. (2020). Konsep Algoritme dan Aplikasinya Dalam 
Bahasa Pemrograman C++. Penerbit Andi. Yogyakarta: Andi.
