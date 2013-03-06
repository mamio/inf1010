/****************************************************************************
 * Fichier: main.cpp
 * Auteur: Inconnu
 * Date: 
 * Mise a jour : 6 juin 2011
 * Description: Test de la classe Polygone
 ****************************************************************************/

#include "polygone.h"

int main()
{
	//Creez deux polygones dynamiquement
	Polygone *p1 = new Polygone(); 
	Polygone *p2 = new Polygone();
	cout << endl;

	//Le premier polygone contient 1 seul point (l'origine : (0,0,0)
	p1->ajouterPoint(0, 0, 0);

	//Le second contient deux points : (1,1,1) et (2,2,2)
	p2->ajouterPoint(1, 1, 1);
	p2->ajouterPoint(2, 2, 2);

	//Affichez les deux polygones
	p1->afficher();
	p2->afficher();
	cout << endl;

	//Assignez p2 a p1 avec le =
	*p1 = *p2;

	//Affichez p1
	p1->afficher();
	cout << endl;

	//Supprimez p1
	delete p1;

	//Affichez p2
	p2->afficher();
	cout << endl;

	//Construire un polygone p3 identique a p2 en appelant le constructeur par copie
	Polygone* p3 = new Polygone(*p2);

	//Affichez p3
	p3->afficher();
	cout << endl;

	// C) Lorsqu'on detruit l'object p1, les points 
	//		partages par p2 sont alors detruit. Ainsi, p2 possed des pointeurs 
	//		invalides dans son vecteur.
	//	  Nous devons implementer un constructeur par copie et un operateur
	//		d'affectation qui font une copie profonde des objets.

}