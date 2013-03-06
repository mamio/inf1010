/****************************************************************************
 * Fichier: polygone.h
 * Auteur: Inconnu
 * Date: 
 * Mise a jour : 6 juin 2011
 * Description: Definition de la classe Polygone
 ****************************************************************************/

#ifndef _POLYGONE_H_
#define _POLYGONE_H_

#include "Point.h"

#include <vector>
#include <iostream>
using namespace std; 

class Polygone
{
public:
	Polygone();
	Polygone(const Polygone &polygone);	// A rajouter
	~Polygone();

	void ajouterPoint(double x,double y, double z);
	void afficher() const;

	Polygone& operator= (const Polygone& polygone); // A rajouter

private:
	vector<Point3d*> points_;
};

#endif

