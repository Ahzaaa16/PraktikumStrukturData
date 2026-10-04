#include <iostream>
using namespace std;

int main()
{
    // =========================
    // ARRAY 1 DIMENSI
    // =========================
    int nilai1D[3] = {80, 85, 90};


    cout << "Rayhan Ahza Widyamukti" << endl;
    cout << "109082500210" << endl;
    cout << "=== ARRAY 1 DIMENSI ===" << endl;
    cout << "Nilai 1: " << nilai1D[0] << endl;
    cout << "Nilai 2: " << nilai1D[1] << endl;
    cout << "Nilai 3: " << nilai1D[2] << endl;

    // =========================
    // ARRAY 2 DIMENSI
    // =========================
    int nilai2D[2][3] = {
        {80, 85, 90},
        {75, 88, 92}};

    cout << endl;
    cout << "=== ARRAY 2 DIMENSI ===" << endl;
    cout << "Baris 0, Kolom 0 : " << nilai2D[0][0] << endl;
    cout << "Baris 0, Kolom 1 : " << nilai2D[0][1] << endl;
    cout << "Baris 1, Kolom 2 : " << nilai2D[1][2] << endl;

    // =========================
    // ARRAY 3 DIMENSI
    // =========================
    int nilai3D[2][2][2] = {
        {{80, 85},
         {75, 90}},
        {{80, 85},
         {75, 90}}};

    cout << endl;
    cout << "=== ARRAY 3 DIMENSI ===" << endl;
    cout << "Data [0][0][0] : " << nilai3D[0][0][0] << endl;
    cout << "Data [0][1][1] : " << nilai3D[0][1][1] << endl;
    cout << "Data [1][0][0] : " << nilai3D[1][0][0] << endl;
    cout << "Data [1][1][1] : " << nilai3D[1][1][1] << endl;

    return 0;
}