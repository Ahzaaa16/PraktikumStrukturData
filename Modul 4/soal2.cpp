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

void insertAfter(List &L, address P, address Prec)
{
    if (Prec != NULL)
    {
        P->next = Prec->next;
        Prec->next = P;
    }
}

address findElm(List L, infotype x)
{
    address P = L.first;
    while (P != NULL)
    {
        if (P->info == x)
        {
            return P;
        }
        P = P->next;
    }
    return NULL;
}

void printInfo(List L)
{
    address P = L.first;
    while (P != NULL)
    {
        cout << P->info;
        if (P->next != NULL)
        {
            cout << " -> ";
        }
        P = P->next;
    }
    cout << endl;
}

int main()
{
    List L;
    int n, x, cari, baru;

    createList(L);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        insertLast(L, alokasi(x));
    }

    cin >> cari;
    cin >> baru;

    address Prec = findElm(L, cari);
    if (Prec != NULL)
    {
        insertAfter(L, alokasi(baru), Prec);
    }

    printInfo(L);

    return 0;
}