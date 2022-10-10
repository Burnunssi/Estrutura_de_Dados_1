/*- Escrever um programa que cadastre o nome, a matrícula e duas notas de vários alunos.
Em seguida imprima a matrícula, o nome e a média de cada um deles.*/

#ifndef CALUNOS_H
#define CALUNOS_H
#include <string>

using namespace std;

struct alunos{
    string nome, matricula;
    float nota1, nota2, media;
};

class cAlunos {
public:
    cAlunos();
    cAlunos(const cAlunos& orig);
    virtual ~cAlunos();
    
    void cadAlunos();
    void calcMedia(alunos vetAlunos[], int n);
    void printDados(alunos vetALunos[], int n);
    
private:
};
#endif /* CALUNOS_H */

