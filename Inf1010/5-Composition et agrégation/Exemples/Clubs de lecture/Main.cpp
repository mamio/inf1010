/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: La guerre des clubs de lecture
 ****************************************************************************/

#include "Lecteur.h"
#include "ClubDeLecture.h"

#include <iostream>
using namespace std;

int main()
{
	// Creation de quelques Lecteurs //
	Lecteur* marie = new Lecteur("Marie Blache");		// Pour aggregation par pointeur
	Lecteur* louis = new Lecteur("Louis Vuitton");		// Pour aggregation par pointeur

	Lecteur jackie("Jackie Simpson");					// Pour aggregation par reference
	Lecteur gerard("Gerard DeParDiable");				// Pour aggregation par reference
	cout << endl;



	// Creation de quelques clubs //
	ClubDeLecture hugo("Les Hugoiens", "Les Miserables");
	ClubDeLecture maudits("Les Poetes Maudits", "Le Bateau ivre");
	ClubDeLecture intenses("Les Intenses", "The Shining");
	cout << endl << endl;



	// Seance d'inscriptions //
	hugo.ajouterMembre(marie,0);						// On envoie directement le pointeur
	hugo.ajouterMembre(louis,1);						// On envoie un reference


	maudits.ajouterMembre(marie,0);
	maudits.ajouterMembre(louis,1);
	maudits.ajouterMembre(&gerard,3);


//* maudits.ajouterMemebre(new Lecteur("Stevy Chambranlant"), 0); */
	// Tres mauvaise idee. Alors qui s'occupera de desallouer la memoire de Stevy
	// Ce n'est pas le club qui s'en occupera!

	intenses.ajouterMembre(marie,0);
	intenses.ajouterMembre(&jackie,1);
	intenses.ajouterMembre(&gerard,3);




	// Seance de verification des membres //
	hugo.surveillerMembres();
	maudits.surveillerMembres();
	intenses.surveillerMembres();
	

	// Louis en a marre, il voudrait bien lire Scott Fitzgerald
	louis->setLivre("Gatsby le magnifique");
	maudits.surveillerMembres();
	cout << endl;


	// Ne pas oublier de desallouer la memoire!
	delete marie;
	delete louis;


	return 0;
}