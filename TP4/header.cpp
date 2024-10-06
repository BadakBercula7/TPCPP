#include "header.h"

//soal 1
void createList(List &L){
    first(L) = NULL;
}

//soal 1
address createElement(infotype x){
    address P;
    P = new ElmList;
    info(P) = x;
    next(P) = NULL;
}

//soal 1
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

//soal 1
void printList(List L){
    address P = first(L);
    while(P != NULL){
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
}

//soal 2
void insertFirst(List &L, address P){
    if(first(L)== NULL) {
        first(L) = P;
    } else {
       next(P) = first(L);
       first(L) = P;
    }
}

//soal 3
void deleteFirst(List &L, address &P){
    P = first(L);
    first(L) = next(first(L));
    next (P) = NIL;
    delete P;
}





