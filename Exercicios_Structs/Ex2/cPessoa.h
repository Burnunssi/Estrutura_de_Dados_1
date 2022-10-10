/*2)- Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de algumas pessoas.
Localize uma pessoa por meio do seu CPF e imprimir o seu IMC.*/

#ifndef CPESSOA_H
#define CPESSOA_H
#include <string>

using namespace std;
struct pessoa{
    string nome, sexo;
    float altura, peso, imc;
    long int cpf;
};

class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    void cadPessoas();
    void calcImc(pessoa vetPessoa[], int n);
    void printDados(pessoa vetPessoa[],int n);
    int pesquisa(pessoa vetPessoa[],long int chave, int n);
private:
};

#endif /* CPESSOA_H */

