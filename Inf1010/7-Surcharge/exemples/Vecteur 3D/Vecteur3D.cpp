/****************************************************************************
 * Fichier: Vecteur3D.cpp
 * Auteur: William Bussiere
 * Date: 31 mai 2011
 * Description: Implementation de la classe Vecteur3D
 ****************************************************************************/

#include "Vecteur3D.h"


/****************************************************************************
 * Fonction:	Vecteur3D::Vecteur3D
 * Description: Constructeur par parametre et par defaut
 * Paramètres:	- (double) x : composante en x du vecteur
 *				- (double) y : composante en y du vecteur
 *				- (double) z : composante en z du vecteur
 * Retour:		aucun
 ****************************************************************************/
Vecteur3D::Vecteur3D(double x,double y, double z)
	: x_(x), y_(y), z_(z)
{
	//cout << "Construction d'un vecteur a la position : ";
	//cout << *this << endl;
}


/****************************************************************************
 * Fonction:	Vecteur3D::~Vecteur3D
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Vecteur3D::~Vecteur3D()
{
	//cout << "Destruction du vecteur a la position : ";
	//cout << *this << endl;
}



// Methodes d'acces //

double Vecteur3D::getX() const
{
	return x_;
}



double Vecteur3D::getY() const
{
	return y_;
}



double Vecteur3D::getZ() const
{
	return z_;
}


// Methodes de modification //

void Vecteur3D::setX(double x)
{
	x_ = x;
}



void Vecteur3D::setY(double y)
{
	y_ = y;
}



void Vecteur3D::setZ(double z)
{
	z_ = z;
}


/****************************************************************************
 * Fonction:	Vecteur3D::operator+
 * Description: Fait l'addition des deux vecteurs
 * Paramètres:	- (Vecteur3D) vecteur : le vecteur a additionner
 * Retour:		(Vecteur3D) vecteur resultat de l'addition
 ****************************************************************************/
Vecteur3D Vecteur3D::operator+  (const Vecteur3D &vecteur) const
{
	return Vecteur3D(x_ + vecteur.x_, y_ + vecteur.y_, z_ + vecteur.z_);
}

/****************************************************************************
 * Fonction:	Vecteur3D::operator-
 * Description: Fait la soustraction des deux vecteurs
 * Paramètres:	- (Vecteur3D) vecteur : le vecteur a soustraire
 * Retour:		(Vecteur3D) vecteur resultat de la soustraction
 ****************************************************************************/
Vecteur3D Vecteur3D::operator-  (const Vecteur3D &vecteur) const
{
	return Vecteur3D(x_ - vecteur.x_, y_ - vecteur.y_, z_ - vecteur.z_);
}


/****************************************************************************
 * Fonction:	Vecteur3D::operator*
 * Description: Fait la multiplication scalaire entre deux vecteurs
 * Paramètres:	- (Vecteur3D) vecteur : le vecteur a multiplier
 * Retour:		(double) resultat de la multiplication scalaire
 ****************************************************************************/
double Vecteur3D::operator*  (const Vecteur3D &vecteur) const
{
	return (x_ * vecteur.x_ + y_ * vecteur.y_ + z_ * vecteur.z_);
}


/****************************************************************************
 * Fonction:	Vecteur3D::operator^
 * Description: Fait la multiplication vectorielle entre deux vecteurs
 * Paramètres:	- (Vecteur3D) vecteur : le vecteur a multiplier
 * Retour:		(Vecteur3D) resultat de la multiplication vectorielle
 ****************************************************************************/
Vecteur3D Vecteur3D::operator^  (const Vecteur3D &vecteur) const
{
	return Vecteur3D
		(
			y_*vecteur.z_ - z_*vecteur.y_,
			z_*vecteur.x_ - x_*vecteur.z_,
			x_*vecteur.y_ - y_*vecteur.x_
		);
}


/****************************************************************************
 * Fonction:	Vecteur3D::operator==
 * Description: Verifie si deux vecteur sont egaux
 * Paramètres:	- (Vecteur3D) vecteur : le vecteur a comparer
 * Retour:		(bool) si les deux vecteur sont egaux
 ****************************************************************************/
bool Vecteur3D::operator== (const Vecteur3D &vecteur) const
{
	if( x_ == vecteur.x_ && y_ == vecteur.y_ && z_ == vecteur.z_)
		return true;
	else
		return false;
}

/****************************************************************************
 * Fonction:	operator<<
 * Description: Surcharge de l'operateur de flux de sortie pour afficher
 *				les attributs d'un vecteur avec un certain formatage.
 * Paramètres:	- (ostream) out : le flux de sortie
 *				- (Vecteur3D) vecteur : le vecteur a afficher
 * Retour:		(ostream) pour l'appel en cascade
 ****************************************************************************/
ostream& operator<< ( ostream& out, const Vecteur3D &vecteur)
{
	out << '(' 
		<< vecteur.getX() << ", " 
		<< vecteur.getY() << ", " 
		<< vecteur.getZ() 
		<< ')';
	return out;
}