/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Construction et destruction d'un centre de recherche
 ****************************************************************************/

#include "Employe.h"
#include "CentreDeRecherche.h"
#include "Local.h"

#include <iostream>
using namespace std;

int main()
{
	// Creation de quelques employes
	Employe* jocelyne = new Employe("Jocelyne Avalee");
	Employe* guy = new Employe("Guy Brasseur");
	Employe  michelle("Michelle Hacknabebe");
	Employe  marthe("Marthe Dugroyeul");
	cout << endl;


	// Creation du centre de recherche et etablissement des locaux
	CentreDeRecherche* chum = new CentreDeRecherche();
	cout << endl;

	chum->definirLaboratoire(1,"Recherche sur les particules de poussiere","B-2602");
	chum->definirLaboratoire(2,"Recherche sur les microbes intercostaux","C-5021");
	chum->definirLaboratoire(3,"Recherche sur la nourriture de cafeteria","C-2010");
	chum->definirLaboratoire(4,"Recherche sur la friction des divers planchers","L-205");


	// On associe des chercheurs a ces laboratoires
	chum->ajouterChercheur(jocelyne,1);		// Aggregation par pointeur
	chum->ajouterChercheur(&michelle,2);		// Aggregation par reference
	chum->ajouterChercheur(&marthe,3);
	chum->ajouterChercheur(jocelyne,4);		// Jocelyne occupe deux labos

//	chum.ajouterChercheur(new Employe("Quidam Bergeron") );
	// Mauvaise idee, car personne n'est en charge de desallouer cet espace memoire.
	// Si le centre de recherche prenait un pointeur en parametre et que son destructeur
	// s'occupait d'en liberer la memoire (Composition), alors ce serait un bon choix.
	// Un pointeur vers un objet comme attribut, ne veux pas automatiquement dire que
	// c'est de l'aggregation!


	// On affiche le travail des chercheurs independamment du centre de recherche
	cout << "Travail occupe par les employes :" << endl;
	cout << jocelyne->getNom()	<< " : " << jocelyne->getPoste()  << endl;
	cout << (*guy).getNom()		<< " : " << (*guy).getPoste()	  << endl;
	cout << michelle.getNom()	<< " : " << michelle.getPoste()   << endl;
	cout << (&marthe)->getNom() << " : " << (&marthe)->getPoste() << endl;
	cout << endl;


	// Maintenant on affiche le centre de recherche au complet
	// Remarquez que 'guy' ne s'y trouve pas
	chum->afficher();
	cout << endl;


	// Desallocation de la memoire alloue dynamiquement.
	delete chum;
	cout << endl;

	delete jocelyne;
	delete guy;


	return 0;
}