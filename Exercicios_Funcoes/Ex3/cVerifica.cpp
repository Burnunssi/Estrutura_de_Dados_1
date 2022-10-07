#include "cVerifica.h"
#include <iostream>

using namespace std;

cVerifica::cVerifica() {}
cVerifica::cVerifica(const cVerifica& orig) {}
cVerifica::~cVerifica() {}

void cVerifica::lerDados(){
    int n=0;
    int r=0;
    
    cout << "Informe um número inteiro: ";
    cin >> n;
    
    r = this->verifDados(n);
    
    if(r == 1)
        cout << endl << "Resultado: Positivo" << endl;
    else if(r == -1)
        cout << endl << "Resultado: Negativo" << endl;
    else 
        cout << endl << "Resultado: Zero" << endl;
}

int cVerifica::verifDados(int n){
    int result = 0;
    
    if(n < 0)
        result = -1;
    else if(n == 0)
        result = 0;
    else 
        result = 1;
    
    return result;
}