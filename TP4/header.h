#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

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
//soal 1
void createList(List &L);
address createElement(infotype x);
void insertLast(List &L, address P);
void printList(List L);
//soal 2
void insertFirst(List &L, address P);
//soal 3
void deleteFirst(List &L, address &P);

#endif // HEADER_H_INCLUDED
