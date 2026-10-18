#include <iostream>
using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};

struct List
{
    address first;
};

void createList(List &L)
{
    L.first = NULL;
}

address alokasi(infotype x)
{
    address P = new elmlist;
    P->info = x;
    P->next = NULL;
    return P;
}

void insertFirst(List &L, address P)
{
    P->next = L.first;
    L.first = P;
}

void insertLast(List &L, address P)
{
    if (L.first == NULL)
    {
        insertFirst(L, P);
    }
    else
    {
        address Q = L.first;
        while (Q->next != NULL)
        {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void hitungSum(List L, int &total)
{
    total = 0;
    address P = L.first;
    while (P != NULL)
    {
        total = total + P->info;
        P = P->next;
    }
}

int main()
{
    List L;
    int n, x, total;

    createList(L);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        insertLast(L, alokasi(x));
    }

    hitungSum(L, total);
    cout << total << endl;

    return 0;
}