#include <string>
#include "Coffret.h"
#include "Date.h"
#include "Film.h"

Coffret::Coffret(unsigned int i, string t , unsigned int j, unsigned int m , unsigned int a)
	{
	identifiant_ = i;
	titre_ = t;
	date_.setJ(j);
	date_.setA(a);
	date_.setM(m);
	film_ = new Film[6];
	nbFilm_=0;
	}

Coffret::Coffret()
{
	identifiant_ = 0;
	titre_ = "";
	date_ = Date();
	film_ = new Film[6];
	nbFilm_=0;
}

Coffret::~Coffret()
{
}

void Coffret::setId(unsigned int i)
	{
		identifiant_ = i;
	}

void Coffret::setTitre(string t)
	{
		titre_ = t;
	}

void Coffret::setDate(Date& d)
	{
		date_.setJ(d.getJ());
		date_.setM(d.getM());
		date_.setA(d.getA());
	}

unsigned int Coffret::getId()const
{
	return identifiant_;
}

string Coffret::getTitre()const
{
	return titre_;
}

Date Coffret::getDate()const
{
	return date_;
}


void Coffret::afficheCoffret()const
{

	cout <<  "Informations du coffret" << endl
		<< "Numero d'identification : " << getId() << endl
   		<< " Titre :  " << getTitre() << endl
   		<< " Date d'acquisition du film : ";
	date_.afficheDate();
	cout << endl << endl;
	for(unsigned int k = 0; k < nbFilm_ ; k++){
		film_[k].afficheInfo();
	}
}




void Coffret::ajouterFilm(Film& f)
{
	if(nbFilm_ >= 6)
	{
		cout<<"Impossible d'ajouter le film au coffret, car le coffret est plein"<<endl;
		return;
	}
	for(unsigned int w = 0; w < nbFilm_+1 ;w++)
	{	
		if(f.getId() == film_[w].getId())
		{
			cout<<"Impossible d'ajouter le film au coffret, car le ID est deja utilise";
			return;
		}
		if(f.getTitre() == film_[w].getTitre())
		{
			cout<<"Impossible d'ajouter le film au coffret, car le Titre est deja utilise";
			return;
		}
	
	}

	film_[nbFilm_].setId(f.getId());
	film_[nbFilm_].setTitre(f.getTitre());
	film_[nbFilm_].setDescription(f.getDescription());
	film_[nbFilm_].setDuree(f.getDuree());
	film_[nbFilm_].setDate(f.getDate());
	nbFilm_++;
	}



