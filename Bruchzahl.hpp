#ifndef _BRUCHZAHL_
#define _BRUCHZAHL_

#include <string>

class Bruchzahl {
public:
    Bruchzahl(int zaehler, int nenner);
    void addiere(Bruchzahl bruch);
    std::string alsString() const;
    
private:
    int zaehler = 0;
    int nenner = 1;
};

#endif
