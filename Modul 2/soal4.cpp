#include <iostream>
using namespace std;

void tukarKali(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    a = a * 10;
    b = b * 10;
}

int main()
{
    int x, y;

    cin >> x >> y;

    tukarKali(x, y);

    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}