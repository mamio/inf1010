/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Exmple simple d'utilisation du polymorphisme
 ****************************************************************************/

#include "Boite.h"
#include "Lampe.h"
#include "LampeEnBoite.h"

#include <iostream>
using namespace std;

int main()
{
	// Utilisation de la classe Lampe
	Lampe lampeLave;
	cout << endl;

	lampeLave.eclairer();
	lampeLave.allumer();
	lampeLave.eclairer();
	lampeLave.eteindre();
	cout << endl << endl;


	// Utilisation de la classe Boite
	Boite carton;
	cout << endl;

	carton.ajouterUnChiffre( 6 );

	carton.ouvrir();
	carton.ajouterUnChiffre( 6 );
	carton.ajouterUnChiffre( 56 );
	carton.ajouterUnChiffre( 2 );
	carton.ajouterUnChiffre( 768 );
	carton.ajouterUnChiffre( 0 );
	carton.fermer();

	carton.afficherContenu();
	carton.ouvrir();
	carton.afficherContenu();
	cout << endl << endl;


	// Utilisation de la classe LampeEnBoite

	// Cette classe un peu particuliere merite des explications :
	// En fait c'est (relation d'heritage 'est une') une boite dont les paroies interieures
	// sont (heritage) luminescentes.
	// Ce n'est pas une boite qui contient une lampe (composition).

	LampeEnBoite tresor;
	cout << endl;

	tresor.eclairer();		// Cette classe presente donc
	tresor.ouvrir();		// un composition des deux interfaces heritees
	tresor.eclairer();
	tresor.allumer();
	tresor.eclairer();
	cout << endl;

	tresor.eteindre();
	cout << endl;

	tresor.ajouterUnChiffre( 7 );
	tresor.ajouterUnChiffre( 8 );
	tresor.ajouterUnChiffre( 649 );
	tresor.ajouterUnChiffre( 737 );
	tresor.afficherContenu();			// Avec les methodes virtuelles, on peut
	tresor.allumer();					// reimplementer une methode pour qu'elle tienne compte
	tresor.afficherContenu();			// de l'autre interface heritee
	cout << endl << endl;

	return 0;
}