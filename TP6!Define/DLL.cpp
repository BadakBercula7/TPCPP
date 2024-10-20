#include "DLL.h"

void createList(List &L){
    L.first = NULL;
    L.last = NULL;
}

address createElement(infotype x){
    address P;
    P = new ElmList;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
}
//no1
void insertFirst(List &L, address P){
    if(L.first == NULL) {
        L.first = P;
        L.last = P;
    } else {
       P->next = L.first;
       L.first->prev = P;
       L.first = P;
    }
}
void insertLast(List &L, address P){
    if (L.first== NULL) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}
void printList(List L){
    address P = L.first;
    while(P != NULL){
        cout << P->info;
        P = P->next;
        if (P != NULL){
            cout << " <-> ";
        }
    }
    cout << endl;

}
//no 2
void deleteFirst(List &L, address &P){
    P = L.first;
    L.first = L.first -> next;
    P->next = NULL;
    L.first->prev = NULL;
    P->prev = NULL;
    delete P;
}

void deleteLast(List &L, address &P){
    P = L.last;
    L.last = L.last->prev;
    P->prev = NULL;
    L.last->next = NULL;
    delete P;
}
//no3
void printListReverse(List L){
    address P = L.last;
    while(P != NULL){
        cout << P->info;
        P = P->prev;
        if (P!= NULL){
            cout << " <-> ";
        }
    }
    cout << endl;
}
