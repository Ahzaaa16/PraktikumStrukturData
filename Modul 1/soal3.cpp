#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Nama : Rayhan Ahza Widyamukti" << endl;
    cout << "NIM  : 109082500210" << endl;
    cout << endl;

    cout << "Input: ";
    cin >> n;

    cout << "Output:" << endl;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << "*";

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    for (int j = 1; j <= n; j++)
    {
        cout << " ";
    }

    cout << "*";

    return 0;
}