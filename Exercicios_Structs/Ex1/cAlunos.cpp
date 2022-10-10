#include "cAlunos.h"
#include <iostream>

using namespace std;

cAlunos::cAlunos() {}
cAlunos::cAlunos(const cAlunos& orig) {}
cAlunos::~cAlunos() {}

void cAlunos::cadAlunos(){
    int n=0;
 
    cout << "Informe a quantidade de alunos a serem cadastrados: ";
    cin >> n;
    alunos vetAlunos[n];
    
    cout << "------ Iniciando cadastro de " << n << "alunos ------" << endl << endl;
    
    for(int i=0; i<n; i++){
        cout << "------ Aluno " << i+1 << " ------" << endl;
        cout << "Informe o nome: ";
        cin.ignore();
        cin >> vetAlunos[i].nome;
        cout << "Informe a matrícula: ";
        cin >> vetAlunos[i].matricula;
        cout << "Informe a nota 1: ";
        cin.ignore();
        cin >> vetAlunos[i].nota1;
        cout << "Informe a nota 2: ";
        cin >> vetAlunos[i].nota2;
        cout << endl << endl;
    }
    this->calcMedia(vetAlunos, n);
    this->printDados(vetAlunos, n);
}

void cAlunos::calcMedia(alunos vetAlunos[], int n){
    for(int i=0; i<n; i++){
        vetAlunos[i].media = (vetAlunos[i].nota1 + vetAlunos[i].nota2) / 2;
    }
}

void cAlunos::printDados(alunos vetAlunos[], int n){
    cout << "------ Resultado ------" << endl << endl;
    
    for(int i=0; i<n; i++){
        cout << "------ Aluno " << i+1 << " ------" << endl;
        cout << "Nome: " << vetAlunos[i].nome << endl;
        cout << "Matrícula: " << vetAlunos[i].matricula << endl;
        cout << "Nota 1: " << vetAlunos[i].nota1 << endl;
        cout << "Nota 2: " << vetAlunos[i].nota2 << endl;
        cout << "Média das notas: " << vetAlunos[i].media << endl;
        cout << endl << endl;
    }
}