/****************************************************************************
 * Fichier: Telephone.h
 * Auteur: William Bussiere
 * Date: 13 juin 2011
 * Description: Definition de la classe Telephone
 ****************************************************************************/

#ifndef _TELEPHONE_H_
#define _TELEPHONE_H_

class Telephone
{
public :
	Telephone();
	~Telephone();
	int getNumero() const;
	int getPoste() const;
	void setNumero(int numero);
	void setPort(int poste);
	void afficher() const;
	bool appeler(int numero, int poste);
	Telephone* repondre() const;

private :
	Telephone* connexion_;
	int numero_;
	int poste_; 
};

#endif