#include "versicherer.h"
#include<iostream>
#include"kfzschein.h"
#include"lvschein.h"
using namespace std;

Versicherer::Versicherer() {}
Versicherer::~Versicherer(){
    for(const auto& v : vschiens){
        delete v;
    }
    cout<<"Bis bald"<<endl;
}
bool Versicherer::nummerprüfen(int n){
    for(const auto& v: vschiens){
        if(v->getscheinnummer()== n){
            return false;


        }
    }
    return true;

}
void Versicherer::dialog(){
    std:: cout<<"Press 1 for anlegen of versicherung"<<std::endl;
    std:: cout<<"Press 2 for versicherungsdetails ausgeben"<<std::endl;
    std::cout<<"Press 3 for alle Versicherung zeigen "<<std::endl;
    std::cout<<"press 4 zum löschen "<<std::endl;
    std::cout<<"press 5 for versicherung anpassen"<<std::endl;
    std:: cout<<"press 0 zum Beenden"<<std::endl;
    int choice;
    do{
        std::  cout<<"Geben sie choice "<<std::endl;
        cin>>choice;
        switch(choice){
        case 1 : {
            cout<<"scheinnummer? "<<endl;
            int scheinnummer;
            cin>>scheinnummer;
            if(!nummerprüfen(scheinnummer)){
                cout<<"Nummer existiert schon "<<endl;
                break;

        }

            cout<<"vorname?"<<endl;
            std::string vorname;
            cin>>vorname;
            cout<<"Nachname?"<<endl;
            std::string nachname;
            cin>>nachname;

            cout<<" press k or l ";

             char p;
            cin>>p;
             if(p=='K'){
                std:: string kfzKennzeichen;

                cout<<"kfzKennzeichen?"<<endl;
                std:: cin.ignore(10, '\n');
                 std::getline(std::cin,kfzKennzeichen);
                 int vBeginn;
                 cout<<"Versicherung Beginn in ?"<<endl;
                 cin>>vBeginn;
                vschiens.push_back(new kfzschein(scheinnummer,vorname,nachname,kfzKennzeichen,vBeginn));
                 cout<<"KFZ versicheung wurde angelegt"<<endl;
            }
             else if(p=='L'){

                 double vSumme;
                cout<<"Versicheungssumme?"<<endl;
                 cin>>vSumme;
                  int vBeginn;
                 cout<<"Versicherungs Beginn in ?"<<endl;
                  cin>>vBeginn;
                 int laufzeit;
                 cout<<"Laufzeiit in Jahren?"<<endl;
                 cin>>laufzeit;

                 vschiens.push_back(new LVschein(scheinnummer,vorname,nachname,vSumme,vBeginn,laufzeit));
                 cout<<"Lebensversicherung wurde angelegt"<<endl;
             }
            else{
                cout<<"ungültige eingabe"<<endl;
            }
             break;
            }
        case 2 :{
            int scheinnummer;
            std:: cout<<"Scheinnummer?" <<endl;
            cin>>scheinnummer;
            for( auto& v : vschiens ){
                if(v->getscheinnummer()==scheinnummer){
                    v->anzeigen();
                    break;
                }


            }
            cout<<"Keine solche scheinnummer existiert"<<endl;
            break;
        }
        case 3 : {
            for(const auto& v : vschiens){
                v->anzeigen();
                cout<<"----------------------"<<endl;
            }
            break;

        }
        case 4 : {

            cout<<"Geben Sie die nummer ein "<<endl;
            int scheinnummer;
            cin>>scheinnummer;
            bool found =false;
            for( int i = 0; i<vschiens.size();i++){
                if(vschiens.at(i)->getscheinnummer()==scheinnummer){
                    delete vschiens.at(0);
                    vschiens.erase(vschiens.begin()+i);
                    found=true;
                    break;
                }

            }
            if(!found){
                cout<<"Keine solche vschein gefunden"<<endl;
            }

            break;
        }
        case 5 : cout<<" Geben Sie die scheinnummer"<<endl;
            int scheinnummer;
            cin>>scheinnummer ;


        case 0 : cout<<"Das Programm wird beendet"<<endl;
            break;
        default: cout<<"Ungültige Eingabe"<<endl;





        }


    }
    while(choice!=0);
}

