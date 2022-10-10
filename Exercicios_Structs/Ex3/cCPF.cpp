#include "cCPF.h"
#include <iostream>
#include <cmath>

using namespace std;

cCPF::cCPF() {}
cCPF::cCPF(const cCPF& orig) {}
cCPF::~cCPF() {}

void cCPF::cadPessoas(){
    int n = 0;
    long int pesq = 0;
    int x = 0;
    
    cout << "------ Cadastro de Pessoas ------" << endl << endl;
    cout << "Informe a quantidade de Pessoas a serem cadastrados: ";
    cin >> n;
    cout << endl;
    pessoa vetPessoa[n];
    
    for(int i=0; i<n; i++){
        cout << "Informe o nome: ";
        cin.ignore();
        cin >> vetPessoa[i].nome;
        cout << "Informe o CPF: ";
        cin >> vetPessoa[i].cpf;
        cout << "Informe o sexo: ";
        cin.ignore();
        cin >> vetPessoa[i].sexo;
        cout << "Informe o peso: ";
        cin >> vetPessoa[i].peso;
        cout << "Informe a altura: ";
        cin >> vetPessoa[i].altura;
        cout << endl << endl;
    }
    
    cout << "Informe o CPF que você deseja pesquisar: ";
    cin >> pesq;
    
    this->bolha(vetPessoa, n);
    x = this->pesquisa(vetPessoa, pesq, n);
    
    if(x == -1)
        cout << "CPF não encontrado!" << endl;
    else{
        vetPessoa[x].imc = vetPessoa[x].peso / pow(vetPessoa[x].altura, 2);
        this->printDados(vetPessoa, x);
    }
}
void cCPF::bolha(pessoa vetPessoa[], int n){
    int i, j;
    pessoa temp;
    bool troca;
    troca = true;
    
    for (i= n-1; (i >= 1) && (troca == true); i--){
        troca = false;
        for (j= 0; j < i; j++){
            if (vetPessoa[j].cpf > vetPessoa[j+1].cpf){
                temp = vetPessoa[j];
                vetPessoa[j] = vetPessoa[j+1];
                vetPessoa[j+1] = temp;
                troca = true;
            }
        }
    }
}
int cCPF::pesquisa(pessoa vetPessoa[], int chave, int n){
    int inf, sup, meio;
    inf = 0;
    sup = n-1;
    
    while (inf<=sup){
        meio = (inf+sup)/2;
        if (chave == vetPessoa[meio].cpf)
            return meio;
        else if (chave < vetPessoa[meio].cpf)
            sup = meio - 1;
        else
            inf = meio + 1;
    }
    return -1; /* não encontrado */
}
void cCPF::printDados(pessoa vetPessoa[], int n){
     cout << endl << "------ Resultado ------" << endl << endl;
    
        cout << "------ Pessoa " << n+1 << " ------" << endl;
        cout << "Nome: " << vetPessoa[n].nome << endl;
        cout << "CPF: " << vetPessoa[n].cpf << endl;
        cout << "Sexo: " << vetPessoa[n].sexo << endl;
        cout << "Peso: " << vetPessoa[n].peso << endl;
        cout << "Altura: " << vetPessoa[n].altura << endl;
        cout << "IMC: " << vetPessoa[n].imc << endl;
        cout << endl << endl;
}
