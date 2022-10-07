#ifndef CTRIANGULO_H
#define CTRIANGULO_H
#include <string>

using namespace std;

class cTriangulo {
public:
    cTriangulo();
    cTriangulo(const cTriangulo& orig);
    virtual ~cTriangulo();
    
    void lerTriangulo();
    string verTriangulo(double x, double y, double z);
private:
};

#endif /* CTRIANGULO_H */

