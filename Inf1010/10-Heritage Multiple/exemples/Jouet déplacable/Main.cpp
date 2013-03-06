/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Exemple sur l'heritage multiple
 ****************************************************************************/

#include "Jouet.h"
#include "Deplacable.h"
#include "Camion.h"
#include "Checkpoint.h"
#include "ParcBebe.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// On cree quelques objets de type Camion et ParcBebe et Checkpoint

	Camion*		camQuelconque	= new Camion();
	Checkpoint* checkQuelconque = new Checkpoint();
	ParcBebe*	parcQuelconque	= new ParcBebe();
	
	Camion*		pompier		= new Camion("Pompier", 3, 5);
	Checkpoint* soeurElise	= new Checkpoint("Soeur Elise", 255, 34);
	ParcBebe*	fisherSpot	= new ParcBebe( "Fisher Spot" );
	cout << endl;
	


	// Avec ces objets, on peut creer un vecteur de type Jouet*

	vector< Jouet* > bambinerie;
	bambinerie.push_back( camQuelconque );		// Nos Jouets crees par defaut
	bambinerie.push_back( parcQuelconque );
	bambinerie.push_back( pompier );			// Nos Jouets crees par parametres
	bambinerie.push_back( fisherSpot );
	// Les Checkpoints ne peuvent en faire partie, car ils ne descendent pas de Jouet.

	cout << "Les ages minimums : " << endl;
	for( unsigned int i=0; i<  bambinerie.size(); i++)
		cout <<  bambinerie[i]->getNom() << " : " << bambinerie[i]->getAgeMinimum() << endl;
	cout << endl << endl;



	// Avec ces objets, on peut creer un vecteur de type Deplacable*

	vector< Deplacable* > mouvants;
	mouvants.push_back( camQuelconque );		// Nos Deplacables crees par defaut
	mouvants.push_back( checkQuelconque );
	mouvants.push_back( pompier );				// Nos Deplacables crees par parametres
	mouvants.push_back( soeurElise );
	// Les ParcBebe ne peuvent en faire partie, car ils ne descendent pas de Deplacable.


	cout << "Deplacement d'objets :" << endl;
	for( unsigned int i=0; i<  mouvants.size(); i++)
		mouvants[i]->deplacer(3,10);
	cout << endl << endl;


	// destruction des objest
	cout << "Desallocation des objets construits dynamiquement : " << endl;
	delete camQuelconque;
	cout << endl;
	delete checkQuelconque;
	cout << endl;
	delete parcQuelconque;
	cout << endl;
	delete pompier;
	cout << endl;
	delete soeurElise;
	cout << endl;
	delete fisherSpot;
	cout << endl;


	return 0;
}