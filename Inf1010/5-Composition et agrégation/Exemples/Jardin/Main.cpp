/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 26 mai 2011
 * Description: Utilisation des classes Jardin et Jardinier possedants des
 *				methodes constantes
 ****************************************************************************/

#include "Jardin.h"
#include "Jardinier.h"

#include <iostream>
using namespace std;

int main()
{
	// Construction d'un jardin par defaut
	Jardin jardinVierge;

	jardinVierge.afficher();
	cout << endl;



	// Construction d'un jardin par parametres
	Jardin jardinPotager("Champs et Ecrivez", 5 , 15);

	jardinPotager.afficher();
	cout << endl;



	// On construit un jardinier pour travailler sur ce dernier jardin
	Jardinier* deLaNeuvillette = new Jardinier("Louis-George de la Neuvillette");
	cout << endl;

	jardinPotager.setJardinier( deLaNeuvillette );
	jardinPotager.afficher();



	// On va modifier quelques attributs du jardinier a l'exterieur de la classe
	// Jardin et on va reafficher les infos du jardin
	cout << "Le meme jardin apres des modifications sur le jardinier : " 
		 << endl << endl;

	deLaNeuvillette->setAge( 53 );
	deLaNeuvillette->setAnneesExperience( 39 );

	jardinPotager.afficher();


	// On doit desallouer la memoire des objets dynamiques
	jardinPotager.setJardinier( 0 ); // On enlève le lien jardin/jardinier
	delete deLaNeuvillette;

	return 0;
}