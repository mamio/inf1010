/****************************************************************************
 * Fichier: Boite.h
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Definition de la classe Boite
 ****************************************************************************/

#ifndef _BOITE_H_
#define _BOITE_H_

#include <iostream>
#include <vector>
using namespace std;


class Boite
{
public :
	Boite();
	virtual ~Boite();

	void ouvrir();
	void fermer();

	void ajouterUnChiffre(double chiffre);
	virtual void afficherContenu() const;

	bool estOuverte() const;

private :
	bool estOuverte_;
	vector<double> contenu_;
};

#endif