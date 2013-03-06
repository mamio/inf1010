/****************************************************************************
 * Fichier: Employe.h
 * Auteur: Inconnu
 * Date: Inconnu
 * Mise a jour : 13 mai 2011
 * Description: Definition de la classe Employe
 ****************************************************************************/

#ifndef _EMPLOYE_H_
#define _EMPLOYE_H_

#include <string>

using namespace std;

class Employe
{
public:
	// Constructeurs
	Employe();
	Employe(string nom, double salaire);

	// Methodes d'acces
	double getSalaire() const;
	string getNom() const; 

	// Methode de modification
	void setSalaire(double salaire);

private:
	// Attributs
	string nom_;
	double salaire_;
};

#endif // _EMPLOYE_H_

