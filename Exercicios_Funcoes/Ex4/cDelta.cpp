#include "cDelta.h"
#include <iostream>
#include <cmath>

using namespace std;

cDelta::cDelta() {}
cDelta::cDelta(const cDelta& orig) {}
cDelta::~cDelta() {}

void cDelta::lerDados(){
    float a=0, b=0, c=0;
    float r = 0;
    
    cout << "Informe o valor de A: " << endl;
    cin >> a;
    cout << "Informe o valor de B: " << endl;
    cin >> b;
    cout << "Informe o valor de C: " << endl;
    cin >> c;
    
    r = this->calculo(a, b, c);
    
    cout << endl << "Resultado do Delta da equação: " << r << endl;
}

float cDelta::calculo(float a, float b, float c){
    float result = 0;
    result = (pow(b, 2) - (4 * a * c));
    
    return result;
}

