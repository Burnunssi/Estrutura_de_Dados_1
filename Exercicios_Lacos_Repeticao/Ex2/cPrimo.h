#ifndef CPRIMO_H
#define CPRIMO_H
#include <string>

using namespace std;

class cPrimo {
public:
    cPrimo();
    cPrimo(const cPrimo& orig);
    virtual ~cPrimo();
    
    void lerDados();
    bool verifNum(int n);
private:
};
#endif /* CPRIMO_H */

