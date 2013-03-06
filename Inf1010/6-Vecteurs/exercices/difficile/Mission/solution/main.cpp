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


Mission* missionBoxer()
{
	// Dans les fonctions globales, on cree des pointeurs de mission,
	// car c<est le type de donnees que Base veut et parce que c'est plus rapide
	// a renvoyer
	Mission* boxer = new Mission("Boxer", "Recuperation d'aluminium");

	boxer->ajouterCheckpoint( new Checkpoint("Tite", -376, 2) );
	boxer->ajouterCheckpoint( new Checkpoint("Bleu", -212, 91) );
	boxer->ajouterCheckpoint( new Checkpoint("Dure", -204, 128) );
	boxer->ajouterCheckpoint( new Checkpoint("Acier", -223, 210) );
	boxer->ajouterCheckpoint( new Checkpoint("Rouille", -186, 178) );

	return boxer;
}

Mission* missionDjalouza()
{
	Mission* djalouza = new Mission("Djalouza", "Recuperer du petrole");

	djalouza->ajouterCheckpoint( new Checkpoint("Meche", 100, 123) );
	djalouza->ajouterCheckpoint( new Checkpoint("Baril", 245, 97) );
	djalouza->ajouterCheckpoint( new Checkpoint("Kargo", 178, 22) );
	djalouza->ajouterCheckpoint( new Checkpoint("Alpha", 169, 34) );
	djalouza->ajouterCheckpoint( new Checkpoint("Cacao", 155, 12) );

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