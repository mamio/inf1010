/****************************************************************************
 * Fichier: Tableau.cpp
 * Auteur: William Bussiere
 * Date: 6 juin 2011
 * Description: Implementation de la classe Tableau
 ****************************************************************************/

#include "Tableau.h"

/****************************************************************************
 * Fonction:	Tableau::Tableau
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Tableau::Tableau()
{
	cout << "Construction d'un tableau" << endl;

	caracteres_ = "";
	salete_ = 0;
	saleteSeuil_ = 30;
}


/****************************************************************************
 * Fonction:	Tableau::~Tableau
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Tableau::~Tableau()
{
	cout << "Destruction d'un tableau" << endl;
}



string Tableau::getCaracteres() const
{
	return caracteres_;
}



int Tableau::getSalete() const
{
	return salete_;
}



int Tableau::getSaleteSeuil() const
{
	return saleteSeuil_;
}


/****************************************************************************
 * Fonction:	Tableau::ajouterCaracteres
 * Description: Ajoute des caracteres et n'efface pas ceux deja present
 * Paramètres:	- (string) caracteres : a ajouter (IN)
 * Retour:		aucun
 ****************************************************************************/
void Tableau::ajouterCaracteres(string caracteres)
{
	// L'operateur= ne garde pas les caracteres precendants
	// L'operateur+= effectue une concatenation
	caracteres_ += caracteres;
}



void Tableau::setSaleteSeuil(int seuil)
{
	saleteSeuil_ = seuil;
}


/****************************************************************************
 * Fonction:	Tableau::estSale
 * Description: Indique si le tableau doit etre lave
 * Paramètres:	- (string) caracteres : a ajouter (IN)
 * Retour:		(bool) si le tableau doit etre lave
 ****************************************************************************/
bool Tableau::estSale()
{
	return (salete_ >= saleteSeuil_);
}


/****************************************************************************
 * Fonction:	Tableau::effacer
 * Description: Efface les caracteres et salie le tableau
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Tableau::effacer()
{
	cout << "Tableau efface" << endl;

	salir( caracteres_.size() );
	caracteres_.clear();
}


/****************************************************************************
 * Fonction:	Tableau::laver
 * Description: Efface les caracteres et enleve la salete
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Tableau::laver()
{
	cout << "Tableau lave" << endl;

	caracteres_.clear();
	salete_ = 0;
}


/****************************************************************************
 * Fonction:	Tableau::salir
 * Description: Salie le tableau selon le nombre de caracteres effaces
 * Paramètres:	- (unsigned int) nbCaracteres :: nombre de caracteres effaces
 * Retour:		aucun
 ****************************************************************************/
void Tableau::salir(unsigned int nbCaracteres)
{
	// La presence du (+ 1) vient du fait que lorsqu'on efface avec une brosse,
	// meme s'il n'y a pas de dessin a enlever, on laisse toujours une trace
	// de craie derriere.
	salete_ += (nbCaracteres / 2) + 1;
}


