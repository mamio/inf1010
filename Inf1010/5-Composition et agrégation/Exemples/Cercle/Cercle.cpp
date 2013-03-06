/****************************************************************************
 * Fichier: Cercle.cpp
 * Auteur: Martin Bisson
 * Date: 27 août 2009
 * Description: Implémentation de la classe Cercle
 ****************************************************************************/

#include "Cercle.h"


/****************************************************************************
 * Fonction:	Cercle::Cercle
 * Description: Constructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Cercle::Cercle()
{
	cout << "Constructeur par defaut de Cercle" << endl;
    rayon_ = 0.0;
}

/****************************************************************************
 * Fonction:	Point::~Point
 * Description: Destructeur.
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Cercle::~Cercle()
{
    cout << "Destructeur de Cercle" << endl;
}
