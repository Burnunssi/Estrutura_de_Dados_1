#include "cLanches.h"
#include <iostream>

using namespace std;

cLanches::cLanches() {}
cLanches::cLanches(const cLanches& orig) {}
cLanches::~cLanches() {}

void cLanches::cardapio(){
    cout << "|---------------------PRODUTOS--------------------|" << endl
         << "|-------NOMES----------CÓDIGO----------PREÇO------|" << endl
         << "|----Cachorro quente------100---------R$1,70------|" << endl
         << "|----Bauru simples--------101---------R$2,30------|" << endl
         << "|----Bauru c/ovo----------102---------R$2,60------|" << endl
         << "|----Hambúrguer-----------103---------R$2,40------|" << endl
         << "|----Cheeseburguer--------104---------R$2,50------|" << endl
         << "|----Refrigerante---------105---------R$1,00------|" << endl 
         << "|-------------------------------------------------|" << endl;
}

void cLanches::lerDados(){
    int quantProd, codProd = 0;
    char opcao;
    float conta;
    
    while(opcao != 'S'){
        cardapio();
        
        cout << endl << "Informe o código do produto: ";
        cin >> codProd;
        cout << "Informe a quantidade de produtos: ";
        cin.ignore();
        cin >> quantProd;
        
        conta += calcPreco(codProd, quantProd);
        
        cout << "Digite C para continuar e S para sair: ";
        cin >> opcao;
        opcao = toupper(opcao);
    }
    cout << "---------------------------------\n"
            << "TOTAL: R$ " << conta << endl;
}

double cLanches::calcPreco(int opc, int quant){
    double valorFinal;
    
    switch(opc){
        case 100: valorFinal += quant * 1.70;
          break;
        case 101: valorFinal += quant * 2.30;
          break;
        case 102: valorFinal += quant * 2.60;
          break;
        case 103: valorFinal += quant * 2.40;
          break;
        case 104: valorFinal += quant * 2.50;
          break;
        case 105: valorFinal += quant * 1.00;
          break;
    }
    return valorFinal;
}