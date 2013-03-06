/****************************************************************************
 * Fichier: ClubDeLecture.cpp
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Implementation de la classe ClubDeLecture
 ****************************************************************************/

#include "ClubDeLecture.h"



/****************************************************************************
 * Fonction:	ClubDeLecture::ClubDeLecture
 * Description: Constructeur par parametre
 * Paramètres:	- (string) nom : nom du club
				- (string) livrePrefere : livre a imposer
 * Retour:		aucun
 ****************************************************************************/
ClubDeLecture::ClubDeLecture(string nom, string livrePrefere)
	: nom_(nom), livrePrefere_(livrePrefere)
{
	// On s'assure qu'il n'y a aucun membre dans le groupe

	for( unsigned int i=0; i < 5; i++)
		membres_[i] = 0;

	cout << "Un nouveau groupe de lecture se forme : " << nom_ << endl;
}


/****************************************************************************
 * Fonction:	ClubDeLecture::~ClubDeLecture
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
ClubDeLecture::~ClubDeLecture()
{
	// Nous n'avons pas a desallouer la memoire associee au membres
	// car un membre peut faire partie de plusieurs clubs : Aggregation

	cout << "Un club se dissous : " << nom_ << endl;
}


/****************************************************************************
 * Fonction:	ClubDeLecture::ajouterMemebre
 * Description: Ajout d'un memebre
 * Paramètres:	- (Lecteur*) lecteur : nouveau membre
				- (unsigned short) no : position dans le club
 * Retour:		aucun
 ****************************************************************************/
void ClubDeLecture::ajouterMembre( Lecteur* lecteur , unsigned short no)
{
	membres_[no] = lecteur;

	// Les clubs sont intransigeants
	membres_[no]->setLivre(livrePrefere_);
}


/****************************************************************************
 * Fonction:	ClubDeLecture::retirerMembre
 * Description: Supprime la reference a un membre
 * Paramètres:	- (unsigned short) no : position dans le club
 * Retour:		aucun
 ****************************************************************************/
void ClubDeLecture::retirerMembre(unsigned short no)
{
	// Remarquer bien que delete n'est pas appele
	// Donc la memoire associee a ce membre n'est pas liberee
	membres_[no] = 0;
}

void ClubDeLecture::surveillerMembres()
{
	// Le but ici est d'effacer la reference au lecteur dans le club
	// s'il est pris a lire un livre autre que le prefere du groupe.
	// On ne detruit pas l'objet, on s'assure seulement que les memebres
	// ne sont pas partages entre les clubs.


	cout << "Seance de suivi pour " << nom_ << " : " << endl;

	for( unsigned int i=0; i < 5; i++)

		if( membres_[i] != 0) // Pour s'assurer qu'un membre existe a cette position

			if( membres_[i]->getLivre() != livrePrefere_ )
			{
				cout << "Un recalcitrant trouve : ";
				cout << membres_[i]->getNom() << " qui lisait "
						<< membres_[i]->getLivre() << endl;

				retirerMembre(i);
			}

	cout << endl;
}
