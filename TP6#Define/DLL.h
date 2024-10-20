#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
#define NIL NULL

#define first(L) L.first
#define last(L) L.last
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev

using namespace std;
typedef int infotype;
typedef struct ElmList *address;
struct ElmList {
    infotype info;
    address next;
    address prev;
};
struct List {
    address first;
    address last;
};

void createList(List &L);
address createElement(infotype x);
//no1
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void printList(List L);
//no2
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
//no3
void printListReverse(List L);
#endif // DLL_H_INCLUDED
