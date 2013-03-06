#include <string>

#include "Coffret.h"
#include "Date.h"
#include "Film.h"
#include "Videotheque.h"


Videotheque::Videotheque()
{
	Capacite_ = 1;
	coffret_ = new Coffret[Capacite_];
    nbCoffret_ = 0;
}

Videotheque::~Videotheque()
{
}

unsigned int Videotheque::getNbCoffret() const
{
	return nbCoffret_;
}

void Videotheque::ajouterCoffret(Coffret& c)
{
	if(nbCoffret_ < Capacite_) 
	{
   		 coffret_[nbCoffret_].setId(c.getId());
   		 coffret_[nbCoffret_].setTitre(c.getTitre());
   		 coffret_[nbCoffret_].setDate(c.getDate());
   		 nbCoffret_++;
   	}
	else
	{
		Coffret* temp = new Coffret[Capacite_];
   		for (unsigned int i = 0; i < Capacite_; i++)    
			temp[i] = coffret_[i];
   		delete []coffret_;
   		coffret_ = 0;
   		coffret_ = new Coffret[Capacite_*2];

   		for (unsigned int j = 0; j < Capacite_; j++)    
   			coffret_[j] = temp[j];
   		delete []temp;
   		temp = 0;

   		coffret_[nbCoffret_].setId(c.getId());
   		coffret_[nbCoffret_].setTitre(c.getTitre());
   		coffret_[nbCoffret_].setDate(c.getDate());
   		nbCoffret_++;
	}
}

void Videotheque::AfficherInfo()const

{
    for (unsigned int i = 0; i < nbCoffret_ ; i++)
		coffret_[i].afficheCoffret();
}
