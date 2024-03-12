#include "vschien.h"
#include<iostream>

Vschien::Vschien() {}
Vschien:: ~Vschien(){
    std::cout<<"Successfully destructed"<<std::endl;
}
Vschien::Vschien(int scheinnummer,std::string vorname,std::string nachname):scheinnummer(scheinnummer),
    vorname(vorname),nachname(nachname){

}
int Vschien::getscheinnummer()const{
    return scheinnummer;
}
std::string  Vschien::getvorname()const{
    return vorname;
}
std:: string Vschien::getnachname()const{
    return nachname;
}
void Vschien:: anzeigen(){
    std::cout<<"Versicherungsnummer"<<scheinnummer<<"für"<<vorname<<nachname<<std::endl;
}
double Vschien::getmonatsbeitrag()const{
    return monatsbeitrag;
}
void Vschien::setmonatsbeitrag(int m){
    monatsbeitrag=m;
}
