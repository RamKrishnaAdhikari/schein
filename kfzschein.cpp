#include "kfzschein.h"
#include<iostream>
#include<iomanip>

kfzschein::kfzschein() {}
kfzschein::~kfzschein(){
    std:: cout<<"destructed"<<std::endl;
}
kfzschein:: kfzschein(int snummer,std::string vName,std::string nName,std::string kfzKennzeichen,int vBeginn):
    Vschien(snummer,vName,nName),kfzKennzeichen(kfzKennzeichen),vBeginn(vBeginn),schadenfreijahre(2024-vBeginn){
    if(schadenfreijahre<0) {
        schadenfreijahre=0;
    }
    setmonatsbeitrag(beitragberechnen());

 }
void kfzschein::anzeigen(){
    Vschien::anzeigen();
    std:: cout<<"KFZ-Versicherung "<<kfzKennzeichen<<"seit"<<vBeginn<<"mit der SF-klase SF"<<schadenfreijahre
              << "und monatsbeitrag von"<<std::fixed<<std::setprecision(2)<<getmonatsbeitrag()<<"euro"<<std::endl;
}
double kfzschein::beitragberechnen(){
    double pauschaltarif= 68.74;
    double beitrag;
    if(schadenfreijahre==0){
        beitrag= pauschaltarif* 1.5;
    }
    else if(schadenfreijahre==1){
        beitrag=pauschaltarif;
    }
   else  if(schadenfreijahre==2){
        beitrag=pauschaltarif*0.85;
    }
    else if(schadenfreijahre==3){
        beitrag=pauschaltarif*0.7;
    }
   else  if(schadenfreijahre==4){
        beitrag=pauschaltarif*0.55;    }
    else {
        beitrag=pauschaltarif*(50/100.0);
    }
    return beitrag;
}
