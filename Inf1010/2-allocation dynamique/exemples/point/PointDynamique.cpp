/****************************************************************************
 * Fichier: PointDynamique.cpp
 * Auteur: Georges Abou-Khalil
 * Date: 2 sept 2008
 * Mise a jour : 16 mai 2011
 * Description: Implémentation de la classe PointDynamique
 ****************************************************************************/

#include "PointDynamique.h"


/****************************************************************************
 * Fonction:	PointDynamique::PointDynamique
 * Description: Constructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
PointDynamique::PointDynamique()
{
	cout << "Constructeur par defaut de PointDynamique" << endl;
    point_ = new Point;
}

/****************************************************************************
 * Fonction:	PointDynamique::PointDynamique
 * Description: Constructeur par paramètres
 * Paramètres:	- (double) x: valeur de x_ (IN)
 *				- (double) y: valeur de y_ (IN)
 * Retour:		aucun
 ****************************************************************************/
PointDynamique::PointDynamique(double x, double y)
{
    cout << "Constructeur par parametre du PointDynamique ( "
         << x << " , " << y << " )" << endl;
    point_ = new Point( x , y );
}

/****************************************************************************
 * Fonction:	PointDynamique::~PointDynamique
 * Description: Destructeur.
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
PointDynamique::~PointDynamique()
{
    double x = point_->getX();
    double y = point_->getY();
    delete point_;
    cout << "Destructeur du PointDynamique ( "
         << x << " , " << y << " )" << endl;
}

/****************************************************************************
 * Fonction:	PointDynamique::getX
 * Description: Retourne x_
 * Paramètres:	aucun
 * Retour:		(double) la valeur de x_
 ****************************************************************************/
double PointDynamique::getX()
{
	return point_->getX();
}

/****************************************************************************
 * Fonction:	PointDynamique::getY
 * Description: Retourne y_
 * Paramètres:	aucun
 * Retour:		(double) la valeur de y_
 ****************************************************************************/
double PointDynamique::getY()
{
	return point_->getY();
}

/****************************************************************************
 * Fonction:	PointDynamique:setX
 * Description: Modifie x_
 * Paramètres:	- (double) x: la nouvelle valeur de x_ (IN)
 * Retour:		aucun
 ****************************************************************************/
void PointDynamique::setX(double x)
{
    point_->setX(x);
}

/****************************************************************************
 * Fonction:	PointDynamique:setY
 * Description: Retourne y_
 * Paramètres:	- (double) y: la nouvelle valeur de y_ (IN)
 * Retour:		aucun
 ****************************************************************************/
void PointDynamique::setY(double y)
{
	point_->setY(y);
}

/****************************************************************************
 * Fonction:	PointDynamique::print
 * Description: Affiche le point_.
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void PointDynamique::print()
{
    point_->print();
}
