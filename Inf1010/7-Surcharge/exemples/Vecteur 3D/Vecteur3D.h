/****************************************************************************
 * Fichier: Vecteur3D.h
 * Auteur: William Bussiere
 * Date: 31 mai 2011
 * Description: Definition de la classe Vecteur3D
 ****************************************************************************/

#ifndef _VECTEUR_3D_H_
#define _VECTEUR_3D_H_

#include <iostream>
using namespace std;


class Vecteur3D
{
public :
	// Constructeur
	Vecteur3D(double x=0,double y=0, double z=0);
	// Destructeur
	~Vecteur3D();

	// Methodes d'acces
	double getX() const;
	double getY() const;
	double getZ() const;

	// Methodes de modification
	void setX(double x);
	void setY(double y);
	void setZ(double z);

	// Addition et soustraction de vecteurs
	Vecteur3D	operator+  (const Vecteur3D &vecteur) const;
	Vecteur3D	operator-  (const Vecteur3D &vecteur) const;

	// La multiplication scalaire
	double		operator*  (const Vecteur3D &vecteur) const;

	// La multiplication vectoriel
	Vecteur3D	operator^  (const Vecteur3D &vecteur) const;

	// Pour la comparaison de vecteurs
	bool		operator== (const Vecteur3D &vecteur) const;


private :
	double x_;
	double y_;
	double z_;
};


// On doit surcharger l'operateur de flux de sortie a l'exterieur
// de la classe car le membre de gauche n'est pas un vecteur.
ostream& operator<< ( ostream& out, const Vecteur3D &vecteur);

#endif