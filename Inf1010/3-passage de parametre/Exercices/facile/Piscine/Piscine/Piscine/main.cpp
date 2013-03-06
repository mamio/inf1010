/****************************************************************************
 * Fichier: main.cpp
 * Auteur: William Bussiere
 * Date: 15 juin 2011
 * Description: Exercice sur le passage de parametres (piscine)
 ****************************************************************************/

#include <iostream>
using namespace std;

class Piscine
{
public :
	Piscine(double capaciteL) { capaciteL_ = capaciteL; quantiteEauL_ = 0.0; estSale_ = false; }

	double getCapacite() 		{ return capaciteL_;}
	double getQuantiteEauL() 	{ return quantiteEauL_;}
	bool   estSale()			{ return estSale_;}

	void ajouterEau(double litres)	{ quantiteEauL_ += litres;}
	void vider()					{ quantiteEauL_ = 0.0;}
	void setSalete(bool estSale)	{ estSale_ = estSale;}

private :
	double capaciteL_;
	double quantiteEauL_;
	bool estSale_;
};


void remplirPiscine(Piscine& piscine)
{
	cout << "Arrangement printanier de la piscine" << endl;

	if( piscine.estSale() )
	{
		piscine.vider();
		piscine.setSalete(false); // On lave
	}

	piscine.ajouterEau( piscine.getCapacite() );
}

void passerHiver(Piscine& piscine)
{
	cout << "La piscine passe un hiver dehors" << endl;
	piscine.ajouterEau( piscine.getQuantiteEauL()/2 );
	piscine.setSalete(true);
}

bool baignable(Piscine& piscine)
{
	cout << "Inspection de la piscine" << endl;

	if( piscine.estSale() )
		return false;
	else if (piscine.getQuantiteEauL() < piscine.getCapacite()*0.9)
		return false;
	else if (piscine.getQuantiteEauL() > piscine.getCapacite()*1.1)
		return false;

	return true;
}


int main()
{
	// Construction d'une piscine
	Piscine piscine( 51.38 );

	remplirPiscine( piscine );
	passerHiver( piscine );
	cout << endl;
	
	if( baignable(piscine) )
		cout << "Les enfants se baignent" << endl;
	else
	{
		remplirPiscine(piscine);
		if( baignable(piscine) )
			cout << "Les enfants se baignent" << endl;
		else
			cout << "La piscine est inutilisable" << endl;
	}

	return 0;
}