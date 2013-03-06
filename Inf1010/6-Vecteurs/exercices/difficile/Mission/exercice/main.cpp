/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 21 juin 2011
 * Description: Exercice sur les vecteurs et la performance
 ****************************************************************************/

#include "Mission.h"
#include "Base.h"


#include <ctime>
using namespace std;


Mission missionBoxer()
{
	Mission boxer("Boxer", "Recuperation d'aluminium");

	boxer.ajouterCheckpoint( Checkpoint("Tite", -376, 2) );
	boxer.ajouterCheckpoint( Checkpoint("Bleu", -212, 91) );
	boxer.ajouterCheckpoint( Checkpoint("Dure", -204, 128) );
	boxer.ajouterCheckpoint( Checkpoint("Acier", -223, 210) );
	boxer.ajouterCheckpoint( Checkpoint("Rouille", -186, 178) );

	return boxer;
}

Mission missionDjalouza()
{
	Mission djalouza("Djalouza", "Recuperer du petrole");

	djalouza.ajouterCheckpoint( Checkpoint("Meche", 100, 123) );
	djalouza.ajouterCheckpoint( Checkpoint("Baril", 245, 97) );
	djalouza.ajouterCheckpoint( Checkpoint("Kargo", 178, 22) );
	djalouza.ajouterCheckpoint( Checkpoint("Alpha", 169, 34) );
	djalouza.ajouterCheckpoint( Checkpoint("Cacao", 155, 12) );

	return djalouza;
}

int main()
{
	int chrono = clock();

	// Creation de la Base Campquie
	Base campquie("Campquie", "Recuperation de matieres premieres");

	// Ajout des deux missions
	campquie.ajouterMission( missionBoxer() );
	campquie.ajouterMission( missionDjalouza() );

	cout << "Temps d'execution apres l'ajout des deux missions (ms) : " << clock() - chrono << endl;
	
	// Affichage de la base et de ses missions
	campquie.afficher();

	cout << "Temps d'execution apres l'affichage (ms) : " << clock() - chrono << endl;

	for(int i=0; i < 400; i++)
	{
		campquie.ajouterMission( missionBoxer() );
		campquie.ajouterMission( missionDjalouza() );
	}

	cout << "Temps d'execution apres l'ajout de 800 missions (ms) : " << clock() - chrono << endl;
	

	return 0;
}