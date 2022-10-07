#ifndef CVERIFICA_H
#define CVERIFICA_H
#include <iostream>

using namespace std;

class cVerifica {
public:
    cVerifica();
    cVerifica(const cVerifica& orig);
    virtual ~cVerifica();
    
    void lerDados();
    int verifDados(int n);
private:

};
#endif /* CVERIFICA_H */

