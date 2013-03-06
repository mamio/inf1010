/****************************************************************************
 * Fichier: Local.h
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Definition de la classe Local
 ****************************************************************************/

#ifndef _LOCAL_H_
#define _LOCAL_H_

#include <iostream>
#include <string>
using namespace std;


class Local
{
public :
	Local();
	Local(const string &type, const string &numeroDePorte);
	~Local();

	void setType(string type);
	string getType() const;
	void setNumeroDePorte(string no);
	string getNumeroDePorte() const;

private :
	string type_;
	string numeroDePorte_;
};

#endif