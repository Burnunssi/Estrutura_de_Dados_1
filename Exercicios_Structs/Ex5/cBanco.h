/*
  Ao iniciar o programa vamos criar contas bancárias para três clientes.
• Cada conta terá o nome e o CPF do cliente associado a ela.
• No ato da criação da conta o cliente precisará fazer um depósito inicial.
• Após as contas serem criadas, o sistema deverá possibilitar realizações de saques ou depósitos nas contas.
• Sempre que uma operação de saque ou depósito seja realizada, o sistema deverá imprimir o nome do titular e o
saldo final da conta
 */

#ifndef CBANCO_H
#define CBANCO_H
#include <string>

using namespace std;

struct conta{
    string nome;
    float saldo;
    long int cpf;
};

class cBanco {
public:
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    
    void cadCliente();
    void operacaoConta(conta cliente[], int n);
    void printDados(conta cliente[], int n);
    void bolha(conta cliente[], int n);
    void saque(conta cliente[], int x);
    void deposito(conta cliente[], int x);
    int consulta(conta cliente[], long int chave, int n);
    
private:
};
#endif /* CBANCO_H */