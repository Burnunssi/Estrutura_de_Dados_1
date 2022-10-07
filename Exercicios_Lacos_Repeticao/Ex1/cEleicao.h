#ifndef CELEICAO_H
#define CELEICAO_H

class cEleicao {
public:
    cEleicao();
    cEleicao(const cEleicao& orig);
    virtual ~cEleicao();
    
    void lerVotos();
    void print(int c1, int c2, int c3, int c4, int n, int b, int total);
private:
};
#endif /* CELEICAO_H */

