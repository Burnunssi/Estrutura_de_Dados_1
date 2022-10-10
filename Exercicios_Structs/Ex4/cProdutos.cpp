#include "cProdutos.h"
#include <iostream>
#include <iomanip>

using namespace std;

cProdutos::cProdutos() {}
cProdutos::cProdutos(const cProdutos& orig) {}
cProdutos::~cProdutos() {}

void cProdutos::cadProdutos(){
    int n = 0;
    int pesq = 0;
    int x = 0;
    int opc = 1;
    
    cout << "------ MERCADINHO DA DONA ANA ------" << endl << endl;
    cout << "Informe a quantidade de produtos a ser cadasrtrados: ";
    cin >> n;
    cout << endl << endl;
    produto prod[n];
    
    cout << "------ Iniciando o cadastro de " << n << " produtos ------" << endl << endl;
    
    for(int i=0; i<n; i++){
        cout << "------ CADASTRO DE PRODUTOS " << i+1 << " ------" << endl;
        cout << "Informe o nome do produto: ";
        cin >> prod[i].nome;
        cout << "Informe o código do produto: ";
        cin >> prod[i].cod;
        cout << "Informe o preço do produto: ";
        cin >> prod[i].preco;
        cout << endl << endl;
    }
    this->bolha(prod, n);
    this->printList(prod, n);
    
    while(opc == 1){
        cout << endl << endl << "------ PESQUISA DE PRODUTOS ------" << endl << endl;
        cout << "Informe o código do produto procurado: ";
        cin >> pesq;
    
        x = this->consulta(prod, pesq, n);
    
        if(x == -1)
            cout << "Produto não encontrado!" << endl;
        else
            this->printDados(prod, x);
        
        cout << "Deseja procurar mais um produto? (1-SIM e 0-NÂO)";
        cin >> opc;
    }
}
void cProdutos::bolha(produto prod[], int n){
    int i, j;
    produto temp;
    bool troca;
    troca = true;
    
    for (i= n-1; (i >= 1) && (troca == true); i--){
        troca = false;
        for (j= 0; j < i; j++){
            if (prod[j].cod > prod[j+1].cod){
                temp = prod[j];
                prod[j] = prod[j+1];
                prod[j+1] = temp;
                troca = true;
            }
        }
    }
}
int cProdutos::consulta(produto prod[],int chave, int n){
    int inf, sup, meio;
    inf = 0;
    sup = n-1;
    
    while (inf<=sup){
        meio = (inf+sup)/2;
        if (chave == prod[meio].cod)
            return meio;
        else if (chave < prod[meio].cod)
            sup = meio - 1;
        else
            inf = meio + 1;
    }
    return -1;
}
void cProdutos::printList(produto prod[], int n){
    cout << "------ PRODUTOS ------" << endl;
    cout << "Código ------- Nome" << endl;
    
    for(int i=0; i<n; i++){
        cout << prod[i].cod << " ------ " << prod[i].nome << endl;
    }
}
void cProdutos::printDados(produto prod[], int n){
    cout << endl << endl;
    cout << "------ PRODUTO LOCALIZADO ------" << endl;
    cout << "Código ------ Nome ------ Preço" << endl;
    cout << setprecision(2) << fixed;
    cout << prod[n].cod << " ------ " << prod[n].nome << " ------ R$ " << prod[n].preco << endl;
}