#include <iostream>
#include "Stack.h"
using namespace std;

void createStack (stack &S){
    S.Top = -1;
}

bool isEmpty (stack S){
    if (S.Top == -1){
        return true;
    } else {
        return false;
    }
}

bool isFull (stack S){
    if (S.Top == MAX -1){
        return true;
    } else {
        return false;
    }
}

void push (stack &S, infotype X){
    if (!isFull (S)){
        S.Top++;
        S.info[S.Top] = X;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

int pop (stack &S){
    if (!isEmpty (S)){
        infotype X;
        X = S.info[S.Top];
        S.Top--;
        return X;
    } else {
        cout << "Stack kosong!" << endl;
        return 0;
    }
}



int peek (stack &S){
    if (!isEmpty (S)){
        return S.info[S.Top];
    } else{
        cout << "Stack Kososng" << endl;
        return -1;
    }
}

//Soal 1
int sumStack (stack S){
    int sum = 0;
    stack tempStack;
    createStack (tempStack);

    while(!isEmpty (S)){
        int X = pop(S);
        sum += X;
        push (tempStack,X);
    }

    while (!isEmpty (tempStack)){
        push (S,pop (tempStack));
    }
    return sum;
}

//Soal 2
void reverseStack (stack &S){
    cout << "Daftar anggota stack kondisi awal: ";
    for (int i = S.Top; i >= 0; i--){
        cout << (S.info [i]);
        if (i > 0){
            cout << "-" ;
        }
    }
    cout << endl;

    stack tempStack1,tempStack2;
    createStack (tempStack1);
    createStack (tempStack2);
    while (!isEmpty (S)){
        push(tempStack1,pop (S));
    }
    while (!isEmpty (tempStack1)){
        push(tempStack2,pop (tempStack1));
    }
    while (!isEmpty (tempStack2)){
        push(S,pop (tempStack2));
    }
    cout << "Daftar anggota stack setelah dibalik: ";
    for (int i = S.Top; i >= 0; i--){
        cout << (S.info [i]);
        if (i > 0){
            cout << "-" ;
        }
    }
    cout << endl << endl;
}

//soal 3
void printStack(stack &S) {
    stack tempStack;
    createStack (tempStack);

    while (!isEmpty (S)) {
        push(tempStack, pop(S));
    }

    cout << "Daftar elemen terurut dari paling bawah: ";
    while (!isEmpty (tempStack)) {
        int X = pop (tempStack);
        cout << X;
        if (!isEmpty (tempStack)){
            cout << "-";
        }
        push(S, X);
    }
    cout << endl;
}

