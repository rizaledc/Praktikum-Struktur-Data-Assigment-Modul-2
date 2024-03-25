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