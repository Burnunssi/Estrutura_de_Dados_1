#include "cVolume.h"
#include <iostream>
#include <cmath>

using namespace std;

cVolume::cVolume() {}
cVolume::cVolume(const cVolume& orig) {}
cVolume::~cVolume() {}

void cVolume::lerDados(){
    double raio = 0;
    double r = 0;
    
    cout << "Informe o raio de uma esfera: ";
    cin >> raio;
    
    r = this->calcVolume(raio);
    cout << "O volume da esfera é: " << r << endl;
}
double cVolume::calcVolume(double r){
    double v = 0;
    double pi = M_PI;
    v =  4*(pi*pow(r,3))/3;
    return v;
}