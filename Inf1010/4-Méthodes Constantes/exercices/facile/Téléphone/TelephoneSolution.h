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

	int getNumero() const;			// methode d'acces
	void setNumero(int numero);

	int getPoste() const;			// methode d'acces
	void setPoste(int poste);

	void afficher() const;			// ne modifie pas le attributs

	bool appeler(int numero, int poste); // modifie la connexion
	Telephone* repondre() const;

private :
	bool enLigne_;
	Telephone* connexion_;
	int numero_;
	int poste_;
};

#endif