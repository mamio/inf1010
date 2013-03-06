/****************************************************************************
 * Fichier: Point.cpp
 * Auteur: Georges Abou-Khalil
 * Date: 2 sept 2008
 * Mise a jour : 11 mai 2011
 * Description: Implémentation de la classe Point
 ****************************************************************************/

#include "Point.h"


/****************************************************************************
 * Fonction: Point::Point
 * Description: Constructeur par défaut
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
Point::Point()
{
	cout << "Constructeur par defaut de Point" << endl;
	x_ = 0.0;
	y_ = 0.0;
}


/****************************************************************************
 * Fonction: Point::Point
 * Description: Constructeur par paramètres
 * Paramètres: - double x: valeur de x_ (IN)
 *             - double y: valeur de y_ (IN)
 * Retour: aucun
 ****************************************************************************/
Point::Point(double x, double y)
{
	x_ = x;
	y_ = y;

    cout << "Constructeur par parametre du Point ( "
         << x_ << " , " << y_ << " )" << endl;
}


/****************************************************************************
 * Fonction: Point::~Point
 * Description: Destructeur.
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
Point::~Point()
{
    cout << "Destructeur du Point ( "
         << x_ << " , " << y_ << " )" << endl;
}


/****************************************************************************
 * Fonction: Point::getX
 * Description: Retourne x_
 * Paramètres: aucun
 * Retour: (double) la valeur de x_
 ****************************************************************************/
double Point::getX() const
{
	return x_;
}


/****************************************************************************
 * Fonction: Point::getY
 * Description: Retourne y_
 * Paramètres: aucun
 * Retour: (double) la valeur de y_
 ****************************************************************************/
double Point::getY() const
{
	return y_;
}


/****************************************************************************
 * Fonction: Point::setX
 * Description: Modifie x_
 * Paramètres: - double x: la nouvelle valeur de x_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Point::setX(double x)
{
	x_ = x;
}


/****************************************************************************
 * Fonction: Point::setY
 * Description: Retourne y_
 * Paramètres: - double y: la nouvelle valeur de y_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Point::setY(double y)
{
	y_ = y;
}


/****************************************************************************
 * Fonction: Point::print
 * Description: Affiche le point.
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
void Point::print() const
{
	cout << "Point ( " << x_ << " , " << y_ << " )" << endl;
}
