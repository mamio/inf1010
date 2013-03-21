/************************************************************************************
 * Fichier                  : main.cpp
 * Auteur                   : Benjamin De Leener
 * Description              : Fichier principal de l'application
 * Date de creation         : 04 Mars 2013
 * Date de modification     : 05 Mars 2013
 ************************************************************************************/

#include <iostream>
#include "Ordinateur.h"
#include "ReseauListe.h"
#include "ReseauMap.h"
#include "Reseau.h"

using namespace std;

int main()
{
	Ordinateur ordinateur;
	Reseau* reseau = new Reseau;
	Ordinateur autreOrdinateur("Odrinateur", 1, reseau);
	cout << autreOrdinateur.getNom() << autreOrdinateur.getAdresse() << endl;
	Message message1("john", "paul", 2);
	Message message2("john", "paul", 3);
	Message message3("john", "henry", 2);
	Message message4("john", "paul", 1);
	Message message5("john", "paul", 3);
	autreOrdinateur.ajoutMessage(&message1);
	autreOrdinateur.ajoutMessage(&message2);
	autreOrdinateur.ajoutMessage(&message3);
	autreOrdinateur.ajoutMessage(&message4);
	autreOrdinateur.ajoutMessage(&message5);
	/*for (int i = 0; i < ordinateur.envoiMessages().size();i++)
		autreOrdinateur.recevoirMessage(ordinateur.envoiMessages()[i]);*/
	autreOrdinateur.afficherMessage();




/*	// Création dynamique du réseau
	Reseau* reseau;

	// Choix par l'utilisateur de l'implémentation MAP ou LIST
	cout << "---  Voulez-vous utiliser la version (1) MAP ou la version (2) LIST ? " << endl;
	char c;
	do {
		cin.get(c);
	} while (c != '1' && c != '2');

	if (c == '1') {
		cout << "Utilisation de la version MAP." << endl;
		reseau = new ReseauMap;
	} else {
		cout << "Utilisation de la version LISTE."<< endl;
		reseau = new ReseauListe;
	}
	
	/*	Phase de construction du réseau
	*	1.	Ajout des ordinateurs dans le réseau en lisant le fichier "Ordinateurs.txt"
	*		Chaque ligne du fichier représente un ordinateur et est constitué des parties suivantes :
	*		(chaque partie étant séparée par un espace)
	*		[adresse] [nom]
	*/
	


	/*	2.	Insertion des messages dans les ordinateurs en lisant le fichier "Messages.txt"
	*		Chaque ligne du fichier représente un message et est constitué des parties suivantes :
	*		(chaque partie étant séparée par un espace)
	*		[adresse de l'expediteur] [priorité du message] [nom du destinataire] [9 valeurs du contenu de la matrice séparés par un espace]
	*/	
	


	//	3.	Affichage des ordinateurs présents sur le réseau triés par nom
	

	//	4.	Affichage des ordinateurs présents sur le réseau triés par nom
	

	//	Phase de fonctionnement du réseau
	//	5.	Lancement de l'activité du réseau - envoie des messages entre ordinateurs
	

	//	Phase d'affichage des résultats
	//	6.	Affichage des messages recus par chacun des ordinateurs du réseau
	

	//	7.	Destruction du réseau
	

	system("pause");
	return 0;
}
