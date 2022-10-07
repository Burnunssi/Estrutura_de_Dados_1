#include "cFibonacci.h"
#include <iostream>

using namespace std;

cFibonacci::cFibonacci() {}
cFibonacci::cFibonacci(const cFibonacci& orig) {}
cFibonacci::~cFibonacci() {}

void cFibonacci::print(){
    int n, ult=1, penult=0;

    cout << "Exibir quantos termos: ";
    cin >> n;

    cout << penult << endl << ult << endl;
    
    this->serie(ult, penult, n);
}

void cFibonacci::serie(int ult, int penult, int n){
    int aux, temp;
    for(aux=3 ; aux<=n ; aux++){
        cout << (ult+penult) << endl;

        temp = penult;
        penult = ult;
        ult = ult + temp;
    }
}