#include "DLL.h"

void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

address createElement(infotype x){
    address P;
    P = new ElmList;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
}
//no1
void insertFirst(List &L, address P){
    if(first(L)== NULL) {
        first(L) = P;
        last(L) = P;
    } else {
       next(P) = first(L);
       prev(first(L)) = P;
       first(L) = P;
    }
}
void insertLast(List &L, address P){
    if (first(L)== NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
}
void printList(List L){
    address P = first(L);
    while(P != NULL){
        cout << info(P);
        P = next(P);
        if (P != NULL){
            cout << " <-> ";
        }
    }
    cout << endl;

}
//no 2
void deleteFirst(List &L, address &P){
    P = first(L);
    first(L) = next(first(L));
    next(P) = NULL;
    prev(first(L)) = NULL;
    prev(P) = NULL;
    delete P;
}

void deleteLast(List &L, address &P){
    P = last(L);
    last(L) = prev(last(L));
    prev(P) = NULL;
    next(last(L)) = NULL;
    delete P;
}
//no3
void printListReverse(List L){
    address P = last(L);
    while(P != NULL){
        cout << info(P);
        P = prev(P);
        if (P!= NULL){
            cout << " <-> ";
        }
    }
    cout << endl;
}
