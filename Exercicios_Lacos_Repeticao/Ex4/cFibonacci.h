#ifndef CFIBONACCI_H
#define CFIBONACCI_H

class cFibonacci {
public:
    cFibonacci();
    cFibonacci(const cFibonacci& orig);
    virtual ~cFibonacci();
    
    void serie(int ult, int penult, int n);
    void print();
private:

};

#endif /* CFIBONACCI_H */

