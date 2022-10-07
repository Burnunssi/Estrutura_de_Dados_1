#include "cPrimo.h"
#include <iostream>
#include <string>

using namespace std;

cPrimo::cPrimo() {}
cPrimo::cPrimo(const cPrimo& orig) {}
cPrimo::~cPrimo() {}

void cPrimo::lerDados(){
    int n=0;
    bool primo;
    
    cout << "Informe um número: ";
    cin >> n;
    
    primo = this->verifNum(n);
    
    if(primo == true)
        cout << "É primo!" << endl;
    else 
        cout << "Não é primo!" << endl;
}

bool cPrimo::verifNum(int n){
    bool primo = true;
    
    for(int i=2; i<=n/2; i++){
        if(n < 1){
            primo = false;
            break;
        }else{
            if(n%i == 0){
                primo = false;
                break;
            }else{
                primo = true;
            }
        }
    }
    return primo;
}