/************************************************************************************
 * Fichier                  : entreprise.cpp
 * Auteur                   : Raphaël Beamonte
 * Description              : Implementation de la classe Entreprise
 * Date de creation         : Janvier 2013
 * Date de modification     : 20 fevrier 2013
 ************************************************************************************/

#include "entreprise.h"
#include <sstream>
#include <iomanip>


/**
 * CONSTRUCTEUR PAR DEFAUT
 */
Entreprise::Entreprise() : Individu(), nomEntreprise_("No name"),
				stagiairesCherches_(0), emploisProposes_(0) {
}

/**
 * CONSTRUCTEUR PAR PARAMETRES
 */
Entreprise::Entreprise(string nom, string prenom, string nomEntreprise,
				int stagiairesCherches, int emploisProposes):
				Individu(nom, prenom), nomEntreprise_(nomEntreprise),
				stagiairesCherches_(stagiairesCherches),
				emploisProposes_(emploisProposes) {

}

/**
 * DESTRUCTEUR
 */
Entreprise::~Entreprise() {

}

/**
 * METHODES GET
 */
string Entreprise::getNomEntreprise() const {
	return nomEntreprise_;
}

int Entreprise::getStagiairesCherches() const {
	return stagiairesCherches_;
}

int Entreprise::getEmploisProposes() const {
	return emploisProposes_;
}

/**
 * METHODES SET
 */
void Entreprise::setNomEntreprise(string nomEntreprise) {
	nomEntreprise_ = nomEntreprise;
}

void Entreprise::setStagiairesCherches(int stagiairesCherches) {
	stagiairesCherches_ = stagiairesCherches;
}

void Entreprise::setEmploisProposes(int emploisProposes) {
	emploisProposes_ = emploisProposes;
}

/**
 * METHODE D'AFFICHAGE
 */
string Entreprise::getString() const {
	stringstream afficher;
	afficher << setprecision(2) << fixed;
	
	afficher << "Entreprise: ";
	afficher << getPrenom() << " " << getNom();
	afficher << ", " << getNomEntreprise();
	afficher << " (" << getStagiairesCherches() << " stages, ";
	afficher << getEmploisProposes() << " emplois)";
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

double Entreprise::calculerPrixEntree() const
{
	return prixEntree*4;
}