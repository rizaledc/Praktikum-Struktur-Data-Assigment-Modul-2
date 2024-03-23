#include <iostream>
using namespace std;

// Konstanta untuk nilai phi (π)
const float PI = 3.14;

// Fungsi untuk menghitung luas persegi panjang
float hitungLuasPersegiPanjang(float panjang, float lebar) {
    return panjang * lebar;
}

// Fungsi untuk menghitung luas segitiga
float hitungLuasSegitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

// Fungsi untuk menghitung luas lingkaran
float hitungLuasLingkaran(float jariJari) {
    return PI * jariJari * jariJari;
}

// Fungsi untuk menampilkan pesan salam
void pesanSalam(char nama[]) {
    cout << "Halo, selamat datang " << nama << "!" << endl;
}

int main() {
    float panjang, lebar, alas, tinggi, jariJari;
    char nama[50];
    int choice;

    cout << "Masukkan nama Anda: ";
    cin.getline(nama, 50);

        // Memanggil fungsi pesanSalam
    pesanSalam(nama);

    cout << "Pilih bangun datar yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi Panjang" << endl;
    cout << "2. Segitiga" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "Masukkan pilihan Anda (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            cout << "Luas persegi panjang dengan panjang " << panjang << " dan lebar " << lebar << " adalah: " << hitungLuasPersegiPanjang(panjang, lebar) << endl;
            break;
        case 2:
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            cout << "Luas segitiga dengan alas " << alas << " dan tinggi " << tinggi << " adalah: " << hitungLuasSegitiga(alas, tinggi) << endl;
            break;
        case 3:
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> jariJari;
            cout << "Luas lingkaran dengan jari-jari " << jariJari << " adalah: " << hitungLuasLingkaran(jariJari) << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}

// RIZAL WAHYU PRATAMA
// 2311110029
//copyright@rizal.edc2024
// S1SD-04-B
