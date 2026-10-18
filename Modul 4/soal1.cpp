#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string nama;
    Node *next;
};

Node *head = NULL;

void insertLast(string nama)
{
    Node *baru = new Node;
    baru->nama = nama;
    baru->next = NULL;

    if (head == NULL)
    {
        head = baru;
    }
    else
    {
        Node *bantu = head;
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }
}

bool deleteFirst(string &namaDilayani)
{
    if (head == NULL)
    {
        return false;
    }
    Node *hapus = head;
    namaDilayani = hapus->nama;
    head = head->next;
    delete hapus;
    return true;
}

void tampilAntrean()
{
    cout << "Antrean: ";
    if (head == NULL)
    {
        cout << "(kosong)";
    }
    else
    {
        Node *bantu = head;
        while (bantu != NULL)
        {
            cout << bantu->nama;
            if (bantu->next != NULL)
            {
                cout << " -> ";
            }
            bantu = bantu->next;
        }
    }
    cout << endl;
}

int main()
{
    int pilihan;
    string nama;

    do
    {
        cin >> pilihan;

        if (pilihan == 1)
        {
            cin >> nama;
            insertLast(nama);
            tampilAntrean();
        }
        else if (pilihan == 2)
        {
            if (deleteFirst(nama))
            {
                cout << "Melayani: " << nama << endl;
                tampilAntrean();
            }
            else
            {
                cout << "Antrean kosong" << endl;
            }
        }
    } while (pilihan != 3);

    return 0;
}