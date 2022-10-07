#ifndef CVOLUME_H
#define CVOLUME_H

using namespace std;

class cVolume {
public:
    cVolume();
    cVolume(const cVolume& orig);
    virtual ~cVolume();
    
    void lerDados();
    double calcVolume(double r);
private:

};
#endif /* CVOLUME_H */

