/****************************************************************************
 * Fichier: Disque.h
 * Auteur: William Bussiere
 * Date: 13 juin 2011
 * Description: Definition de la classe Disque
 ****************************************************************************/

#ifndef _DISQUE_H_
#define _DISQUE_H_

#include <string>
using namespace std;

class Disque
{
public :
	Disque(const string& titre);
	
	void setTitre(const string& titre);
	string getTitre() const;

	void setSamples(char* samples, unsigned int duree);
	char* getSamples() const;
	unsigned int getDuree() const;

private :
	string titre_;
	char* samples_;
	unsigned int duree_;
};

#endif