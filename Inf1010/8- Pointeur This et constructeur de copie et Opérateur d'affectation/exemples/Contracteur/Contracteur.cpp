/****************************************************************************
 * Fichier: Contracteur.cpp
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Implementation de la classe Contracteur
 ****************************************************************************/

#include "Contracteur.h"


/****************************************************************************
 * Fonction:	Contracteur::Contracteur
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Contracteur::Contracteur()
	: immeubles_()
{
	cout << "Un contracteur commence sur le marche avec aucun immeuble." << endl;
}

/****************************************************************************
 * Fonction:	Contracteur::Contracteur
 * Description: Constructeur par copie
 * Paramètres:	- (Contracteur) contracteur : celui a copier (IN)
 * Retour:		aucun
 ****************************************************************************/
Contracteur::Contracteur(const Contracteur &contracteur)
{
	cout << "Un contracteur commence sur le marche en copiant les immeubles d'un autre." << endl;
	for(unsigned int i = 0; i< contracteur.immeubles_.size(); i++)
		immeubles_.push_back( new Immeuble( *contracteur.immeubles_[i] ) ); // constructeur par copie d'immeuble	

	// Dans ce cas ci, nous devons faire une copie profonde pour ne pas que
	// plusieurs contracteurs possedent la meme maison. 
	// A cet effet, nous utilisons le constructeur par copie de l'Immeuble.
}


/****************************************************************************
 * Fonction:	Contracteur::~Contracteur
 * Description: Destructeur, on libere la memoire associee aux immeubles
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Contracteur::~Contracteur()
{
	cout << "Un contracteur quitte le marche et detruit ses immeubles qu'il n'a pu vendre." << endl;
	for(unsigned int i = 0; i< immeubles_.size(); i++)
		delete immeubles_[i];
	cout << endl;
	immeubles_.clear();
	
}

/****************************************************************************
 * Fonction:	Contracteur::getNbImmeuble
 * Description: Indique combien d'immeubles possede le contracteur
 * Paramètres:	aucun
 * Retour:		(unsigned int) nombre d'immeubles
 ****************************************************************************/
unsigned int Contracteur::getNbImmeuble() const
{
	return immeubles_.size();
}


/****************************************************************************
 * Fonction:	Contracteur::constuireImmeuble
 * Description: Ajoute un immeuble parmis ceux detenus
 * Paramètres:	- (Immeuble*) immeuble : le nouvel immeuble (IN)
 * Retour:		aucun
 ****************************************************************************/
void Contracteur::constuireImmeuble(Immeuble *immeuble)
{
	bool dejaProprietaire = false;

	for(unsigned int i = 0; i< immeubles_.size(); i++)
		if ( *immeubles_[i] == *immeuble )
		{
			dejaProprietaire = true;
			break;
		}

	if ( !dejaProprietaire )
	{
		immeubles_.push_back( immeuble );
	}
}


/****************************************************************************
 * Fonction:	Contracteur::operator=
 * Description: Assigne tout le lot d'immeuble detenu par un autre contracteur
 * Paramètres:	- (Contracteur) contracteur :  celui a copier (IN)
 * Retour:		(Contracteur) ce contracteur une fois modifie
 ****************************************************************************/
Contracteur& Contracteur::operator= (const Contracteur &contracteur)
{
	if( this != &contracteur) // Pour ne pas l'assigner à lui-meme
	{
		cout << "Assignation des immeubles d'un autre." << endl;

		// On doit liberer la memoire prise par les anciens immeubles
		// Pour eviter les fuites de memoire
		for(unsigned int i = 0; i< immeubles_.size(); i++)
			delete immeubles_[i];
		immeubles_.clear();

		for(unsigned int i = 0; i< contracteur.immeubles_.size(); i++)
			immeubles_.push_back( new Immeuble( *contracteur.immeubles_[i] ) ); // constructeur par copie d'immeuble

	}

	return *this; // Pour l'appel en cascade
}


/****************************************************************************
 * Fonction:	Contracteur::operator==
 * Description: Compare deux contracteur en eux
 * Paramètres:	- (Contracteur) contracteur :  celui a comparer (IN)
 * Retour:		(bool) si oui ou non ils sont pareil
 ****************************************************************************/
bool Contracteur::operator== (const Contracteur &contracteur) const
{
	if( this != &contracteur)
	{
		bool estEgal = true;

		if( immeubles_.size() == contracteur.immeubles_.size() )
		{
			for(unsigned int i = 0; i< immeubles_.size(); i++)
				estEgal &= immeubles_[i] == contracteur.immeubles_[i];
			return estEgal;
		}
		else
			return false;
	}
	else
		return true;
}

