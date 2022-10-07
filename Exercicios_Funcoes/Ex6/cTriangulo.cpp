#include "cTriangulo.h"
#include <iostream>
#include <string>

using namespace std;

cTriangulo::cTriangulo() {}
cTriangulo::cTriangulo(const cTriangulo& orig) {}
cTriangulo::~cTriangulo() {}

void cTriangulo::lerTriangulo(){
    double x, y, z;
    
    cout << "Informe o valor X: ";
    cin >> x;
    cout << "Informe o valor Y: ";
    cin >> y;
    cout << "Informe o valor Z: ";
    cin >> z;
    
    cout << endl << verTriangulo(x, y, z) << endl;
}
string cTriangulo::verTriangulo(double x, double y, double z){
    string tipoTri = "";
    
    if((x < y+z) && (y < x+z) && (z < x+y)){
        if((x == y) && (y == z))
            tipoTri = "As medidas formam um triângulo do tipo: Equilátero";
        else if((x==y && y!=z) || (y==z && z!=x) || (x==z && z!=y))
            tipoTri = "As medidas formam um triângulo do tipo: Isósceles";
        else if(x!=y && y!=z)    
            tipoTri = "As medidas formam um triângulo do tipo: Escaleno";
    }else{
        tipoTri = "As medidas não formam um triângulo!";
    }
    return tipoTri;
}

