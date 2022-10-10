#include "cBanco.h"
#include <iostream>
#include <string>

using namespace std;

cBanco::cBanco() {}
cBanco::cBanco(const cBanco& orig) {}
cBanco::~cBanco() {}

void cBanco::cadCliente(){
    int n=3;
    conta cliente[n];
    
    for(int i=0; i<n; i++){
        cout << "--------- BANCO NOVO REAL ---------" << endl << endl
             << "-------- Criação de conta ---------" << endl;
        cout << "Informe o nome: ";
        cin >> cliente[i].nome;
        cout << "Informe o CPF: ";
        cin >> cliente[i].cpf;
        
        cout << "Para completar a criação da conta você deve realizar um depósito." << endl 
             << "Digite o valor a ser depositado: R$ ";
        cin >> cliente[i].saldo;
        
        cout << "----------- CONTA CRIADA ----------" << endl 
             << "Saldo: R$ " << cliente[i].saldo << endl << endl;
    }
    this->bolha(cliente, n);
    this->operacaoConta(cliente, n);
}

void cBanco::operacaoConta(conta cliente[], int n){
    int opc=1;
    long int pesq=0;
    int x=0;
    
    while(opc != 0){
        cout << "-------- OPERAÇÕES NA CONTA --------" << endl
             << "Digite o CPF do titular da conta: ";
        cin >> pesq;
        
        x = this->consulta(cliente, pesq, n);
        
        if(x == -1)
            cout << "Conta inexistente!" << endl;
        else{
            cout << "Olá, " << cliente[x].nome << endl;
            cout << "1 - Saque \n2 - Deposito \n0 - Sair" << endl
                 << "Digite a operação desejada: ";
            cin >> opc;
            
            switch(opc){
                case 1:
                    this->saque(cliente, x);
                    break;
                case 2:
                    this->deposito(cliente, x);
                    break;
                case 0:
                    cout << "Saindo..." << endl;  
                    break;
                default:
                    cout << "Opção Inválida!" << endl;
            }
        }
        cout << endl << "Deseja fazer outra operação: \n1 - Sim \n0 - Não \nDigite aqui: ";
        cin >> opc;
    }
}

void cBanco::bolha(conta cliente[], int n){
    int i, j;
    conta temp;
    bool troca;
    troca = true;
    
    for(i= n-1; (i>=1) && (troca==true); i--){
        troca = false;
        for(j=0; j<i; j++){
            if (cliente[j].cpf > cliente[j+1].cpf){
                temp = cliente[j];
                cliente[j] = cliente[j+1];
                cliente[j+1] = temp;
                troca = true;
            }
        }
    }
}

int cBanco::consulta(conta cliente[],long int chave, int n){
    int inf, sup, meio;
    inf = 0;
    sup = n-1;
    
    while (inf<=sup){
        meio = (inf+sup)/2;
        if (chave == cliente[meio].cpf)
            return meio;
        else if (chave < cliente[meio].cpf)
            sup = meio - 1;
        else
            inf = meio + 1;
    }
    return -1;
}

void cBanco::printDados(conta cliente[], int n){
    cout << "------ OPERAÇÃO REALIZADA ------" << endl;
    cout << "Nome: " << cliente[n].nome << endl;
    cout << "Saldo: R$ " << cliente[n].saldo << endl << endl;
}

void cBanco::saque(conta cliente[], int x){
    float saq = 0;
    cout << "-------- OPERAÇÃO DE SAQUE --------" << endl
         << "Saldo: R$ " << cliente[x].saldo << endl;
    cout << "Informe o valor do saque: R$ ";
    cin >> saq;
    cliente[x].saldo = cliente[x].saldo - saq;
    this->printDados(cliente, x);
}

void cBanco::deposito(conta cliente[],int x){
    float dep = 0;
    cout << "-------- OPERAÇÃO DE DEPÓSITO --------" << endl
         << "Saldo: R$ " << cliente[x].saldo << endl;
    cout << "Informe o valor do depósito: R$ ";
    cin >> dep;
    cliente[x].saldo = cliente[x].saldo + dep;
    this->printDados(cliente, x);
}