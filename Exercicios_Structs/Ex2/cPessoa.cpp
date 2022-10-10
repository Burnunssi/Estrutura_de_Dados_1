#include "cPessoa.h"
#include <iostream>
#include <cmath>

using namespace std;

cPessoa::cPessoa() {}
cPessoa::cPessoa(const cPessoa& orig) {}
cPessoa::~cPessoa() {}

void cPessoa::cadPessoas(){
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

    x = this->pesquisa(vetPessoa, pesq, n);
    
    if(x == -1)
        cout << "CPF não encontrado!" << endl;
    else
        vetPessoa[x].imc = vetPessoa[x].peso / pow(vetPessoa[x].altura, 2);
        this->printDados(vetPessoa, x);
}

int cPessoa::pesquisa(pessoa vetPessoa[], long int chave, int n){
    for(int i=0; i<n; i++){
        if(vetPessoa[i].cpf == chave)
            return i;
    }
    return -1;
}
void cPessoa::printDados(pessoa vetPessoa[], int n){
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