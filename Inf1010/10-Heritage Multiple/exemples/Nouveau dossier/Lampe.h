/****************************************************************************
 * Fichier: Lampe.h
 * Auteur: William Bussiere
 * Date: 25 mai 2011
 * Description: Definition de la classe Lampe
 ****************************************************************************/

#ifndef _LAMPE_H_
#define _LAMPE_H_

#include <iostream>
using namespace std;


class Lampe
{
public :
	Lampe();
	virtual ~Lampe();

	void allumer();
	void eteindre();
	virtual void eclairer();

	bool estAllumee() const;

private :
	bool estAllumee_;
};

#endif