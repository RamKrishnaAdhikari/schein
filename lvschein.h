#ifndef LVSCHEIN_H
#define LVSCHEIN_H
#include"vschien.h"

class LVschein :public Vschien
{
public:
    LVschein();
    ~LVschein();
    LVschein(int snummer,std::string vName,std::string nName, double vSumme, int vBeginn,int laufzeit);
    void anzeigen()override;
    double beitragberechnen();
    void anpassen()override;
private:
    double vSumme;
    int vBeginn;
    int laufzeit;

};

#endif // LVSCHEIN_H
