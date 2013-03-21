/************************************************************************************
 * Fichier                  : professeur.cpp
 * Auteur                   : Raphaël Beamonte
 * Description              : Implementation de la classe Professeur
 * Date de creation         : Janvier 2013
 * Date de modification     : 20 fevrier 2013
 ************************************************************************************/

#include "professeur.h"
#include <sstream>

/**
 * CONSTRUCTEUR PAR DEFAUT
 */
Professeur::Professeur() : Individu(), departement_(""), bureau_("") {
}

/**
 * CONSTRUCTEUR PAR PARAMETRES
 */
Professeur::Professeur(string nom, string prenom, string departement,
				string bureau): Individu(nom, prenom),
				departement_(departement), bureau_(bureau) {

}

/**
 * DESTRUCTEUR
 */
Professeur::~Professeur() {

}

/**
 * METHODES GET
 */
string Professeur::getDepartement() const {
	return departement_;
}

string Professeur::getBureau() const {
	return bureau_;
}


/**
 * METHODES SET
 */
void Professeur::setDepartement(string departement) {
	departement_ = departement;
}

void Professeur::setBureau(string bureau) {
	bureau_ = bureau;
}

/**
 * METHODE D'AFFICHAGE
 */
string Professeur::getString() const {
	stringstream afficher;
	
	afficher << "Professeur: ";
	afficher << getPrenom() << " " << getNom();
	afficher << " (" << getDepartement() << ", Bureau ";
	afficher << getBureau() << ")";
	afficher << " - Prix: " << calculerPrixEntree() << " CAD";

	if (getNbVinsPreferes() > 0) {
		afficher << " - Vins: ";

		unsigned int i;
		for (i = 0; i < getNbVinsPreferes(); i++) {
			if (i > 0)
				afficher << ", ";
			afficher << getVinPrefere(i);
		}
	}

	return afficher.str();
}

double Professeur::calculerPrixEntree() const
{
	return prixEntree*2;
}