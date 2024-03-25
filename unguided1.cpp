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