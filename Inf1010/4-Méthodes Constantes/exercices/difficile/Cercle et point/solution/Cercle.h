/****************************************************************************
 * Fichier: Cercle.h
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Définition de la classe Cercle
 ****************************************************************************/

#ifndef _CERCLE_H_
#define _CERCLE_H_

#include "Point3d.h"

#include <iostream>
using namespace std;

class Cercle
{
public:
	Cercle();
	Cercle(const Point3d &centre, const double &rayon);

	Point3d getCentre() const;
	double getRayon() const;

	void move(const double &dx,const  double &dy,const  double &dz);
	void reset();
	void afficher() const;

private :
	Point3d centre_;
	double rayon_;

};
#endif // _CERCLE_H_