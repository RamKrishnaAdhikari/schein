#ifndef VERSICHERER_H
#define VERSICHERER_H
#include"vschien.h"
#include<vector>

class Versicherer
{
public:
    Versicherer();
    ~Versicherer();
    void dialog();
    std::vector<Vschien*> vschiens;
    bool nummerprüfen( int n);


};

#endif // VERSICHERER_H
