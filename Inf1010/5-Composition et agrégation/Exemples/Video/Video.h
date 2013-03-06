/****************************************************************************
 * Fichier: Video.h
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 18 janvier 2010
 * Mise a jour : 12 mai 2011
 * Description: Définition de la classe Video
 ****************************************************************************/

#ifndef _VIDEO_H_
#define _VIDEO_H_

#include "Image.h"

#include <string>
using namespace std;

class Video
{
public:
	Video(); //contructeur
	~Video(); // destructeur

	// méthodes de modification
	bool setNbImagesSec(float nbImagesSec);
	bool setImage(Image* image, int position);
	bool setDuree(float duree);
	void setNom(string nom);

	// méthodes d'accès
	float  getNbImagesSec() const;
	Image* getImage(int position) const;
	float  getDuree() const;
	string getNom() const;

private:
	//Attributs
	float nbImagesSec_;
	Image* image_[10]; //Agrégation et la video peut contenir 10 images (!)
	float duree_;
	string nom_;

};


#endif // _VIDEO_H_
