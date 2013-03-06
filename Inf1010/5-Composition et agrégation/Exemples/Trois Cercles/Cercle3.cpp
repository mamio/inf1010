/****************************************************************************
 * Fichier: Cercle3.h
 * Auteur: Martin Bisson
 * Date: 9 sept 2009
 * Mise a jour : 11 mai 2011
 * Description: Implémentation de la classe Cercle3
 ****************************************************************************/

#include "Cercle3.h"


/****************************************************************************
 * Fonction: Cercle3::Cercle3
 * Description: Constructeur par défaut
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
Cercle3::Cercle3()
	: point_( new Point ) , radius_( 0.0 )
{
	cout << "Constructeur par defaut de Cercle3" << endl;
}

/****************************************************************************
 * Fonction: Cercle3::Cercle3
 * Description: Constructeur par paramètres
 * Paramètres: - double x: valeur de x_ (IN)
 *             - double y: valeur de y_ (IN)
 *             - double radius: valeur de radius_ (IN)
 * Retour: aucun
 ****************************************************************************/
Cercle3::Cercle3(double x, double y, double radius)
	: point_( new Point(x,y) ) , radius_( radius )
{
    cout << "Constructeur par parametre du Cercle3 : ";
    print();
}

/****************************************************************************
 * Fonction: Cercle3::~Cercle3
 * Description: Destructeur.
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
Cercle3::~Cercle3()
{
    cout << "Destructeur du Cercle3 : ";
    print();

    delete point_;
    point_ = 0;
}

/****************************************************************************
 * Fonction: Cercle3::getX
 * Description: Retourne l'abscisse du centre du cercle
 * Paramètres: aucun
 * Retour: (double) la valeur de l'abscisse du centre du cercle
 ****************************************************************************/
double Cercle3::getX() const
{
	return point_->getX();
}

/****************************************************************************
 * Fonction: Cercle3::getY
 * Description: Retourne l'ordonnée du centre du cercle
 * Paramètres: aucun
 * Retour: (double) la valeur de l'ordonnée du centre du cercle
 ****************************************************************************/
double Cercle3::getY() const
{
	return point_->getY();
}

/****************************************************************************
 * Fonction: Cercle3::getRadius
 * Description: Retourne le rayon du cercle
 * Paramètres: aucun
 * Retour: (double) la valeur du rayon du cercle
 ****************************************************************************/
double Cercle3::getRadius() const
{
	return radius_;
}

/****************************************************************************
 * Fonction: Cercle3::print
 * Description: Affiche le cercle.
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
void Cercle3::print() const
{
	cout << "Cercle3 de centre ( " << getX() << " , " << getY()
         << " ) et de rayon " << getRadius() << endl;
}
