#include "cEleicao.h"
#include <iostream>
#include <iomanip>

using namespace std;

cEleicao::cEleicao() {}
cEleicao::cEleicao(const cEleicao& orig) {}
cEleicao::~cEleicao() {}

void cEleicao::lerVotos(){
    int c1=0, c2=0, c3=0, c4=0, n=0, b=0;
    int voto=0, total=0;
    
    do{
        cout << "------ ELEIÇÕES 2022 ------" << endl
               << "1 = Candidato 1" << endl
               << "2 - Candidato 2" << endl
               << "3 - Candidato 3" << endl
               << "4 - Candidato 4" << endl
               << "5 - Nulo" << endl
               << "6 - Branco" << endl
               << "0 - Sair" << endl
               << "Informe o seu voto: ";
        cin >> voto;
       
        switch(voto){
            case 1:
                c1++;
                total++;
                break;
            case 2:
                c2++;
                total++;
                break;
            case 3:
                c3++;
                total++;
                break;
            case 4:
                c4++;
                total++;
                break;
            case 5:
                n++;
                total++;
                break;
            case 6:
                b++;
                total++;
                break;
            case 0:
                cout << "Votação Encerrada!" << endl << endl;
                break;
            default:
                cout << "Opção Inválida!" << endl << endl;
        }
    }while(voto!=0);
    
    this->print(c1, c2, c3, c4, n, b, total);
}

void cEleicao::print(int c1, int c2, int c3, int c4, int n, int b, int total){
    float p1=0, p2=0, p3=0, p4=0, pN=0, pB=0;
    p1 = c1*100/total;
    p2 = c2*100/total;
    p3 = c3*100/total;
    p4 = c2*100/total;
    pN = n*100/total;
    pB = b*100/total;
    
    cout << endl << endl;
    cout << fixed << setprecision(1);
    cout << "--------- RESULTADO DA ELEIÇÃO ----------" << endl
            << "Candidato --- Percentual --- N° de votos:" << endl
            << "1 ----------- " << p1 << "% --------- " << c1 << " votos" << endl
            << "2 ----------- " << p2 << "% --------- " << c2 << " votos" << endl
            << "3 ----------- " << p3 << "% --------- " << c3 << " votos" << endl
            << "4 ----------- " << p4 << "% --------- " << c4 << " votos" << endl
            << "Nulos ------- " << pN << "% --------- " << n << " votos" << endl
            << "Brancos ----- " << pB << "% --------- " << b << " votos" << endl;
}