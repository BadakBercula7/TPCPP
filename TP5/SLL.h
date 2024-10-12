#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#define NIL NULL
#define first(L) L.first
#define info(P) P->info
#define next(P) P->next

using namespace std;
typedef int infotype;
typedef struct ElmList *address;
struct ElmList {
    infotype info;
    address next;
};
struct List {
    address first;
};

void createList(List &L);
address createElement(infotype x);
void insertLast(List &L, address P);
void printList(List L);
void insertFirst(List &L, address P);
void deleteFirst(List &L, address &P);

void searchElement(List L, int i);
void bubbleSort(List &L);
void insertSorted(List &L, address P);


#endif // SLL_H_INCLUDED
