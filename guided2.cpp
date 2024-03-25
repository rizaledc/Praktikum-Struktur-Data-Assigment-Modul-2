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