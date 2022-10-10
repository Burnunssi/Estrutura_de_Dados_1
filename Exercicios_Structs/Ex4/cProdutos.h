/*Escrever um programa que cadastre vários produtos. Em seguida, imprima uma lista com o
código e nome da cada produto. Por último, consulte o preço de um produto através de seu código.*/

#ifndef CPRODUTOS_H
#define CPRODUTOS_H
#include <string>

using namespace std;

struct produto{
    string nome;
    int cod;
    float preco;
};

class cProdutos {
public:
    cProdutos();
    cProdutos(const cProdutos& orig);
    virtual ~cProdutos();
    
    void cadProdutos();
    void bolha(produto prod[], int n);
    int consulta(produto prod[], int chave, int n);
    void printDados(produto prod[], int n);
    void printList(produto prod[], int n);
private:
};

#endif /* CPRODUTOS_H */