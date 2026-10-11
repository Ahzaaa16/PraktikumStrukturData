#include <iostream>
using namespace std;

void tampilArray(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarPosisi(int arr1[3][3], int arr2[3][3], int baris, int kolom)
{
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int *p1 = &A[0][0];
    int *p2 = &B[0][0];

    cout << "=== Sebelum ditukar ===" << endl;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    tukarPosisi(A, B, 1, 2);
    cout << "\n=== Setelah tukarPosisi (1,2) ===" << endl;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    cout << "\nIsi *p1 = " << *p1 << ", isi *p2 = " << *p2 << endl;
    tukarPointer(p1, p2);
    cout << "\n=== Setelah tukarPointer ===" << endl;
    cout << "Isi *p1 = " << *p1 << ", isi *p2 = " << *p2 << endl;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    return 0;
}