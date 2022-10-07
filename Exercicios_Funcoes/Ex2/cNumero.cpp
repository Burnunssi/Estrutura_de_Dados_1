#include "cNumero.h"
#include <iostream>

using namespace std;

cNumero::cNumero() {}
cNumero::cNumero(const cNumero& orig) {}
cNumero::~cNumero() {}

void cNumero::lerNotas(){
    char opc;
    float n1, n2, n3;
    
    cout << "Informe a nota 1: ";
    cin >> n1;
    cout << "Infrome a nota 2: ";
    cin >> n2;
    cout << "Informe a nota 3: ";
    cin >> n3;
    
    cout << "Informe A para média aritmética ou P para ponderada: ";
    cin >> opc;
    opc = toupper(opc);
    
    switch(opc){
        case 'A':
            cout << "A média aritmética é: " << ((n1 + n2 + n3)/3) << endl;
            break;
        case 'P':
            cout << "A média ponderada é: " << (((n1*5) + (n2*3) + (n3*2))/10) << endl;
            break;
        default:
            cout << "Opção Inválida";
    }
}

