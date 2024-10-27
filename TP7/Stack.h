#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

const int MAX = 8;
typedef int infotype;

struct stack {
    infotype info[MAX];
    int Top;
};

bool isEmpty (stack S);
bool isFull (stack S);
void createStack (stack &S);
void push (stack &S, infotype X);
int pop (stack &S);
int peek (stack &S);
//Soal 1
int sumStack (stack S);
//Soal 2
void reverseStack (stack &S);
//Soal 3
void printStack (stack &S);
#endif // STACK_H_INCLUDED
