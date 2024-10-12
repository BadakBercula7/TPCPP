#include "SLL.h"


void createList(List &L){
    first(L) = NULL;

}
address createElement(infotype x){
    address P;
    P = new ElmList;
    info(P) = x;
    next(P) = NULL;
}
void insertLast(List &L, address P){
    if (first(L)== NULL) {
        first(L) = P;
    } else {
        address Q = first(L);
        while (next(Q) !=NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}
void printList(List L){
    address P = first(L);
    while(P != NULL){
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
}
void insertFirst(List &L, address P){
    if(first(L)== NULL) {
        first(L) = P;
    } else {
       next(P) = first(L);
       first(L) = P;
    }
}
void deleteFirst(List &L, address &P){
    P = first(L);
    first(L) = next(first(L));
    next (P) = NIL;
    delete P;
}

//no1
void searchElement(List L, int i){
    address current;
    int position;

    current = first(L);
    position = 1;

    while (current != NULL){
        if (i== info(current)){
            cout << "Elemen " << i << " ditemukan di alamat: " << current << ", pada posisi: " << position << endl;
            return;
        }
        position ++;
        current = next(current);
    }
    cout << "Tidak ditemukan " << i << " pada list" << endl;
}

//no2
void bubbleSort(List &L){
    address current;
    bool swapped;
    do{
        swapped = false;
        current = first(L);
        while (next(current)!= NULL){
            if (info(current) > info(next(current))){
                swap (info(current),info(next(current)));
                swapped = true;
            }
            current = next(current);
        }
    } while (swapped);
}

//no3
void insertSorted(List &L, address P){
    address Q,Prev;
    bool found;

    Q = first(L);
    found = false;

    while (!found && Q != NULL){
        if (info(Q) < info(P)){
            Prev = Q;
            Q = next(Q);
        } else {
            found = true;
        }
    }
    if (Q == first(L)){
        next(P) = first(L);
        first(L) = P;
    } else if (Q == NULL){
        next(Prev) = P;
        next(P) = NULL;
    } else {
        next(P) = Q;
        next(Prev) = P;
    }
}
