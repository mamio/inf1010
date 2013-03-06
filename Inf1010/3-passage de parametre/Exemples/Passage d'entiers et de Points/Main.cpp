/****************************************************************************
 * Fichier: Main.cpp
 * Auteur: Martin Bisson
 * Date: 3 sept 2009
 * Mise a jour : 11 mai 2011
 * Description: Programme principale plus queslques fonctions globales
 ****************************************************************************/

#include "Point.h"

#include <iostream>
using namespace std;


// Fonctions tests sur des entiers

void carreParValeur( int a )
{
    a = a * a;
}

void carreParAdresse( int *a )
{
    (*a) = (*a) * (*a);
}

void carreParReference( int &a )
{
    a = a * a;
}



// Fonctions tests sur des points

void interchangerParValeur( Point p )
{
    double x = p.getX();
    double y = p.getY();

    p.setX( y );
    p.setY( x );
}

void interchangerParAdresse( Point *p )
{
    double x = p->getX();
    double y = p->getY();

    p->setX( y );
    p->setY( x );
}

void interchangerParReference( Point &p )
{
    double x = p.getX();
    double y = p.getY();

    p.setX( y );
    p.setY( x );
}


int main()
{
    // Cet exemple démontre le passage de paramètres de différentes façons en
    // utilisant un entier.

    cout << "Test sur un entier" << endl << endl;

	int valeur = 5;
    cout << "Avant les appels : " << valeur << endl;

    carreParValeur( valeur );
    cout << "Apres l'appel par valeur : " << valeur << endl;

    carreParAdresse( &valeur );
    cout << "Apres l'appel par adresse : " << valeur << endl;

    carreParReference( valeur );
    cout << "Apres l'appel par reference : " << valeur << endl;
    cout << endl << endl << endl;


    // Cet exemple démontre le passage de paramètres de différentes façons en
    // utilisant un objet de type Point.

    cout << "Test sur un objet" << endl << endl;

    Point p1( 1.0 , 2.0 );
    interchangerParValeur( p1 );
    cout << "Point par valeur : " << endl;
    p1.print();


    Point p2( 1.0 , 2.0 );
    interchangerParAdresse( &p2 );
    cout << "Point par adresse : " << endl;
    p2.print();


    Point p3( 1.0 , 2.0 );
    interchangerParReference( p3 );
    cout << "Point par reference : " << endl;
    p3.print();
    cout << endl << endl << endl;

    return 0;
}