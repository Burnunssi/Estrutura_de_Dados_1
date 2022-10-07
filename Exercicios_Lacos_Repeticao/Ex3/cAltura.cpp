#include "cAltura.h"
#include <iostream>

using namespace std;

cAltura::cAltura() {}
cAltura::cAltura(const cAltura& orig) {}
cAltura::~cAltura() {}

void cAltura::lerDados(){
    float h=0;
    float maior, menor;
    
    for(int i=0; i<5; i++){
        cout << "Informe sua altura: ";
        cin >> h;
        
        if(i == 0){
            maior = h;
            menor = h;
        }else{
            maior = this->verifMaior(h, maior);
            menor = this->verifMenor(h, menor);
        }
    }
    
    cout << endl << endl;
    cout << "Maior altura: " << maior << endl
         << "Menor altura: " << menor << endl;
}

float cAltura::verifMaior(float h, float maior){
    if(h > maior){
        maior = h;
    }
    return maior;
}

float cAltura::verifMenor(float h, float menor){
    if(h < menor){
        menor = h;
    }
    return menor;
}