/****************************************************************************
 * Fichier: Jardin.cpp
 * Auteur: William Bussiere
 * Date: 26 mai 2011
 * Description: Implementation de la classe Jardin
 ****************************************************************************/

#include "Jardin.h"


/****************************************************************************
 * Fonction:	Jardin::Jardin
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Jardin::Jardin()
{
	cout << "Construction d'un jardin par defaut" << endl;
	nom_ = "";
	largeur_ = 1.0f;
	longueur_ = 1.0f;
	jardinier_ = 0;		// Pointeur nul. Aucun jardinier ratache.
}


/****************************************************************************
 * Fonction:	Jardin::Jardin
 * Description: Constructeur par parametres
 * Paramètres:	- (string) nom : nom du jardin (IN)
 *				- (float) largeur : largeur du jardin (IN)
 *				- (float) longueur : longueur du jardin (IN)
 * Retour:		aucun
 ****************************************************************************/
Jardin::Jardin(string nom, float largeur, float longueur)
{
	cout << "Construction d'un jardin par parametres" << endl;
	nom_ = nom;
	largeur_ = largeur;
	longueur_ = longueur;
	jardinier_ = 0;		// Pointeur nul. Aucun jardinier ratache.
}


/****************************************************************************
 * Fonction:	Jardin::~Jardin
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Jardin::~Jardin()
{
	cout << "La nature reprend le dessus. Le jardin s'evapore." << endl;
}



void Jardin::setNom( string nom )
{
	nom_ = nom;
}



void Jardin::setLargeur( float largeur )
{
	largeur_ = largeur;
}



void Jardin::setLongueur( float longueur )
{
	longueur_ = longueur;
}



void Jardin::setJardinier( Jardinier* jardinier )
{
	jardinier_ = jardinier;
}



string Jardin::getNom()	const
{
	return nom_;
}



float Jardin::getLargeur() const
{
	return largeur_;
}



float Jardin::getLongueur() const
{
	return longueur_;
}



Jardinier* Jardin::getJardinier() const
{
	return jardinier_;
}


/****************************************************************************
 * Fonction:	Jardin::afficher
 * Description: Affiche les informations du jardin et de son jardinier
 *				Elle appelle une methode constante du jardinier
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void Jardin::afficher() const
{
	// Toutes les methodes appelees dans cette fonction sont const et sont
	// oubligees de l'etre, sans quoi le code ne compilera pas.

	cout << "Informations sur le jardin :" << endl;
	cout << "   Nom : " << getNom() << endl;
	cout << "   Largeur (m) : " << getLargeur() << endl;
	cout << "   Longueur (m) : " << getLongueur() << endl;

	if( jardinier_ != 0 )
		jardinier_->afficher();	// Remarquez que cette methode est declaree const.
						// On n'aurait pas pu l'appeler autrement, car elle aurait
						// pu modifier les attributs du jardinier.
	cout << endl;
}



