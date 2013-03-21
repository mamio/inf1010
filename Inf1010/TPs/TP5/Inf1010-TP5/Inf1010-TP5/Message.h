/************************************************************************************
 * Fichier                  : Message.h
 * Auteur                   : Marie-France et Ordic
 * Description              : Fichier d'en-tete de la classe Message
 * Date de creation         : 11 mars 2013
 * Date de modification     : 11 mars 2013
 ************************************************************************************/

#include <string>
#include <iostream>
#include "Matrice.h"

#ifndef MESSAGE_H
#define MESSAGE_H

class Message
{
public:
	Message();
	Message(string nomExpediteur, string nomDestinataire, int priorite);
	~Message();
	string getExpediteur() const;
	string getDestinataire() const;
	int getPriorite() const;
	void setExpediteur(string nomExpediteur);

	friend std::ostream& operator<<( std::ostream& ostr, const Message& m );
	
private:
	Matrice<float>* matrice_;
	string nomExpediteur_;
	string nomDestinataire_;
	int priorite_;
};
#endif