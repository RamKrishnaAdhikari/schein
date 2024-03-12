#ifndef KFZSCHEIN_H
#define KFZSCHEIN_H
#include"string"
#include"vschien.h"


class kfzschein:public Vschien
{
public:
    kfzschein();
    kfzschein(int snummer,std::string vName,std::string nName,std::string kfzKennzeichen,int vBeginn);
    ~kfzschein();
    void anzeigen()override;
    double beitragberechnen();
    void anpassen()override;
private:
    std::string kfzKennzeichen;
    int vBeginn;
    int schadenfreijahre;
};

#endif // KFZSCHEIN_H
