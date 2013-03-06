#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	Point3d p1; // constructeur par defaut (coordonnees (0,0,0) par defaut)
	Point3d p2(1, 2, 3); // constructeur par parametre (coordonnees (1,2,3))

	//Affichage des coordonnees:
	cout << "coordonnees du p1 ("<< p1.getX() << ", " <<  p1.getY() << ", " << p1.getZ() << ")\n" ;
	cout << "coordonnees du p2 ("<< p2.getX() << ", " << p2.getY() << ", " << p2.getZ() << ")\n" ;

	//on bouge le p1
	p1.move(10,20,30);

	//on reset le p2
	p2.reset();

	//Affichage des coordonnees:
	cout << "coordonnees du p1 ("<< p1.getX() << ", " << p1.getY() << ", " << p1.getZ() << ")\n" ;
	cout << "coordonnees du p2 ("<< p2.getX() << ", " << p2.getY() << ", " << p2.getZ() << ")\n" ;


}