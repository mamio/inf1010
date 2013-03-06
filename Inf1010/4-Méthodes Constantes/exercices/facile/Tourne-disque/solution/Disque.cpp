/****************************************************************************
 * Fichier: Disque.cpp
 * Auteur: William Bussiere
 * Date: 13 juin 2011
 * Description: Implementation de la classe Disque
 ****************************************************************************/

#include "Disque.h"

Disque::Disque(const string& titre)
	: titre_(titre), samples_(0), duree_(0)
{
}



void Disque::setTitre(const string& titre)
{
	titre_ = titre;
}



string Disque::getTitre() const
{
	return titre_;
}



void Disque::setSamples(char* samples, unsigned int duree)
{
	samples_ = samples;
	duree_ = duree;
}



char* Disque::getSamples() const
{
	return samples_;
}



unsigned int Disque::getDuree() const
{
	return duree_;
}


