/****************************************************************************
 * Fichier: CentreDeRecherche.h
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Definition de la classe CentreDeRecherche
 ****************************************************************************/

#ifndef _CENTRE_DE_RECHERCHE_H_
#define _CENTRE_DE_RECHERCHE_H_

#include "Local.h"
#include "Employe.h"

#include <iostream>
#include <string>
using namespace std;


class CentreDeRecherche
{
public :
	CentreDeRecherche();
	~CentreDeRecherche();

	void definirLaboratoire(unsigned short no, const string &sujet, const string &adresse);
	void ajouterChercheur(Employe* chercheur, unsigned short no);

	void afficher() const;

private :
	// Un tableau de laboratoires : Composition
	Local labos_[5];

	// Une directice : Composition
	Employe directrice_;

	// Des chercheurs : Aggregation par pointeur
	Employe *chercheurs_[5];
};

#endif