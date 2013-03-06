#include "Portefeuille.h"


Portefeuille::Portefeuille()
{
}

void Portefeuille::ajouterCarte(Carte* carte)
{
	cartes_.push_back(carte);
}

void Portefeuille::afficherCartes()
{
	cout << "Voici le contenu de votre portefeuille : " << endl << endl;
	for(unsigned int i=0; i < cartes_.size(); i++)
	{
		cout << "Proprietaire : " << cartes_[i]->getProprietaire() << endl;
		cout << "Fonction : " << cartes_[i]->getFonction() << endl;
		cout << endl;
	}
}