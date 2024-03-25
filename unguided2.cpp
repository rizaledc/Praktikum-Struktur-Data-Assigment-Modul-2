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