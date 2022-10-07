#include <iostream>
#include "cMenor_Num.h"

using namespace std;

cMenor_Num::cMenor_Num() {}
cMenor_Num::cMenor_Num(const cMenor_Num& orig) {}
cMenor_Num::~cMenor_Num() {}

void cMenor_Num::lerDados(){
    int n1, n2;
    
    cout << "Informe um número: ";
    cin >> n1;
    cout << "Informe outro número: ";
    cin >> n2;
    
    cout << "O menor número entre os dois digitados é: " << menorNum(n1, n2) << endl;
}
int cMenor_Num::menorNum(int n1, int n2){
    if(n1 < n2)
        return n1;
    else if(n2 < n1)
        return n2;
}
