/****************************************************************************
 * Fichier: Video.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 18 janvier 2010
 * Mise a jour : 12 mai 2011
 * Description: Implémentation de la classe Video
 ****************************************************************************/

#include "Video.h"


/****************************************************************************
 * Fonction:	Video::Video
 * Description: Constructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Video::Video()
	:nom_("Sans titre"),duree_(0),nbImagesSec_(0)
{
	// Initialise les pointeurs à zéro
	for(int i=0;i<10;i++) 
		image_[i]=0;

	cout << "Constructeur par defaut (Video)" << endl;
}


/****************************************************************************
 * Fonction:	Video:~Video
 * Description: Destructeur par défaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
Video::~Video()
{
	for(int i=0;i<10;i++)
		image_[i]=0;
}


/****************************************************************************
 * Fonction:	Video::setNbImagesSec
 * Description: Modifie nbImagesSec_
 * Paramètres:	- (float) nbImagesSec : nouvelle valeur de nbImagesSec_ (IN)
 * Retour:		(bool) Succès ou échec
 ****************************************************************************/
bool Video::setNbImagesSec(float nbImagesSec)
{
	if(nbImagesSec>0)
	{
		nbImagesSec_=nbImagesSec;
		return true;
	}

	return false;
}


/****************************************************************************
 * Fonction:	Video::setImage
 * Description: Modifie image_
 * Paramètres:	- (Image*) image : Une nouvelle image_ (IN)
 *				- (int) position : La position de l'image dans le tableau (IN)
 * Retour:		(bool) Succès ou échec
 ****************************************************************************/
bool Video::setImage(Image* image, int position)
{
	if(position>=0 && position <10)
	{
		image_[position]=image;
		return true;
	}

	return false;
}

	
/****************************************************************************
 * Fonction:	Video::setDuree
 * Description: Modifie duree_
 * Paramètres:	- (float) duree: la nouvelle valeur de duree_ (IN)
 * Retour:		(bool) Succès ou échec
 ****************************************************************************/
bool Video::setDuree(float duree)
{
	if(duree>0)
	{
		duree_=duree;
		return true;
	}

	return false;
}


/****************************************************************************
 * Fonction:	Video::setNom
 * Description: Modifie nom_
 * Paramètres:	- (float) nom: la nouvelle valeur de nom_ (IN)
 * Retour:		(bool) Succès ou échec
 ****************************************************************************/
void Video::setNom(string nom)
{
	nom_=nom;
}


/****************************************************************************
 * Fonction:	Video::getNbImagesSec
 * Description: Retourne nbImagesSec_
 * Paramètres:	aucun
 * Retour:		(float) la valeur de nbImagesSec_
 ****************************************************************************/
float Video::getNbImagesSec() const
{
	return nbImagesSec_;
}


/****************************************************************************
 * Fonction:	Video::getImage
 * Description: Retourne image_ à position
 * Paramètres:	- (int) position: la position de l'image dans la video (IN)
 * Retour:		(Image*) la valeur de image_
 ****************************************************************************/
Image* Video::getImage(int position) const
{
	if(position>=0 && position<10)
		return image_[position];
	else
		return 0;
}


/****************************************************************************
 * Fonction:	Video::getDuree
 * Description: Retourne duree_
 * Paramètres:	aucun
 * Retour:		(float) la valeur de duree_
 ****************************************************************************/	
float Video::getDuree() const
{
	return duree_;
}


/****************************************************************************
 * Fonction:	Video::getNom
 * Description: Retourne nom_
 * Paramètres:	aucun
 * Retour:		(string) la valeur de nom_
 ****************************************************************************/
string Video::getNom() const
{
	return nom_;
}
