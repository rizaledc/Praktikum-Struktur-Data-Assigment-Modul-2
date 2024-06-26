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