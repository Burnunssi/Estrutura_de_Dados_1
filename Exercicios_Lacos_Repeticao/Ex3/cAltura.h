#ifndef CALTURA_H
#define CALTURA_H

class cAltura {
public:
    cAltura();
    cAltura(const cAltura& orig);
    virtual ~cAltura();
    
    void lerDados();
    float verifMaior(float h, float maior);
    float verifMenor(float h, float menor);
private:
};
#endif /* CALTURA_H */

