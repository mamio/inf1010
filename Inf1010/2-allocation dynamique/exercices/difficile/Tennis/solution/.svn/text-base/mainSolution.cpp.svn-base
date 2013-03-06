/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 2 juin 2011
 * Description: Solutionnaire de l'exercice d'allocation dynamique 
 *				sur le theme du tennis.
 ****************************************************************************/

#include "Balle.h"

#include <iostream>
#include <string>
using namespace std;


int main()
{
	// A) Construisez 3 balles. 
	// Deux de facon dynamimque (constructeur pa parametre(s))
	Balle* babolar	= new Balle("Babolar", 6.67);
	Balle* wilson	= new Balle("Wilson", 6.42);

	// et une de facon automatique (constructeur pa parametre(s))
	Balle  penn("Penn", 6.56);
	cout << endl;

	// B) Construisez 3 balles par defaut en le moins d'instruction(s) possible(s)
	Balle ballesDefaut[3];	// Appel directement le constructeur par defaut
	cout << endl;

	// C) Mettez les 6 balles construites dans un tableau dynamique de grandeur 6
	Balle* balles = new Balle[6];
	balles[0] = ballesDefaut[0];
	balles[1] = *(ballesDefaut + 1);
	balles[2] = ballesDefaut[2];
	balles[3] = *babolar;
	balles[4] = *wilson;
	balles[5] = penn;
	cout << endl;

	// D) Afficher toutes les balles du tableau d'au moins 4 facons differentes
	// Par facons differentes, on parle de l'acces a la methode Balle::afficher()
	balles->afficher();				// balle 1
	(balles + 1)->afficher();		// balle 2
	balles[2].afficher();			// balle 3
	(&balles[3])->afficher();		// balle 4
	(&balles[3] + 1)->afficher();	// balle 5
	(&balles[1] + 2)[2].afficher();	// balle 6
	cout << endl;

	// E) Avec une boucle, augmentez le diametre des balles Spalding de 1cm
	for(unsigned int i=0; i < 6; i++)
		if( balles[i].getMarque() == "Spalding" )
			balles[i].setDiametre( balles[i].getDiametre() + 1 );

	// F) Reaffichez les attributs des balles a travers une boucle (afficher())
	for(unsigned int i=0; i < 6; i++)
		(balles + i)->afficher();
	cout << endl;

	// G) Detruisez convenablement la memoire pour eviter les fuites
	delete [] balles;	// Destruction du tableau de 6 balles
	delete wilson;		// Cette memoire n'etait pas partagee avec 'balles'
	delete babolar;		// On avait plutot fait une copie des objets.
	cout << endl;
}