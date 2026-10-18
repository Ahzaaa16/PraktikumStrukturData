#include <iostream>
#include <string>
using namespace std;

struct Buku
{
    string judul;
    int tahun;
};

typedef Buku infotype;
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

void dealokasi(address &P)
{
    delete P;
    P = NULL;
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

void deleteFirst(List &L, address &P)
{
    if (L.first != NULL)
    {
        P = L.first;
        L.first = P->next;
        P->next = NULL;
    }
}

void deleteLast(List &L, address &P)
{
    if (L.first != NULL)
    {
        if (L.first->next == NULL)
        {
            deleteFirst(L, P);
        }
        else
        {
            address Q = L.first;
            while (Q->next->next != NULL)
            {
                Q = Q->next;
            }
            P = Q->next;
            Q->next = NULL;
        }
    }
}

void printInfo(List L)
{
    cout << "Daftar Buku:" << endl;
    address P = L.first;
    while (P != NULL)
    {
        cout << P->info.judul << " (" << P->info.tahun << ")" << endl;
        P = P->next;
    }
}

int main()
{
    List L;
    int n;

    createList(L);

    cout << "Jumlah buku: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Buku b;
        string kata1, kata2;
        cin >> kata1 >> kata2 >> b.tahun;
        b.judul = kata1 + " " + kata2;
        insertLast(L, alokasi(b));
    }

    address hapus = NULL;
    deleteLast(L, hapus);
    if (hapus != NULL)
    {
        dealokasi(hapus);
    }

    printInfo(L);

    return 0;
}