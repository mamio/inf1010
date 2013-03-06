/****************************************************************************
 * Fichier: Cercle.h
 * Auteur: William Bussiere
 * Date: 18 mai 2011
 * Description: Implementation de la classe Cercle
 ****************************************************************************/

#include "Cercle.h"


Cercle::Cercle()
	: centre_(), rayon_(0)
{
}

Cercle::Cercle(const Point3d &centre, const double &rayon)
	: centre_(centre), rayon_(rayon)
{
}


Point3d Cercle::getCentre() const
{
	return centre_;
}


double Cercle::getRayon() const
{
	return rayon_;
}


void Cercle::move(const double &dx,const  double &dy,const  double &dz)
{
	centre_.move(dx,dy,dz);
}


void Cercle::reset()
{
	centre_.reset();
}


void Cercle::afficher() const
{
	cout << "Cercle de centre (" 
		 << centre_.getX() << ", " << centre_.getY() << ", " << centre_.getZ() 
		 << ") et de rayon " << rayon_;
	cout << endl << endl;
}
