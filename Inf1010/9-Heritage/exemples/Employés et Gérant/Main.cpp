/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Test de l'interface de la classe Gerant et de l'Heritage
 ****************************************************************************/

#include "Employe.h"
#include "Gerant.h"
#include "Secretaire.h"

#include <iostream>
using namespace std;

int main()
{
	// Creation d'un gerant et de quelques employes
	Gerant gerant("Robert",100000.0);
	gerant.ajouterEmploye( new Employe("Alain", 45000.0) );
	gerant.ajouterEmploye( new Employe("Richard", 42000.0) );
	gerant.ajouterEmploye( new Employe("Patricia", 51000.0) );
	gerant.ajouterEmploye( new Secretaire("Suzane", 48000.0) );

	gerant.setSalaire(90000.0);

	cout << "Entrez le nom de l'employe recherche: ";
	string nom;
	cin >> nom;
	Employe* ptr = gerant.getEmploye(nom);
	if (ptr != 0) 
	{
		cout << "L'employe " << nom << " a un salaire de " 
			<< ptr->getSalaire() << "$." << endl;
	} 
	else 
	{
		cout << "L'employe " << nom << " n'existe pas." << endl;
	}
		
	cout << gerant.getNom() << " gagne " << gerant.getSalaire() << "$." << endl;


	return 0;
}
