/************************************************************************************
 * Fichier                  : main.cpp
 * Auteur                   : 
 * Description              : Fichier principal de l'application
 * Date de creation         : 
 * Date de modification     : 
 ************************************************************************************/

#include <iostream>
#include <string>

#include "individu.h"
#include "vinsetfromages.h"
#include "professeur.h"
#include "entreprise.h"
#include "etudiant.h"

using namespace std;

int main() {
	// Creer un objet VinsEtFromages
	VinsEtFromages vinsEtFromages;
	// Creer quatre (4) etudiants differents
	Etudiant caribou("DeLaForet", "Caribou", "Genie Forestier", "DeLaMer", 15.50);
	Etudiant julien("Aymong", "Julien", "Genie Logiciel", "TOP_LEVEL_UNIT", 14.50);
	Etudiant marie("Mousse", "Marie", "Genie Logiciel", "Goddess", 10.50);
	Etudiant alex("Tremblex", "NOTHING", "Gamer", "AlwaysGamer", 14.50);

	// Leur ajouter à chacun un vin prefere
	caribou.addVin("Bordeau");
	julien.addVin("Cidre");
	marie.addVin("Porto");
	alex.addVin("Champagne");
	
	// Les ajouter à la liste des etudiants assistant au Vins & Fromages
	vinsEtFromages.addEtudiant(caribou);
	vinsEtFromages.addEtudiant(julien);
	vinsEtFromages.addEtudiant(marie);
	vinsEtFromages.addEtudiant(alex);

	// Creer deux (2) professeurs
	Professeur samuel("Kadoury", "Samuel", "Polymorphisme", "4.405", 10.50);
	Professeur jerome("Collin", "Jerome", "Robotisme", "I.Robot", 6.00);

	// Leur ajouter à chacun deux vins preferes
	samuel.addVin("Champagne");
	samuel.addVin("Mousseux");
	jerome.addVin("Vin d'epicerie");
	jerome.addVin("Perrier");

	// Supprimer le premier vin prefere ajoute au premier professeur
	samuel.delVin("Champagne");

	// Les ajouter à la liste des professeurs assistant au Vins & Fromages
	vinsEtFromages.addProfesseur(samuel);
	vinsEtFromages.addProfesseur(jerome);

	// Creer cinq (5) representants d'entreprises
	Entreprise google("Google",2,1,"Simonneau","Simon", 40.00);
	Entreprise microsoft("Microsoft", 12, 100, "Gates", "Bill", 40.00);
	Entreprise matrox("Matrox", 0, 0, "", "Neo", 40.00);
	Entreprise behaviour("Behavior", 5, 15, "Behemoth", "Harald", 40.00);
	Entreprise ubisoft("Ubisoft", 20, 20, "Man", "Ray", 0);

	// Leur ajouter à chacun un vin prefere, excepte au premier
	microsoft.addVin("Champagne");
	matrox.addVin("Jus");
	behaviour.addVin("Liqueur");
	ubisoft.addVin("Bordeau");

	// Les ajouter à la liste des representants d'entreprises assistant au Vins & Fromages
	vinsEtFromages.addEntreprise(google);
	vinsEtFromages.addEntreprise(microsoft);
	vinsEtFromages.addEntreprise(matrox);
	vinsEtFromages.addEntreprise(behaviour);
	vinsEtFromages.addEntreprise(ubisoft);

	// Supprimer le troisieme (3eme) etudiant, le premier (1er) professeur et les
	// representants d'entreprises deux (2) et quatre (4)
	vinsEtFromages.delEtudiant(3);
	vinsEtFromages.delProfesseur(1);
	vinsEtFromages.delEntreprise(2);
	vinsEtFromages.delEntreprise(4);

	// Afficher la liste des personnes qui seront presentes au
	// Vins & Fromages en utilisant la methode afficherPresents()
	vinsEtFromages.afficherPresents();


	// Afficher la liste de tous les individus qui seront presents au
	// Vins & Fromages en utilisant la methode afficherIndividus()
	vinsEtFromages.afficherIndividus();
	system("pause");
	return 0;
}
/************************************************************************************/
/*Réponse a la question                                                             */
/*Dans la classe afficher individus, nous voulons seulement afficher les attributs  */
/*des différents individus sans afficher les attributs des classes hérités dont ils */
/*appartient, ils faut donc oublier le fait qu'ils ne sont pas que des individus.   */
/*Cependant, le prix differe tout de meme, meme si les invites sont tous considérer */
/*comme des individus, ils gardent leur prix spécifique à chacun et à chacune des   */
/*classes dont elles appartiennent et non celui des individus par défaut.           */
/************************************************************************************/