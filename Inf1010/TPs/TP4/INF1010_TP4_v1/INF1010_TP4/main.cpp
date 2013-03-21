/************************************************************************************
 * Fichier                  : main.cpp
 * Auteur                   : Benjamin De Leener
 * Description              : Fichier principal de l'application
 * Date de creation         : Février 2013
 * Date de modification     : Février 2013
 ************************************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include "individu.h"
#include "etudiant.h"
#include "entreprise.h"
#include "professeur.h"
#include "vinsetfromages.h"

#define LECTURE_S fichier >> fichierLu_S
#define LECTURE_I fichier >> fichierLu_I
#define IN
#define OUT


using namespace std;

void lectureEntreprise(IN ifstream &fichier, OUT Entreprise& entreprise);
void lectureProfesseur(IN ifstream &fichier, OUT Professeur& professeur);
void lectureEtudiant(IN ifstream &fichier, OUT Etudiant& etudiant);

int main() {
	
	//Initialisations
	string fichierLu_S;
	
	vector<Individu*> individus;

	// Créer dynamiquement un objet vinsEtFromages
	VinsEtFromages* vinsEtFromages = new VinsEtFromages;

	// Lecture d'un fichier individus.txt pour insérer des individus dans le vecteur individus
	// L'affichage des nouveaux individus est obligatoire
	ifstream fichier("individus.txt");
	if (fichier.fail()){
		cout << "Erreur d'ouverture";
		return 0;
	}

	for (;;){
		LECTURE_S;
		//If-ElseIf chain pour savoir quelle fonction appeler
		if (fichierLu_S == "Entreprise"){
			//Creation d'un nouveau pointeur entreprise
			Entreprise* entreprise = new Entreprise;
			//Appel de la fonction LectureEntreprise, qui gere la lecture des individus a partir d'un fichier
			lectureEntreprise(fichier, *entreprise);
			//Ajout de l'entreprise au vecteur 'individus'
			individus.push_back(entreprise);
			//Mise du pointeur a null afin que l'objet pointe par le vecteur ne sois pas detruit
			entreprise = 0;
		}
		else if (fichierLu_S == "Professeur"){
			//Creation d'un nouveau pointeur professeur
			Professeur* professeur = new Professeur;
			//Appel de la fonction LectureEntreprise, qui gere la lecture des individus a partir d'un fichier
			lectureProfesseur(fichier, *professeur);
			//Ajout de l'entreprise au vecteur 'individus'
			individus.push_back(professeur);
			//Mise du pointeur a null afin que l'objet pointe par le vecteur ne sois pas detruit
			professeur = 0;
		}
		else if (fichierLu_S == "Etudiant"){
			//Creation d'un nouveau pointeur etudiant
			Etudiant* etudiant = new Etudiant;
			//Appel de la fonction LectureEntreprise, qui gere la lecture des individus a partir d'un fichier
			lectureEtudiant(fichier, *etudiant);
			//Ajout de l'entreprise au vecteur 'individus'
			individus.push_back(etudiant);
			//Mise du pointeur a null afin que l'objet pointe par le vecteur ne sois pas detruit
			etudiant = 0;
		}
		else if (fichierLu_S == "stop"){
			//au lieu de tester fichier.fail(), on fournit un mot de fin
			cout << "Fin d'ajout des individus" << endl << endl;
			//Fermeture du fichier
			fichier.close();
			break;
		}
		else {
			//Si le fichier texte ne suis pas le modele donne au tp
			cout << "Mauvais format de fichier";
			return 0;
		}
	}

	// Remplir la classe vinsEtFromages d'individus à l'aide de la méthode addIndividu() depuis le vecteur d'individus
	
	for (unsigned int i = 0 ; i < individus.size() ; i++)
	{
		vinsEtFromages->addIndividu(individus[i]);
	}
	vinsEtFromages->afficherPresents();

	// Ajouter des vins aux individus de vinsEtFromages en utilisant la méthode getIndividu(nom,prenom) en en lisant le fichier vinsPreferes.txt
	fichier.open("vinsPreferes.txt");
	if (fichier.fail()){
		cout << "Erreur d'ouverture";
		return 0;
	}
	string ajoutVins[3];
	for (;;)
	{
		fichier >> ajoutVins[0];
		if (ajoutVins[0] == "stop"){
			cout << "Fin de l'ajout de vins preferes" << endl << endl;
			break;
		}
		fichier >> ajoutVins[1] >> ajoutVins[2];
		(vinsEtFromages->getIndividu(ajoutVins[0],ajoutVins[1])).addVinPrefere(ajoutVins[2]);
	}
	

	// Afficher la liste des personnes qui seront présentes au
	// Vins & Fromages en utilisant la méthode afficherIndividus()
	vinsEtFromages->afficherIndividus();

	// Afficher la liste des personnes qui seront présentes au
	// Vins & Fromages en utilisant la méthode afficherPresents()
	vinsEtFromages->afficherPresents();

	// Désallouer la mémoire :
	// Supprimer les individus du vecteur individus
	if (vinsEtFromages->getListeIndividus().size() > 0)
	{
		vinsEtFromages->getListeIndividus().clear();
	}

	// Supprimer l'objet vinsEtFromages

	vinsEtFromages->~VinsEtFromages();

	system("pause");
	return 0;
}


void lectureEntreprise(IN ifstream &fichier, OUT Entreprise& entreprise)
{
	string fichierLu_S;
	int fichierLu_I;
	cout << "Ajout d'une nouvelle entreprise :" <<endl;
	LECTURE_S;
	cout << "\tNom : " << fichierLu_S <<endl;
	entreprise.setNom(fichierLu_S);
	LECTURE_S;
	cout << "\tPrenom : " << fichierLu_S <<endl;
	entreprise.setPrenom(fichierLu_S);
	LECTURE_S;
	cout << "\tNom de l'entreprise : " << fichierLu_S <<endl;
	entreprise.setNomEntreprise(fichierLu_S);
	LECTURE_I;
	cout << "\tNombre de stagiaires recherches : " << fichierLu_I <<endl;
	entreprise.setStagiairesCherches(fichierLu_I);
	LECTURE_I;
	cout << "\tNombre d'emplois proposes : " << fichierLu_I <<endl << endl;
	entreprise.setEmploisProposes(fichierLu_I);
	return;
}

void lectureProfesseur(IN ifstream &fichier, OUT Professeur& professeur)
{
	string fichierLu_S;
	cout << "Ajout d'un nouveau professeur :" <<endl;
	LECTURE_S;
	cout << "\tNom : " << fichierLu_S <<endl;
	professeur.setNom(fichierLu_S);
	LECTURE_S;
	cout << "\tPrenom : " << fichierLu_S <<endl;
	professeur.setPrenom(fichierLu_S);
	LECTURE_S;
	cout << "\tDepartement : " << fichierLu_S << endl;
	professeur.setDepartement(fichierLu_S);
	LECTURE_S;
	cout << "\tBureau : " << fichierLu_S << endl << endl;
	professeur.setBureau(fichierLu_S);
	return;
}

void lectureEtudiant(IN ifstream &fichier, OUT Etudiant& etudiant)
{
	string fichierLu_S;
	cout << "Ajout d'un nouvel etudiant : " <<endl;
	LECTURE_S;
	cout << "\tNom : " << fichierLu_S << endl;
	etudiant.setNom(fichierLu_S);
	LECTURE_S;
	cout << "\tPrenom : " << fichierLu_S <<endl;
	etudiant.setPrenom(fichierLu_S);
	LECTURE_S;
	cout << "\tDepartement : " << fichierLu_S <<endl;
	etudiant.setDepartement(fichierLu_S);
	LECTURE_S;
	cout << "\tNiveau : " << fichierLu_S <<endl << endl;
	etudiant.setNiveau(fichierLu_S);
	return;
}


/*
new entreprise
lectureEntreprise(fichier, entreprise));
individus.push_back(entreprise)
entreprise = 0
*/