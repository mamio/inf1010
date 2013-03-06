
#include "CarteEtudiante.h"
#include "CarteGrandMagasin.h"
#include "CarteBanque.h"

#include "Portefeuille.h"

int main (void)
{
	// Remplie le portefeuille

	Portefeuille louisVuitton;

	louisVuitton.ajouterCarte( new CarteEtudiante("Sylvestre Granger", "4578125") );
	louisVuitton.ajouterCarte( new CarteGrandMagasin("Sylvestre Granger", "Sears", "23.5") );
	louisVuitton.ajouterCarte( new CarteGrandMagasin("Anita O'Day", "Moores", "28.5") );
	louisVuitton.ajouterCarte( new CarteBanque("Sylvestre Granger", "Desjardins", "Visa", "19.5") );
	louisVuitton.ajouterCarte( new CarteBanque("George V", "Banque Royal", "Master Card", "18.7") );

	louisVuitton.afficherCartes();

	return 0;
}