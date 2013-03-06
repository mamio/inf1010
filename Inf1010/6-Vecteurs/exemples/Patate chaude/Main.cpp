/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 1 juin 2011
 * Description: Exemple d'utilisation des vecteurs
 ****************************************************************************/

#include "PatateChaude.h"

#include <iostream>
#include <vector>
using namespace std;


/****************************************************************************
 * Fonction:	rechaufferPatatesCopie
 * Description: Augmente la temperature des patates de la temperature indiquee
 *				Elle n'aura pas l'effet voulu.
 * Paramètres:	- (vector<PatateChaude>) patates : a rechauffer
 * Retour:		aucun
 ****************************************************************************/
void rechaufferPatatesCopie(	vector<PatateChaude> patates, 
								const double& deltaTemperature)
{
	for(unsigned int i=0; i < patates.size(); i++)
		patates[i].setTemperature
		(  
			patates[i].getTemperature() + deltaTemperature 
		);
}

/****************************************************************************
 * Fonction:	rechaufferPatatesReference
 * Description: Augmente la temperature des patates de la temperature indiquee
 * Paramètres:	- (vector<PatateChaude>&) patates : a rechauffer
 * Retour:		aucun
 ****************************************************************************/
void rechaufferPatatesReference(	vector<PatateChaude>& patates, 
								const double& deltaTemperature)
{
	for(unsigned int i=0; i < patates.size(); i++)
		patates[i].setTemperature
		(  
			patates[i].getTemperature() + deltaTemperature 
		);
}


/****************************************************************************
 * Fonction:	rechaufferPatatesPointeur
 * Description: Augmente la temperature des patates de la temperature indiquee
 * Paramètres:	- (vector<PatateChaude*>) patates : a rechauffer
 * Retour:		aucun
 ****************************************************************************/
void rechaufferPatatesPointeur(	vector<PatateChaude*> patates, 
								const double& deltaTemperature)
{
	for(unsigned int i=0; i < patates.size(); i++)
		patates[i]->setTemperature
		(  
			patates[i]->getTemperature() + deltaTemperature 
		);
}


int main(void)
{
	// A l'execution de cet exemple, vous obtiendrez beaucoup de sorties
	// dans la console. Elles font references au comportement des vecteurs
	// lors de l'agrandissement de leur capacite.



	// On construit un vecteur de patates chaudes
	// On commence par en construire 2 par defaut
	cout << "Patates crees par defaut : " << endl;

	vector<PatateChaude> patates(3);
	cout << "Le panier contient: " << patates.size() << " / "
		 << patates.capacity() << " patates" << endl << endl;
	
	cout << "Patates faites maison : " << endl;
	PatateChaude mamie(121.34);
	PatateChaude mere(97.72);
	cout << endl;

	patates.push_back( mamie );
	cout << "Le panier contient: " << patates.size() << " / "
		 << patates.capacity() << " patates" << endl << endl;

	patates.push_back( mere );
	cout << "Le panier contient: " << patates.size() << " / "
		 << patates.capacity() << " patates" << endl << endl;

	patates.push_back( PatateChaude(113.78) );	// Patate de soeur
	cout << "Le panier contient: " << patates.size() << " / "
		 << patates.capacity() << " patates" << endl << endl;

	patates.push_back( PatateChaude(158.92) );	// Patate de grand-oncle
	cout << "Le panier contient: " << patates.size() << " / "
		 << patates.capacity() << " patates" << endl << endl;


	// On affiche la temperature de patates
	cout << "Temperature des patates : " << endl;

	for(unsigned int i=0; i< patates.size(); i++)
		cout << ' ' << patates[i].getTemperature() << endl;
	cout << endl;



	// Augmentation de la temperature par la premiere fonction globale
	rechaufferPatatesCopie(patates, 15.00);
	cout << "Temperature des patates une fois rechauffees (copie): " << endl;
	for(unsigned int i=0; i< patates.size(); i++)
		cout << ' ' << patates[i].getTemperature() << endl;
	cout << endl << endl;;


	rechaufferPatatesReference(patates, 15.00);
	cout << "Temperature des patates une fois rechauffees (reference): " << endl;
	for(unsigned int i=0; i< patates.size(); i++)
		cout << ' ' << patates[i].getTemperature() << endl;
	cout << endl << endl;;


	// On va transformer notre vecteur d'object en vecteur de pointeurs
	cout << "Construction d'un vecteur de pointeurs vers des PatateChaudes : "
		 << endl;

	vector<PatateChaude*> patatesPtr( patates.size() );		// Pour avoir la meme 
	for(unsigned int i=0; i< patates.size(); i++)			// capacite en commencant
		patatesPtr[i] = new PatateChaude( patates[i] );


	// Augmentation de la temperature par la deuxieme fonction globale
	cout << "Temperature des patates une fois rechauffees (pointeurs): " << endl;
	rechaufferPatatesPointeur(patatesPtr, 15.00);
	
	for(unsigned int i=0; i< patatesPtr.size(); i++)
		cout << ' ' << patatesPtr[i]->getTemperature() << endl;
	cout << endl;




	// Maintenant il faut desallouer la memoire utilisee par 
	// le vecteur de pointeurs
	
	for(unsigned int i=0; i< patatesPtr.size(); i++)
		delete patatesPtr[i];
	patatesPtr.clear();
	cout << endl;

	return 0;
}