#include <iostream>
#include "SLL.h"
using namespace std;

int main()
{
    List L;
    address P1, P2, P3, P4, P5, P6 =nullptr;
    createList(L);

    P1 =createElement(5);
    insertFirst(L,P1);

    P2 =createElement(8);
    insertFirst(L,P2);

    P3 =createElement(2);
    insertFirst(L,P3);

    P4 =createElement(19);
    insertFirst(L,P4);

    P5 =createElement(26);
    insertFirst(L,P5);

    P6 =createElement(10);
    insertFirst(L,P6);
    cout << "Isi list awal : ";
    printList(L);

    cout << " Soal 1" << endl;//Soal 1
    int find;
    cout << "Masukkan angka yang ingin dicari : ";
    cin >> find;
    searchElement(L, find);
    cout << endl;

    cout << " Soal 2" << endl;//Soal 2
    bubbleSort(L);
    cout << "List setelah diurutkan Ascending menggunakan bubble sort : ";
    printList(L);
    cout << endl;

    cout << " Soal 3" << endl;//Soal 3
    int insert;
    cout << "Masukkan angka baru : " ;
    cin >> insert;
    insertSorted(L,createElement(insert));
    cout << "List setelah ditambahkan angka baru : ";
    printList(L);
    return 0;
}
