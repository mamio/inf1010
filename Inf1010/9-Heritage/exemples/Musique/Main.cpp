/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 24 mai 2011
 * Description: Construction d'un band jazz a l'aide du polymorphisme et 
 *				exemples de redefinition de fonctions heritees
 * Note :	Le sons des instruments presents dans cet exemple sont des 
 *			traductions libres des timbres reels de ceux-ci.		
 ****************************************************************************/

#include "Batterie.h"
#include "Piano.h"
#include "Saxophone.h"
#include "Trompette.h"

#include <iostream>
#include <vector>
#include <typeinfo>		// Pour l'utilisation de typeid()
using namespace std;

int main()
{
	// Instanciation de quelques instruments pour former un modeste band jazz
	Batterie*	jimmyCobb =		new Batterie();
	Piano*		billEvans =		new Piano();
	Saxophone*	johnColtrane =	new Saxophone();
	Trompette*	milesDavis =	new Trompette();
	cout << endl << endl;

	
	// On peut tous les mettre dans un vecteur band (pointeurs vers des instruments)
	vector<Instrument*> band;

	band.push_back( jimmyCobb );				
	band.push_back( billEvans ); 
	band.push_back( johnColtrane );							
	band.push_back( milesDavis );


	// Maintenant on peut tous les faire jouer en meme temps
	cout << "Jam Session! : " << endl;
	for(unsigned int i=0; i< band.size(); i++)
	{
		band[i]->jouer(); // On fait quatre appels sur le meme instrument
		band[i]->jouer(); // et la boucle for() passe a travers ceux-ci.
		band[i]->jouer();
		band[i]->jouer();
		cout << endl;
	}
	cout << endl << endl;


	// Apres cette session d'improvisation, certains instruments doivents se reaccorder
	cout << "Les instruments se reaccordent : " << endl;
	for(unsigned int i=0; i< band.size(); i++)
	{
		if( band[i]->estTresDesaccorde() )
			band[i]->accorder();
	}
	cout << endl << endl;


	// Maintenant, certains intruments auraient besoins d'un tune up.
	// Chaque instrument a sa fonction particuliere pour le faire
	// (changerPeaux, changerCordes, changerAnche, etc...).
	// Pour ce faire nous allons utiliser l'operateur typeid().
	// Prenez note qu'il ne sagit pas d'une bonne pratique oriente objet.

	cout << "On execute un petit tune up pour les instruments : " << endl;
	for(unsigned int i=0; i< band.size(); i++)
	{
		// Vous verrez l'utilisation de typeid() plus en profondeur dans le
		// chapitre sur les cast<>
		if( typeid(*band[i]) == typeid(Batterie) )
		{
			Batterie* batterie = dynamic_cast<Batterie*> (band[i]);

			cout << "Qualite des peaux : " << batterie->getQualitePeaux() << endl;
			batterie->changerPeaux();
		}

		else if( typeid(*band[i]) == typeid(Piano) )
		{
			Piano* piano = dynamic_cast<Piano*> (band[i]);

			cout << "Qualite des cordes: " << piano->getQualiteCordes() << endl;
			piano->changerCordes();
		}

		else if( typeid(*band[i]) == typeid(Saxophone) )
		{
			dynamic_cast<Saxophone*> (band[i])->changerAnche();
		}

		else if( typeid(*band[i]) == typeid(Trompette) )
		{
			dynamic_cast<Trompette*> (band[i])->huilerPistons();
		}
	}
	cout << endl << endl;




	// Dissolution du band
	cout << "Le band se dissout : " << endl;
	delete jimmyCobb;
	delete billEvans;
	delete johnColtrane;
	delete milesDavis;

	return 0;
}