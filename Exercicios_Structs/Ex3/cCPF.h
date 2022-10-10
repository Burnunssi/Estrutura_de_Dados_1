#ifndef CCPF_H
#define CCPF_H
#include <string>

using namespace std;

struct pessoa{
    string nome, sexo;
    float altura, peso, imc;
    long int cpf;
};
class cCPF {
public:
    cCPF();
    cCPF(const cCPF& orig);
    virtual ~cCPF();
    
    void cadPessoas();
    void calcImc(pessoa vetPessoa[], int n);
    void printDados(pessoa vetPessoa[], int n);
    void bolha(pessoa vetPessoa[], int n);
    int pesquisa(pessoa vetPessoa[], int chave, int n);
private:
};

#endif /* CCPF_H */

