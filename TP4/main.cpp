#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    List L1;
    createList(L1);
    //Soal 1
    cout << "Soal 1" << endl;
    for (int i = 0; i < 3; ++i) {
        int input;
        cout << "Masukkan nilai elemen ke-" << i + 1 << ": ";
        cin >> input;
        address element = createElement(input);
        insertLast(L1, element);
    }
    cout << "List 1 :" << endl;
    printList(L1);

    //soal 2
    cout << "Soal 2" << endl;
    List L2;
    createList(L2);
    for (int i = 0; i < 2; ++i) {
        int input;
        cout << "Masukkan nilai elemen ke-" << i + 1 << " insert First: ";
        cin >> input;
        address element = createElement(input);
        insertFirst(L2,element);
    }
    for (int i = 0; i < 2; ++i) {
        int input;
        cout << "Masukkan nilai elemen ke-" << i + 1 << " insert Last: ";
        cin >> input;
        address element = createElement(input);
        insertLast(L2,element);
    }
    cout << "List 1 :" << endl;
    printList(L1);
    cout << "List 2 :" << endl;
    printList(L2);

        //soal 3
    cout << "Soal 3" << endl;
    List L3;
    createList(L3);
    int input;
    cout << "Masukkan nilai elemen : ";
    cin >> input;
    address element = createElement(input);
    insertFirst(L3,element);
    deleteFirst(L3,element);

    cout << "List 1 :" << endl;
    printList(L1);
    cout << "List 2 :" << endl;
    printList(L2);
    cout << "List 3 :" << endl;
    printList(L3);
    return 0;
}

