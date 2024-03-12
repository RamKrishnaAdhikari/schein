#ifndef VSCHIEN_H
#define VSCHIEN_H
#include<string>

class Vschien
{
public:
    Vschien();
   virtual ~Vschien();
    Vschien(int scheinnummer,std::string vorname,std::string nachname);
    virtual  void anzeigen()=0;
    int getscheinnummer()const ;
    std::string getvorname()const;
    std::string getnachname()const;
    double getmonatsbeitrag()const;
    void setmonatsbeitrag(int m);
    virtual void anpassen();
private:
    int scheinnummer;
    std::string vorname;
    std::string nachname;
    double monatsbeitrag;

};

#endif // VSCHIEN_H
