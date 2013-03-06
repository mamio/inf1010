/****************************************************************************
 * Fichier: PatateChaude.h
 * Auteur: William Bussiere
 * Date: 1 juin 2011
 * Description: Definition de la classe PatateChaude
 ****************************************************************************/

#ifndef PATATE_CHAUDE_H_
#define PATATE_CHAUDE_H_

#include <iostream>
using namespace std;


class PatateChaude
{
public :
	// Constructeur par defaut
	PatateChaude();
	PatateChaude(const double& temperature);
	// Destructeur
	~PatateChaude();

	// Methode d'acces a l'attribut temperature
	double getTemperature() const;

	// Methode de modification de l'attribut temperature
	void setTemperature(const double &temperature);

private :
	double temperature_;

};

#endif 