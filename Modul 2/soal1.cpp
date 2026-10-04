#include <iostream>
using namespace std;

int main()
{
    int n;
    int nilai[1000];
    int total = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nilai[i];
        total = total + nilai[i];
    }

    int rataRata = total / n;

    int diAtas = 0;
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] > rataRata)
        {
            diAtas++;
        }
    }

    cout << "Rata-rata: " << rataRata << endl;
    cout << "Di atas rata-rata: " << diAtas << endl;

    return 0;
}