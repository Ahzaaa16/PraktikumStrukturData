#include <iostream>
using namespace std;

int main()
{
    int angka;

    cout << "Nama : Rayhan Ahza Widyamukti" << endl;
    cout << "NIM  : 109082500210" << endl;
    cout << endl;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    string satuan[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan"};

    if (angka == 0)
    {
        cout << "Output: nol" << endl;
    }
    else if (angka == 100)
    {
        cout << "Output: seratus" << endl;
    }
    else if (angka < 10)
    {
        cout << "Output: " << satuan[angka] << endl;
    }
    else if (angka == 10)
    {
        cout << "Output: sepuluh" << endl;
    }
    else if (angka == 11)
    {
        cout << "Output: sebelas" << endl;
    }
    else if (angka < 20)
    {
        cout << "Output: " << satuan[angka - 10] << " belas" << endl;
    }
    else
    {
        cout << "Output: " << satuan[angka / 10] << " puluh";

        if (angka % 10 != 0)
        {
            cout << " " << satuan[angka % 10];
        }

        cout << endl;
    }

    return 0;
}