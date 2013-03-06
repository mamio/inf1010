/****************************************************************************
 * Fichier: Siege.h
 * Auteur: William Bussiere
 * Date: 6 juin 2011
 * Description: Definition de la classe Siege
 ****************************************************************************/

#ifndef _SIEGE_H_	// Compilation guards
#define _SIEGE_H_

#include <string>
using namespace std;

class Siege
{
public :
	// Constructeur par defaut
	Siege();

	// Constructeur par parametre
	Siege(int nbPers, int nbPattes, string nom);

	// Destructeur
	~Siege();			// Le destructeur ne peut pas avoir de parametres

	// Methodes d'acces
	int getNbPersonnes() const; // On verra le mot clef const plus tard
	int getNbPattes() const;	// dans ce contexte
	string getNomCommun() const;

	// Methodes de modification
	void setNbPersonnes(int nbPers);
	void setNbPattes(int nbPattes);
	void setNomCommun(string nom);

private :
	// Attributs
	int nbPersonnes_;		// Convention en suffix : _
	int nbPattes_;
	string nomCommun_;

};

#endif // _SIEGE_H_