#ifndef CLANCHES_H
#define CLANCHES_H

class cLanches {
public:
    cLanches();
    cLanches(const cLanches& orig);
    virtual ~cLanches();
    
    void cardapio();
    void lerDados();
    double calcPreco(int opc, int quant);
private:
};
#endif /* CLANCHES_H */

