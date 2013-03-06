/****************************************************************************
 * Fichier: polygone.cpp
 * Auteur: Inconnu
 * Date: 
 * Mise a jour : 6 juin 2011
 * Description: Definition de la classe Polygone
 ****************************************************************************/

#include "polygone.h"



Polygone::Polygone()
	: points_()	// Constructeur par defaut d'un vecteur
{
	cout << "Construction d'un polygone" << endl;
}



Polygone::~Polygone()
{
	cout << "Destruction d'un polygone" << endl;

	for(unsigned int i=0; i< points_.size(); i++)
		delete points_[i];
}



void Polygone::ajouterPoint(double x, double y, double z)
{
	points_.push_back( new Point3d(x, y, z) );
}



void Polygone::afficher() const
{
	cout << "Les points du polygone : " << endl;

	for(unsigned int i=0; i< points_.size(); i++)
		cout << "   (" 
			<< points_[i]->getX() << ", "
			<< points_[i]->getY() << ", "
			<< points_[i]->getZ() << ")"
		<< endl;
}

// D)

// Constructeur de copie
Polygone::Polygone(const Polygone &polygone)
{
	for(unsigned int i=0; i< polygone.points_.size(); i++)
		points_.push_back( new Point3d
		(
			polygone.points_[i]->getX(),
			polygone.points_[i]->getY(),
			polygone.points_[i]->getZ()
		));
}


Polygone& Polygone::operator= (const Polygone& polygone)
{
	if(this != &polygone)
	{
			for(unsigned int i=0; i< polygone.points_.size(); i++)
				points_.push_back( new Point3d
				(
					polygone.points_[i]->getX(),
					polygone.points_[i]->getY(),
					polygone.points_[i]->getZ()
				));
	}

	return *this;
}

