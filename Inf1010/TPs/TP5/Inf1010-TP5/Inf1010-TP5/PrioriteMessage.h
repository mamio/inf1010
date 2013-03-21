/************************************************************************************
 * Fichier                  : Matrice.h
 * Auteur                   : Marie-France et Ordic
 * Description              : Fichier d'en-tete de la classe Matrice
 * Date de creation         : 11 mars 2013
 * Date de modification     : 11 mars 2013
 ************************************************************************************/


#ifndef PRIORITEMESSAGE_H
#define PRIORITEMESSAGE_H

#include <iostream>
#include "Message.h"
using namespace std;

class PrioriteMessages
{
public:
	bool operator()(const Message* a, const Message* b)
	{
		return (a->getPriorite() > b->getPriorite());
	}
};

#endif