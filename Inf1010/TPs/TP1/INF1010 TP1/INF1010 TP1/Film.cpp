#include <iostream>
#include <string>
#include"Film.h"
#include"Date.h"

using namespace std;

    Film::Film(unsigned int id, string titre, string description, double duree, unsigned int j, unsigned int m , unsigned int a)
    {
   	 uniqueId_ = id;
   	 titre_ = titre;
   	 description_ = description;
   	 duree_ = duree;
   	 acquisition_.setJ(j);
   	 acquisition_.setM(m);
   	 acquisition_.setA(a);
    }

    Film::Film()
    {
   	 uniqueId_ = 0;
   	 titre_ = "";
   	 description_ = "";
   	 duree_ = 0;
   	 acquisition_ = Date();
    }

Film::~Film()
    {
    
    }
    void Film::setId(unsigned int id)
    {
   	 uniqueId_ = id;
    }
    void Film::setTitre(string titre)
    {
   	 titre_ = titre;
    }
    void Film::setDescription(string description)
    {
   	 description_ = description;
    }
    void Film::setDuree(double duree)
    {
   	 duree_ = duree;
    }
    void Film::setDate(Date& date)
    {
   	 acquisition_.setJ(date.getJ());
	 acquisition_.setM(date.getM());
   	 acquisition_.setA(date.getA());
    }
    unsigned int Film::getId() const
    {
   	 return uniqueId_;
    }
    string Film::getTitre() const
    {
   	 return titre_;
    }
    string Film::getDescription() const
    {
   	 return description_;
    }
    double Film::getDuree() const
    {
   	 return duree_;
    }
    Date Film::getDate() const
    {
   	 return acquisition_;
    }

    void Film::afficheInfo() const
    {
   	 cout << "Informations du film" << endl
		<< " Numero d'identification : " << getId()<< endl
   		<< " Titre :  " << getTitre() << endl
   		<< " Description du film : " << getDescription() << endl
   		<< " Duree du film : " << getDuree() << endl
   		<< " Date d'acquisition du film : "; 
	 acquisition_.afficheDate(); 
	 cout << endl << endl;
    }
