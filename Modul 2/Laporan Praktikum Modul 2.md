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

Dari kode yang telah dibuat, menghasilkan output seperti di atas. Dimana pada output akan ditampilkan angka-angka array dari yang kita inputkan. Lalu angka-angka tersebut akan di bentuk menjadi array 2x3x3. 

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Guided01.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputGuided1.png" alt="Alt Text">
</p>

### 2. Guided 2
#### Nilai Maksimum pada Array

#### Program Mencari Nilai Maksimum pada Array :

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

#### Bagian 1

```C++
#include <iostream>
using namespace std;
```

Pada bagian di atas merupakan bagian menggunakan library <iostream> yang digunakan untuk input dan output lalu namespace std, agar setiap menggunakan fungsi tidak perlu menginputkan std lagi.

#### Bagian 2

```C++
int main() {
    // Deklarasi variabel
    int maks, a, lokasi;

    // Meminta pengguna untuk memasukkan panjang array
    cout << "Masukkan panjang array  : ";
    cin >> a;
```

Pada bagian di atas merupakan bagian fungsi utama atau fungsi main(). Fungsi ini akan dieksekusi terlebih dahulu ketika di Run. Pada bagian di atas kita akan mendeklarasikan variabel maks, a, dan lokasi dimana variabel ini digunakan untuk menyimpan nilai maksimum, panjang array, dan lokasi nilai maksimum di dalam array. Pada bagian ini juga meminta inputan dari pengguna menggunakan cout dan mengeluarkan menggunakan cin.

#### Bagian 3

```C++
    // Memeriksa apakah panjang array valid
    if (a <= 0){
        cout << "Panjang array harus lebih besar dari 0"<<endl;
        return 1; // Mengembalikan 1 menandakan kesalahan
    }
```

Pada bagian ini dapat memeriksa panjang array menggunakan if (a <= 0). Apabila panjang array 0 atau tidak valid maka pesan akan dicetak lalu mereturn 1.

#### Bagian 4

```C++
    // Deklarasi array dengan panjang sesuai input pengguna
    int array[a];

    // Meminta pengguna untuk memasukkan nilai-nilai array
    cout <<"Masukkan "<<a<<" angka\n";
    for (int i = 0 ; i < a ; i++) {
        cout<<"Array ke-"<<(i+1)<<": ";
        cin >> array[i];
    }
```

Pada bagian 4 di atas, dapat mendeklarasikan dan mengisi array dengan panjang a sesuai dengan inputan pengguna. Terdapat fungsi cin untuk mengambil inputan dari pengguna dan terdapat for yang digunakan untuk melooping array dengan nilai-nilai yang telah dimasukkan user.

#### Bagian 5

```C++
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
```

Pada bagian 5 ini, merupakan program yang mencari nilai maksimum serta lokasi dari nilai maksimum tersebut. maks = arrat[0] ini menginisiasi maks dengan nilai pertama di dalam array sama dengan lokasi = 0 yang menunjukkan nilai maksimum terkini. Fungsi for yang ada di dalamnya digunakan untuk menelusuri semua elemen array dimulai dari elemen kedua. Pada setiap iterasi nilai maks dan lokasi selalu diperbaharui.

#### Bagian 6

```C++
    // Menampilkan nilai maksimum dan lokasinya dalam array
    cout << "Nilai maksimum adalah " << maks << " Berada pada array ke-" << (lokasi + 1) << endl;
    
    return 0; // Mengembalikan 0 menandakan program berjalan dengan sukses
}
```

Dari kode di atas pada bagian 6, cout digunakan untuk menampilkan nilai maksimum dan lokasi arraynya. return 0 digunakan untuk mengembalikan nilai 0 dan memastikan bahwa program berjalan sampai akhir.

#### Output:

```C++
Masukkan panjang array  : 3
Masukkan 3 angka
Array ke-1: 1
Array ke-2: 7
Array ke-3: 2
Nilai maksimum adalah 7 Berada pada array ke-2
```

**Penjelasan:**

Pada output, pengguna diminta untuk memasukkan panjang array yang diinginkan misalnya 3. Lalu pengguna diminta memasukkan 3 angka untuk mengisi array sebagai contoh 1, 7, 2. Jadi nilai maksimum adalah 7 yang berada pada array ke-2.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Guided02.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputGuided2.png" alt="Alt Text">
</p>

## Unguided 

### 1.  Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

Data Array : 1 2 3 4 5 6 7 8 9 10

Nomor Genap : 2, 4, 6, 8 , 10,

Nomor Ganjil : 1, 3, 5, 7, 9,

Noted: Inputan boleh berubah.

**Kode Program:**

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
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
```

Pada bagian satu di atas kita menginputkan library <iostream> untuk input dan output pada C++, <sstream> untuk input dan output pada string streams, dan <vector> yang digunakan untuk mengakses struktur data vektor. Menggunakan namespace std agar tidak perlu menuliskan std lagi saat menggunakan elemen dalam namespace seperti `cin`,`cout`,`vector`.

#### Bagian 2

```C++
int main() {
    string name; // membuat variabel
    //membuat vektor bertipe integer
    vector<int> numbers;
    vector<int> evenNumbers;
    vector<int> oddNumbers;
```

Kode pada bagian 2 di atas merupakan kode inti atau main kode yang akan pertama kali di eksekusi saat menjalankan fungsi. String name mendeklarasikan variabel name yang berguna untuk menyimpan nama-nama pengguna. Berikutnya kita mendeklarasikan 3 vektor sekaligus dengan data integer di dalamnya yaitu numbers(menyimpan angka yang dimasukkan pengguna), eventNumvers(menyimpan angka genap), dan oddNumbers(menyimpan angka ganjil).

#### Bagian 3

```C++
    //meminta inputan
    cout << "Masukkan nama Anda:" << endl;
    getline(cin, name);
    cout<<endl;
```

Pada bagian di atas, kita membuat kode untuk mengambil inputan nama dari pengguna menggunakan getline yang akan disimpan dalam variabel name.

#### Bagian 4

```C++
    //Menyapa pengguna dan meminta inputan angka
    cout<<"Halo, "<< name << ". Selamat datang di Program pemilihan angka genap dan ganjil." << endl<<endl;
    cout << "Masukkan angka anda, pisahkan dengan spasi!" << endl;
    cout << "Klik enter untuk menampilkan hasil !" << endl;
    string input;
    getline(cin, input);
```

Kode di atas berguna untuk menyapa pengguna dan meminta inputan angka. Kode di atas lebih banyak memunculkan output.

#### Bagian 5

```C++
    // Membaca angka-angka dari baris input
    stringstream ss(input);
    int num;
    while (ss >> num) {
        numbers.push_back(num);
    }
```

Pada kode di atas kita membuat objek stringstream ss untuk membaca dari string input. Berikutnya menggunakan while untuk melooping dalam membaca angka-angka yang dihasilkan string input menggunakan operator (>>) serta menyimpannya dalam vektor numbers.

#### Bagian 6

```C++
    // Memisahkan angka genap dan ganjil dari inputan pengguna
    for (int num : numbers) {
        if (num % 2 == 0) { //menggunakan modulus
            evenNumbers.push_back(num);  //jika habis di bagi 2 masuk ke sini
        } else {
            oddNumbers.push_back(num); //jika tidak habis masuk kesini
        }
    }
```

Pada kode di atas, kita menggunakan loop for untuk mencari data angka di dalam vektor numbers. Setiap data angka yang ada dalam array diperiksa lalu dipisahkan antara genap dan ganjilnya. Angka genap dimasukkan ke evenNumbers dan angka ganjil dimasukkan ke oddNumbers.

#### Bagian 7

```C++
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
```

Kode program di atas akan mencetak angka genap dan janjil dengan mencetaknya satu-persatu menggunakan loop for. Lalu return 0 untuk memastikan program berjalan dengan baik dan benar.

**Output:**

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

#### Penjelasan

Pada bagian output ini pertama user akan diminta untuk memasukkan namanya, lalu akan muncul sapaan Halo dari sistem. Setelah itu user akan diminta menginputkan angka yang setiap angkanya dapat dipisahkan dengan spasi. Jika telah selesai menginputkan angka maka user dapat menekan enter untuk mengeluarkan hasil pemilihan angka genap dan ganjilnya.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Unguided01.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputUnguided1.png" alt="Alt Text">
</p>

### 2.  Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

**Kode Program:**

```C++
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan ukuran array dalam tiga dimensi
    int x_size, y_size, z_size;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array dalam tiga dimensi (x y z): ";
    cin >> x_size >> y_size >> z_size;

    // Deklarasi array berdasarkan ukuran yang dimasukkan oleh pengguna
    int arr[x_size][y_size][z_size];

    // Meminta pengguna untuk memasukkan elemen array
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
    }

    // Output elemen array
    cout << "\nElemen-elemen array yang dimasukkan:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    // Tampilan array
    cout << "\nTampilan array:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
using namespace std;
```

Pada bagian satu di atas kita menginputkan library <iostream> untuk input dan output pada C++. Menggunakan namespace std agar tidak perlu menuliskan std lagi saat menggunakan elemen dalam namespace seperti `cin`,`cout`,`vector`

#### Bagian 2

```C++
int main() {
    // Deklarasi variabel untuk menyimpan ukuran array dalam tiga dimensi
    int x_size, y_size, z_size;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array dalam tiga dimensi (x y z): ";
    cin >> x_size >> y_size >> z_size;
```

Pada kode di atas kita membuat kode main yang merupakan kode yang dijalankan ketika kode mulai di run. Terdapat 3 variabel yaitu x_size, y_size, dan z_size yang dapat digunakan untuk menyimpan array 3 dimensi. Berikutnya pengguna diminta untuk menginputkan ukuran dari array 3 dimensinya melalui cout dan disimpan menggunakan cin.

#### Bagian 3

```C++
    // Deklarasi array berdasarkan ukuran yang dimasukkan oleh pengguna
    int arr[x_size][y_size][z_size];

    // Meminta pengguna untuk memasukkan elemen array
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
    }
```

Pada kode di atas kita mengetahui bahwa kode tersebut untuk membuat array tiga dimensi dengan mendeklarasikan x_size, y_size, dan z_size. Berikutnya membuat nested loop menggunakan for dimulai dari x lalu y dan terakhir z. 

#### Bagian 4

```C++
    // Output elemen array
    cout << "\nElemen-elemen array yang dimasukkan:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }    
```

Pada kode di atas digunakan untuk output dari semua elemen array. Setelah semua nilai dimasukkan ke dalam program, program akan mencetak kembali semua nilai array yang telah dimasukkan. Kita menggunakan for untuk mengakses dan mencetak seluruh elemen array beserta indeksnya. For pada kode di atas berulang.

#### Bagian 5

```C++
    // Tampilan array
    cout << "\nTampilan array:\n";
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
return 0;    
```

Kode di atas digunakan untuk menampilkan array. Pada kode ini, program dapat mencetak tampilan dari array tiga dimensi. Masih sama menggunakan loop for dalam mengakses dan mencetak setiap elemen arraynya. Setiap selesai mencetak elemen dalam satu dimensi, program mencetak baris baru untuk memisahkan dimensi y. Saat seluruh elmen pada y telah di cetak, program akan mencetak baris kosong untuk memisahkan dimensi pada x.

**Output:**

```C++
Masukkan ukuran array dalam tiga dimensi (x y z): 2 2 2
Input Array[0][0][0] = 1
Input Array[0][0][1] = 2
Input Array[0][1][0] = 3
Input Array[0][1][1] = 4
Input Array[1][0][0] = 5
Input Array[1][0][1] = 6
Input Array[1][1][0] = 7
Input Array[1][1][1] = 8

Elemen-elemen array yang dimasukkan:
Data Array[0][0][0] = 1
Data Array[0][0][1] = 2
Data Array[0][1][0] = 3
Data Array[0][1][1] = 4
Data Array[1][0][0] = 5
Data Array[1][0][1] = 6
Data Array[1][1][0] = 7
Data Array[1][1][1] = 8

Tampilan array:
1 2
3 4

5 6
7 8
```

#### Penjelasan

Pada output di atas, pengguna diminta untuk menginputkan ukuran array 3 dimensinya. Dimana pada kode di atas, pengguna menginputkan ukuran array 2 x 2 x 2. Berikuntnya pengguna menginputkan 8 elemen array untuk memenuhi nilai array 3 dimensi. Maka dapatlah dicetak seluruh elemen yang diinputkan lalu di tampilkan dalam bentuk array 3 dimensi.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Unguided02.png">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputUnguided2.png">
</p>

### 3.  Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata– rata dari suatu array dengan input yang dimasukan oleh user!

**Kode Program:**

```C++
// Library yang digunakan untuk fungsi standar yaitu input/output,, algoritma, dan struktur data
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

// Program utama yang akan dieksekusi
int main() {
    // Deklarasi variabel untuk menyimpan panjang array
    int n;
    
    // Meminta pengguna untuk memasukkan panjang array
    cout << "Masukkan panjang array: ";
    cin >> n;

    // Memeriksa jika panjang array tidak valid
    if (n <= 0) {
        cout << "Panjang array harus lebih besar dari 0" << endl;
        return 1; // Mengembalikan 1 menandakan kesalahan
    }

    // Deklarasi array untuk menyimpan data
    int array[n];
    
    // Meminta pengguna untuk memasukkan angka-angka ke dalam array
    cout << "Masukkan " << n << " angka\n";
    for (int i = 0; i < n; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }

    // Mencari nilai maksimum menggunakan fungsi dari library
    int maksimum = *max_element(array, array + n);

    // Mencari nilai minimum menggunakan fungsi dari library
    int minimum = *min_element(array, array + n);

    // Menghitung nilai rata-rata
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += array[i];
    }
    double rata_rata = total / n;

    // Mengurutkan array menggunakan fungsi dari library
    sort(array, array + n);

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Mencari nilai median
    double median;
    if (n % 2 == 0) {
        median = (array[n / 2 - 1] + array[n / 2]) / 2.0; // Menggunakan 2.0 agar pembagian menghasilkan double
    } else {
        median = array[n / 2]; // Jika ganjil, ambil nilai tengah langsung
    }

    // Mencari nilai modus menggunakan unordered_map untuk menghitung frekuensi
    unordered_map<int, int> frekuensi;
    for (int i = 0; i < n; i++) {
        frekuensi[array[i]]++;
    }
    int modus = -1, maksimum_frekuensi = 0;
    for (auto it : frekuensi) {
        if (it.second > maksimum_frekuensi) {
            modus = it.first;
            maksimum_frekuensi = it.second;
        }
    }

    // Menampilkan hasil perhitungan statistik
    cout << "Nilai maksimum adalah " << maksimum << endl;
    cout << "Nilai minimum adalah " << minimum << endl;
    cout << "Nilai rata-rata adalah " << rata_rata << endl;
    cout << "Nilai tengah setelah diurutkan adalah " << median << endl;
    cout << "Nilai modus adalah " << modus << " dengan frekuensi " << maksimum_frekuensi << endl;

    return 0; // Mengembalikan 0 menandakan program berjalan dengan sukses
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
```

Pada kode di atas, kita menggunakan beberapa library pada C++ yaitu <iostream> untuk input dan output kode C++, <algorithm> menggunakan fungsi seperti searching, <unordered_map> menggunakan struct unordered_map, dan <vector> untuk menggunakan struct data vektor. Menggunakan namespace std agar tidak perlu menuliskan std lagi saat menggunakan elemen dalam namespace seperti `cin`,`cout`,`vector`.

#### Bagian 2

```C++
int main() {
.............
}
```
 Kode di atas akan berikan semua main code dari seluruh codingan.

#### Bagian 3

```C++
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;   
```

Pada bagian ini n dideklarasikan untuk menyimpan panjang array serta memunculkan pesan menggunakan cout.

#### Bagian 4

```C++
    if (n <= 0) {
        cout << "Panjang array harus lebih besar dari 0" << endl;
        return 1; // Mengembalikan 1 menandakan kesalahan
    }    
```

Pada kode di atas cara kerjanya adalah memeriksa panjang array yang diinputkan dari pengguna wajib valid yaitu lebih besar sama dengan 0, jika tidak memenuhi maka akan mereturn 1 sebagai kesalahan.

#### Bagian 5

```C++
    int array[n];
    cout << "Masukkan " << n << " angka\n";
    for (int i = 0; i < n; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array[i];
    }    
```

Pada kode di atas pertama array dideklarasikan yang ditentukan oleh pengguna. Pengguna diminta untuk memasukkan angka-angka sesuai panjang array yang dimintanya. Dimana for ini akan membaca dan menyimpan setiap angka yang dimasukkan ke dalam array.

#### Bagian 6

```C++
    int maksimum = *max_element(array, array + n);

    int minimum = *min_element(array, array + n);

    double total = 0;
    for (int i = 0; i < n; i++) {
        total += array[i];

    sort(array, array + n);
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    }
    double rata_rata = total / n;

    double median;
    if (n % 2 == 0) {
        median = (array[n / 2 - 1] + array[n / 2]) / 2.0;
    } else {
        median = array[n / 2];
    }

    unordered_map<int, int> frekuensi;
    for (int i = 0; i < n; i++) {
        frekuensi[array[i]]++;
    }
    int modus = -1, maksimum_frekuensi = 0;
    for (auto it : frekuensi) {
        if (it.second > maksimum_frekuensi) {
            modus = it.first;
            maksimum_frekuensi = it.second;
        }
    }  
```

- Pada kode program di atas, kita membuat program yang dapat mencari nilai maksimum dan minimum dimana tentunya ini menggunakan library <algorithm>. 
- Pada kode di atas kita juga dapat menghitung nilai rata-rata dari array yang diinputkan. 
- Disini kita membuat variabel total yang berupa double atau float. Lalu menggunakan for dalam perulangannya. 
- Untuk mencari nilai tengah atau median dibutuhkan data yang urut terlebih dahulu, oleh karena itu pada program tertera algoritma sorting agar dapat dicari mediannya. Pada median ini tipe data yang dikeluarkan berupa double atau float yang terdiri dari 2 kondisi, dimana kondisi pertama adalah ketika jumlah array modulo dari 2 = 0 maka akan masuk ke if, ketika array modulo dari 2 != 0 maka akan masuk ke else.
- Terakhir kita dapat mencari nilai modus atau nilai yang paling sering muncul. Disini kita dapat menggunakan library unordered_map yang berguna untuk menghitung frekuensi kemunculan setiap nilai dalam array. Dengan menggunakan for, setiap elemen dalam array dapat diakses dengan melooping. Terdapat pasangan kunci-nilai(it) yang mewakili nilai dalam array dan frekuensi kemunculannya. Apabila kemunculan nilai lebih besar dari maksimum_frekuensi maka nilai yang muncul tersebut dianggap sebagai modus baru. Maka variabel modus dan maksimum_frekuensi akan selalu berubah dan diperbaharui sesuai dengan nilai modus dan frekuensi kemunculannya.


#### Bagian 7

```C++
    cout << "Nilai maksimum adalah " << maksimum << endl;
    cout << "Nilai minimum adalah " << minimum << endl;
    cout << "Nilai rata-rata adalah " << rata_rata << endl;
    cout << "Nilai tengah setelah diurutkan adalah " << median << endl;
    cout << "Nilai modus adalah " << modus << " dengan frekuensi " << maksimum_frekuensi << endl;

return 0;    
```

Pada bagian terakhir ini, semua output hanya perlu di cetak serta mengakhiri program dengan return 0.

**Output:**

```C++
Masukkan panjang array: 4
Masukkan 4 angka
Array ke-1: 1
Array ke-2: 56
Array ke-3: 1
Array ke-4: 4
Array setelah diurutkan: 1 1 4 56 
Nilai maksimum adalah 56
Nilai minimum adalah 1
Nilai rata-rata adalah 15.5
Nilai tengah setelah diurutkan adalah 2.5
Nilai modus adalah 1 dengan frekuensi 2
```

#### Penjelasan

Pada output kode di atas, user akan diminta untuk memasukkan panjang array terlebih dahulu, pada contoh memasukkan panjang array adalah 4 dengan nilai 1, 56, 1, 4. Lalu array akan di urutkan sesuai dari terkecil ke terbesar atau ascending. Setelah diurutkan maka seluruh perhitungan dapat dicetak mulai dari nilai maksimum, minimum, rata-rata, median, dan modus.

#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/Unguided3.png">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-2/blob/main/Modul%202/Screenshot%20In%20and%20Out/OutputUnguided3.png">
</p>

## Kesimpulan

Dengan mempelajari array dalam bahasa pemrograman C++ kita dapat mengetahui berbagai hal yang baru dan penting. Dimana kita dapat mengetahui bagaimana kemampuan array dalam menyimpan dan mengelola data secara efisien di dalam program. Dalam mata kuliah ini kita mengetahui bahwa array dapat berupa sat dimensi, dua dimensi, hingga multi dimensi dengan masing-masing kegunaannya. Kita dapat melihat bagaimana array dapat digunakan untuk menyimpan data tunggal, data tabel, maupun data kompleks dalam array multi dimensi. Melalui pemahaman yang tinggi di bidang array, seorang programer dapat mengakses serta memanipulasi data dengan lebih efisien serta optimalisasi kerja dalam pengembangan aplikasi yang lebih canggih. 

## Referensi

Ed.D, P. Z., & Afifah, W. (2021). Analisis Konten Etnografi & Grounded 
Theory, dan Hermeneutika Dalam Penelitian. Jakarta Timur: PT Bumi 
Askara.

Hanief, S., & Jepriana, I. (2020). Konsep Algoritme dan Aplikasinya Dalam 
Bahasa Pemrograman C++. Penerbit Andi. Yogyakarta: Andi.
