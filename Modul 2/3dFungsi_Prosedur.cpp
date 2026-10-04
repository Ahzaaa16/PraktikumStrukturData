#include <iostream>
using namespace std;

int maks3(int a, int b, int c) {
    int temp_max = a;
    if (b > temp_max) {
        temp_max = b;
    }
    if (c > temp_max) {
    temp_max = c;
    }

    return temp_max;
}

void tulls(int x) {
    for (int i = 0; i < x ; i++){
        cout << "baris ke-" << i + 1 << endl;
    }
}

int main(){
    int hasil_maks = maks3(10, 50, 30);
    cout << "Nilai maksimumnya adalah = " << hasil_maks << endl;

    cout << "Mulai memanggil prosedur: " << endl;
    tulls(3);

    return 0;
}