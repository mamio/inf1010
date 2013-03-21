/************************************************************************************
 * Fichier                  : individu.cpp
 * Auteur                   : Raphaël Beamonte
 * Description              : Implementation de la classe Individu
 * Date de creation         : Janvier 2013
 * Date de modification     : 20 fevrier 2013
 ************************************************************************************/

#include "individu.h"
#include <sstream>
#include <iostream>

using namespace std;

/**
 * CONSTRUCTEUR PAR DEFAUT
 */
Individu::Individu(): prixEntree(5), nbVinsPreferes_(0),
				listeVinsPreferes_(0), nom_("Name"), prenom_("No")
{}

/**
 * CONSTRUCTEUR PAR PARAMETRES
 */
Individu::Individu(string nom, string prenom): prixEntree(5),
				nbVinsPreferes_(0), listeVinsPreferes_(0),
				nom_(nom), prenom_(prenom)
{}

/**
 * CONSTRUCTEUR PAR COPIE
 */
Individu::Individu(Individu const& individu):
				prixEntree(individu.prixEntree),
				nbVinsPreferes_(individu.nbVinsPreferes_),
				nom_(individu.nom_), prenom_(individu.prenom_) 
{
	unsigned int i;

	listeVinsPreferes_ = new string[nbVinsPreferes_];
	for (i = 0; i < nbVinsPreferes_; i++) 
	{
		listeVinsPreferes_[i] = individu.listeVinsPreferes_[i];
	}
}

/**
 * DESTRUCTEUR
 */
Individu::~Individu() 
{
	// On libere la memoire occupee par le tableau listant les vins
	if (listeVinsPreferes_) 
	{
		delete [] listeVinsPreferes_;
		listeVinsPreferes_ = 0;
	}
}

/**
 * METHODES GET
 */
string Individu::getNom() const 
{
	return nom_;
}

string Individu::getPrenom() const 
{
	return prenom_;
}

unsigned int Individu::getNbVinsPreferes() const 
{
	return nbVinsPreferes_;
}

string Individu::getVinPrefere(unsigned int i) const 
{
	if (i < nbVinsPreferes_) 
	{
		return listeVinsPreferes_[i];
	} 
	else 
	{
		cerr << "Erreur: l'entree que vous voulez recuperer n'existe pas" << endl;
		return "";
	}
}

double Individu::getPrix() const 
{
	return prixEntree;
}

/**
 * METHODES SET
 */
void Individu::setNom(string nom) 
{
	nom_ = nom;
}

void Individu::setPrenom(string prenom) 
{
	prenom_ = prenom;
}

/**
 * METHODES ADD
 */
void Individu::addVinPrefere(string vinPrefere) 
{
	unsigned int i;

	// On verifie que le vin n'existe pas deje
	for (i = 0; i < nbVinsPreferes_; i++) 
	{
		if (vinPrefere == listeVinsPreferes_[i]) 
		{
			cerr << "Erreur: le vin '" << vinPrefere << "' existe deje" << endl;
			return;
		}
	}

	// On agrandit le tableau
	string * temp = new string[nbVinsPreferes_+1];
	// On copie le contenu de notre ancien tableau dedans
	for (i = 0; i < nbVinsPreferes_; i++) 
	{
		temp[i] = listeVinsPreferes_[i];
	}
	// On ajoute notre nouveau vin e la fin
	temp[nbVinsPreferes_] = vinPrefere;
	// On incremente le nombre de vins que le tableau contient
	nbVinsPreferes_++;
	// On libere l'espace memoire occupe par l'ancien tableau
	if (listeVinsPreferes_)
		delete [] listeVinsPreferes_;
	// On deplace les pointeurs
	listeVinsPreferes_ = temp;
	temp = 0;
}

/**
 * METHODES DEL
 */
void Individu::delVinPrefere(string vinPrefere) 
{
	unsigned int i;

	// On cherche l'element
	for (i = 0; i < nbVinsPreferes_; i++) 
	{
		if (vinPrefere == listeVinsPreferes_[i]) 
		{
			// L'element a ete trouve
			unsigned int j, k = 0;
			
			// On cree un tableau d'une case plus petit
			string * temp = new string[nbVinsPreferes_-1];
			// Que l'on remplit avec le contenu _excepte_ l'element
			for (j = 0; j < nbVinsPreferes_; j++) 
			{
				if (vinPrefere != listeVinsPreferes_[j]) 
				{
					temp[j-k] = listeVinsPreferes_[j];
				} 
				else 
				{
					k++;
				}
			}
			// On decremente le nombre de vins
			nbVinsPreferes_--;
			// On libere l'espace memoire occupe par l'ancien tableau
			if (listeVinsPreferes_)
				delete [] listeVinsPreferes_;
			// On deplace les pointeurs
			listeVinsPreferes_ = temp;
			temp = 0;

			// On quitte l'execution de cette methode
			return;
		}
	}

	// On n'a pas trouve l'element
	cerr << "Erreur: le vin '" << vinPrefere << "' n'existe pas" << endl;
}

/**
 * METHODES DE COMPARAISON
 */
bool Individu::operator==(Individu const& individu) 
{
    return (!this->getNom().compare(individu.getNom())
		&& !this->getPrenom().compare(individu.getPrenom()));
}

/**
 * OPERATEUR D'AFFECTATION
 */
Individu& Individu::operator=(Individu const& individu) 
{
	if (this != &individu) 
	{
		unsigned int i;

		prixEntree = individu.prixEntree;
		nbVinsPreferes_ = individu.nbVinsPreferes_;
		nom_ = individu.nom_;
		prenom_ = individu.prenom_;

		listeVinsPreferes_ = new string[nbVinsPreferes_];
		for (i = 0; i < nbVinsPreferes_; i++) 
		{
			listeVinsPreferes_[i] = individu.listeVinsPreferes_[i];
		}
	}
	return *this;
}

/**
 * METHODE D'AFFICHAGE
 */
string Individu::getString() const 
{
	stringstream afficher;

	afficher << "Individu: ";
	afficher << getPrenom() << " " << getNom();
	afficher << " - Prix: " << getPrix() << " CAD";

	if (getNbVinsPreferes() > 0) 
	{
		afficher << " - Vins: ";

		unsigned int i;
		for (i = 0; i < getNbVinsPreferes(); i++) 
		{
			if (i > 0)
				afficher << ", ";
			afficher << getVinPrefere(i);
		}
	}

	return afficher.str();
}