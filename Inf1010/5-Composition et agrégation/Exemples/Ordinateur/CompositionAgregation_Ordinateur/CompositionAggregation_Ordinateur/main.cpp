/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: Ouajdi Felfoul
 * Date: 12 janvier 2012
 * Description: Manipulation de la classe Ordinateur dont 
 *				les classes RAM, HDD, Processeur et Ecran sont des membres.
 ****************************************************************************/

#include"Ordinateur.h"

int main()
{
	//Création des composantes
	RAM memoireVive;
	memoireVive.configurationMeilleure();

	Processeur processeur;
	processeur.configurationMeilleure();

	HDD disqueDur;
	disqueDur.configurationMeilleure();
	
	// Création de trois objets de type Ecran
	// Afin de montrer les differentes façon de réaliser l'agrégation
	Ecran moniteur;
	moniteur.configurationMeilleure();
	Ecran moniteur2;
	moniteur2.configurationEconomique();
	Ecran* moniteur3 = new Ecran;
	moniteur3->configurationMeilleure();
	
	Ordinateur unOrdi(moniteur); // Appel du constructeur par paramètres

	//disqueDur_ est une copie de disqueDur
	unOrdi.choisirHDD(disqueDur); 

	//processeur_ est une copie de processeur
	unOrdi.choisirProcesseur(processeur);

	//memoireVive_ est une copie de memoireVive
	unOrdi.choisirRAM(memoireVive);

	//ecran_ pointe à moniteur
	unOrdi.choisirEcranParPointeur(moniteur);

	unOrdi.calculerPrix();
	
	unOrdi.afficherSpecOrdi();

	//ecranOrdi_ est un alias de moniteur
	unOrdi.choisirEcranParReference(moniteur2); 
	//ATTENTION AVEC LES REFERENCES. L'appel de la fonction 
	//unOrdi.choisirEcranParReference(moniteur2) va modifier le contenu de la variable 
	//moniteur qui se trouve dans la fonction main. Il n'est pas possible de changer 
	//ecranOrdi_ pour qu'elle soit l'alias d'une autre variable. Si on change ecranOrdi_, 
	//on se trouve ˆ changer la variable qu'elle reprŽsente, qui est dans ce cas moniteur. 
	
	//ecran_ va pointer vers moniteur2
	unOrdi.choisirEcranParPointeur(moniteur2); 
	

	//ecran_ va pointer vers l'espace alloué par le pointeur moniteur3
	unOrdi.choisirEcranParPointeur(moniteur3); 
	

	unOrdi.calculerPrix();
	unOrdi.afficherSpecOrdi();

	
	return 0;
}