#include <iostream>
#include "DLL.h"

using namespace std;

int main()
{
    List L1,L2,L3;
    address P1a, P1b, P1c, P2a, P2b, P2c, P6 =nullptr;
    createList(L1);
    createList(L2);
    createList(L3);

    //SOAL 1
    int input;
    cout << "SOAL 1" << endl;
    cout << "Masukkan elemen pertama = ";
    cin >> input;
    P1a = createElement(input);
    insertFirst(L1,P1a);

    cout << "Masukkan elemen kedua di awal = ";
    cin >> input;
    P1b = createElement(input);
    insertFirst(L1,P1b);

    cout << "Masukkan elemen Ketiga di akhir = ";
    cin >> input;
    P1c = createElement(input);
    insertLast(L1,P1c);

    cout << "DAFTAR ANGGOTA LIST: " ;
    printList(L1);
    cout << endl;

    //SOAL2
    cout << "SOAL 2" << endl;
    cout << "Masukkan elemen pertama = ";
    cin >> input;
    P2a = createElement(input);
    insertFirst(L2,P2a);

    cout << "Masukkan elemen kedua di akhir = ";
    cin >> input;
    P2b = createElement(input);
    insertLast(L2,P2b);

    cout << "Masukkan elemen Ketiga di akhir = ";
    cin >> input;
    P2c = createElement(input);
    insertLast(L2,P2c);
    deleteFirst(L2,P2c);
    deleteLast(L2,P2c);
    cout << "DAFTAR ANGGOTA LIST SETELAH PENGHAPUSAN: " ;
    printList(L2);
    cout << endl;

    //SOAL 3
    cout << "SOAL 3" << endl;
    cout << "Masukkan elemen pertama = ";
    cin >> input;
    P1a = createElement(input);
    insertFirst(L3,P1a);

    cout << "Masukkan elemen kedua = ";
    cin >> input;
    P1a = createElement(input);
    insertLast(L3,P1a);

    cout << "Masukkan elemen Ketiga = ";
    cin >> input;
    P1a = createElement(input);
    insertLast(L3,P1a);

    cout << "Masukkan elemen Keempat = ";
    cin >> input;
    P1a = createElement(input);
    insertLast(L3,P1a);

    cout << "Daftar elemen dari depan ke belakang: ";
    printList(L3);
    cout << "Daftar elemen dari belakang ke depan: " ;
    printListReverse(L3);

    return 0;
}
