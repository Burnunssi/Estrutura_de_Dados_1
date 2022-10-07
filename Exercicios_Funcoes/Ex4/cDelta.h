#ifndef CDELTA_H
#define CDELTA_H
#include <cstring>

using namespace std;

class cDelta {
public:
    cDelta();
    cDelta(const cDelta& orig);
    virtual ~cDelta();
    
    void lerDados();
    float calculo(float a, float b, float c);
private:
};

#endif /* CDELTA_H */

