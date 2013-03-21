/************************************************************************************
 * Fichier                  : Matrice.h
 * Auteur                   : Marie-France et Ordic
 * Description              : Fichier d'en-tete de la classe Matrice
 * Date de creation         : 11 mars 2013
 * Date de modification     : 11 mars 2013
 ************************************************************************************/
#include <iostream>
using namespace std;

#ifndef MATRICE_H
#define MATRICE_H

template<typename T>
class Matrice
{
public:

	Matrice();
	Matrice(int nbLignes, int nbColonnes);
	Matrice(const Matrice<T>& uneMatrice);
	~Matrice();

	T& operator()(int nbLignes, int nbColonnes) const;

	template<typename T2>
	friend std::ostream& operator<<( std::ostream& ostr, const Matrice<T2>& m );
	template<typename T2>
	friend std::istream& operator>>( std::istream& is, Matrice<T2>& m );
private:
	int nbLignes_;
	int nbColonnes_;
	T** donnees_;

};

	template<typename T>
	Matrice<T>::Matrice()
	{
		nbLignes_ = 3;
		nbColonnes_ = 3;
		donnees_ = new T*[nbLignes_];
		for(int i = 0; i < nbLignes_; i++)
		{
			donnees_[i] = new T[nbColonnes_];
		}
	}

	template<typename T>
	Matrice<T>::Matrice(int nbLignes, int nbColonnes)
	{
		nbLignes_ = nbLignes;
		nbColonnes_ = nbColonnes;
		donnees_ = new T*[nbLignes];
		for(int i = 0; i < nbLignes; i++)
		{
			donnees_[i] = new T[nbColonnes];
		}
	}
	
	template<typename T>
	Matrice<T>::Matrice( const Matrice <T>& uneMatrice)
	{
		nbLignes_ = uneMatrice.nbLignes_;
		nbColonnes_ = uneMatrice.nbColonnes_;
		donnees_ = new T*[uneMatrice.nbLignes_];
		for(int i = 0; i < uneMatrice.nbLignes_; i++)
		{
			donnees_[i] = new T[uneMatrice.nbColonnes_];
			for(int j = 0; j < nbColonnes_; j++)
			{
				donnees_[i][j] = uneMatrice.donnees_[i][j];
			}
		}
	}

	template<typename T>
	Matrice<T>::~Matrice()
	{
		for (int i = 0; i < nbLignes_; i++)
		{
				delete donnees_[i];
		}
	}

	template<typename T>
	T& Matrice<T>::operator()(int nbLignes, int nbColonnes) const
	{
		if (nbLignes > nbLignes_ || nbColonnes > nbColonnes_)
			cout << "Les parametres sont au dela de la matrice" << endl;
		else 
			return donnees_[--nbLignes][--nbColonnes];	
	}

	template<typename T2>
	std::ostream& operator<<( std::ostream& ostr, const Matrice<T2>& m )
	{
		for(int i = 0; i < m.nbLignes_; i++)
		{
			for(int j = 0; j < m.nbColonnes_; j++)
			{
				ostr << m.donnees_[i][j] << '\t'; 
			}
			ostr << endl;
		}
		ostr << endl;
		return ostr;
	}

	/***********************************************************************/
/* Nom: operator>>                                                         */
/* Description: Puisqu'il n'existe pas de fonction cin pour un objet       */
/*              matrice, la surcharge de l'opérateur << était nécessaire  */
/*              afin de réaliser cette action                              */
/* Parametres: is (OUT) : Une référence vers la librairie iostream         */
/*              m (OUT) : Un objet de type Matrice                         */
/* Valeur de retour: std::istream&                                         */
/* Remarque:    											
*/
/*                     													   */
/***************************************************************************/

	template<typename T2>
	std::istream& operator>>( std::istream& is, Matrice<T2>& m )
	{
		for(int i = 0; i < m.nbLignes_; i++)
		{
			for(int j = 0; j < m.nbColonnes_; j++)
			{
				is >> m.donnees_[i][j];
			}
		}
		return is;
	}

#endif