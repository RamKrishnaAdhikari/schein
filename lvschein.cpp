#include "lvschein.h"
#include<iostream>
#include<iomanip>

LVschein::LVschein() {}
LVschein::~LVschein(){
    std::cout<<"Successfully destructed"<<std::endl;
}
LVschein::LVschein(int snummer,std::string vName,std::string nName,double vSumme,int vBeginn,int laufzeit):Vschien(snummer,vName,nName),
    vBeginn(vBeginn),laufzeit(laufzeit)
{
    setmonatsbeitrag(beitragberechnen());
 }

void LVschein::anzeigen(){
    Vschien::anzeigen();

    std:: cout<<"Lebensversicherung über "<<vSumme<<"seit"<<vBeginn<<"mit laufzeit von "<<laufzeit<<"Jahren"<<"und monatsbeitrag von"<<std::fixed<<std::setprecision(2)<<getmonatsbeitrag()<<"euro"<<std::endl;
}
double LVschein::beitragberechnen(){
    return (3.52*vSumme)/100000;
}
