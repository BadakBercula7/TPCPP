#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    stack S1,S2,S3;
    createStack(S1);
    createStack(S2);
    createStack(S3);
    int input;

    //Soal 1
    cout << "SOAL 1" <<endl;
    cout << "input: ";
    for (int i = 0; i < 8; i++){
        cin >> input;
        push (S1,input);
    }
    int hasil = sumStack (S1);
    cout << "Hasil Penjumlhan: " << hasil << endl << endl;

    //Soal 2
    cout << "SOAL 2" <<endl;
    cout << "input: ";
    for (int i = 0; i < 8; i++){
        cin >> input;
        push (S2,input);
    }

    reverseStack (S2);

    //Soal 3
    cout << "SOAL 3" <<endl;
    cout << "input: ";
    for (int i = 0; i < 8; i++){
        cin >> input;
        push (S3,input);
    }
    printStack (S3);
    return 0;
}
