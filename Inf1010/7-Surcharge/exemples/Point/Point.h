/****************************************************************************
 * Fichier: Point.h
 * Auteur: Georges Abou-Khalil
 * Date: 2 sept 2008
 * Mise a jour : 12 mai 2011
 * Description: Définition de la classe Point
 ****************************************************************************/

#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
using namespace std;

class Point
{
public:
	Point();
	Point(double x, double y);
    ~Point();

	double getX() const;
	double getY() const;

	void setX(double x);
	void setY(double y);

    void print();

    // Exemple d'opérateur défini à l'intérieur de la classe.
    Point operator+ ( const Point& point ) const;
    // Exemple d'opérateur booléen
    bool operator< (const Point& point ) const;

private:
	double x_;
	double y_;
};


// Exemple d'operateur défini à l'extérieur de la classe sans friend
Point operator* ( const Point& p1 , const Point& p2 );
// Exemple de surcharge de l'opérateur de flux.
ostream& operator <<( ostream& out , const Point& point );


#endif // _POINT_H_
