/****************************************************************************
 * Fichier: Skieur.cpp
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Implementation de la classe Skieur
 ****************************************************************************/

#include "Skieur.h"


/****************************************************************************
 * Fonction:	Skieur::Skieur
 * Description: Constructeur par défaut et parametre
 * Paramètres:	- (unsigned int ) no : numero de dossard
 *				- (int) altitude : altitude de depart (IN)
 * Retour:		aucun
 ****************************************************************************/
Skieur::Skieur(unsigned int no, int altitude)
	: no_(no), altitude_(altitude)
{
	cout << "Le numero " << no_ << " entre dans la competition a l'altitude : " 
		 << altitude_ << endl;

	temps_ = 0;
}

/****************************************************************************
 * Fonction:	Skieur::~Skieur
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Skieur::~Skieur()
{
	cout << "Le numero " << no_ << " sort de la competition" << endl;
}



int Skieur::getAltitude() const
{
	return altitude_;
}

unsigned int Skieur::getNumero() const
{
	return no_;
}


/****************************************************************************
 * Fonction:	Skieur::remonter
 * Description: Remet le skieur au haut de la pente
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Skieur::remonter()
{
	altitude_ = 500;
}


/****************************************************************************
 * Fonction:	Skieur::skier
 * Description: Fait descendre le skieur a la vitesse de skier
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Skieur& Skieur::skier()
{
	cout << "Il skie a pleine vitesse" << endl;
	altitude_ -= 50;

	courseEstTermine();

	temps_ +=10;

	return *this;
}


/****************************************************************************
 * Fonction:	Skieur::debouler
 * Description: Fait descendre le skier a la vitesse de debouler
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Skieur& Skieur::debouler()
{
	cout << "Il deboule a pleine vitesse" << endl;
	altitude_ -= 20;

	courseEstTermine();

	temps_ +=10;

	return *this;
}


/****************************************************************************
 * Fonction:	Skieur::operator==
 * Description: Compare deux skieurs
 * Paramètres:	- (Skieur) skieur : skieur a comparer
 * Retour:		(bool) s'il sont a la meme altitude
 ****************************************************************************/
bool Skieur::operator== (const Skieur &skieur) const
{
	return ( altitude_ == skieur.altitude_);
}


/****************************************************************************
 * Fonction:	Skieur::courseEstTermine
 * Description: Methode privee qui verifie si le skieur a terminer sa course
 * Paramètres:	aucun
 * Retour:		(bool) s'il a termine
 ****************************************************************************/
bool Skieur::courseEstTermine()
{
	if(altitude_ <= 0)
	{
		altitude_ = 0;
		cout << "Felicitation, le skieur a termine sa course en " 
			 << temps_ << " secondes" << endl;
		return true;
	}

	return false;
}