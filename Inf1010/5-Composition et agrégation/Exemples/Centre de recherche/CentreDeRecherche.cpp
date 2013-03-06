/****************************************************************************
 * Fichier: CentreDeRecherche.cpp
 * Auteur: William Bussiere
 * Date: 19 mai 2011
 * Description: Implementation de la classe CentreDeRecherche
 ****************************************************************************/

#include "CentreDeRecherche.h"


/****************************************************************************
 * Fonction:	CentreDeRecherche::CentreDeRecherche
 * Description: Constructeur par defaut
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
CentreDeRecherche::CentreDeRecherche()
	: directrice_("Rita Fontaine")
{
	// Ce laboratoire est initialise deux fois
	// Une premiere par le constructeur par defaut vu que c'est un tableau
	// Une deuxieme fois par cette assignation

	cout << "Construction d'un nouveau centre de recherche : " << endl;

	labos_[0].setType("Bureau de la direction");
	labos_[0].setNumeroDePorte("M-612");

	chercheurs_[0] = &directrice_;
	directrice_.setPoste("Directrice");


	// On s'assure que les pointeurs vers des employes pointent vers 0
	for(unsigned int i=1; i < 5; i++)
		chercheurs_[i] = 0;
}


/****************************************************************************
 * Fonction:	CentreDeRecherche::~CentreDeRecherche
 * Description: Destructeur
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
CentreDeRecherche::~CentreDeRecherche()
{
	// Ici, la directrice sera detruite puisqu'elle compose le centre,
	// mais les employes seront seulement sans emploi

	cout << "Autodestruction du Centre de recherche : " << endl << endl;

	for(unsigned int i=0; i < 5; i++)
		if(chercheurs_[i] != 0)
			chercheurs_[i]->setPoste("Sans emploi");
	cout << endl;
}


/****************************************************************************
 * Fonction:	CentreDeRecherche::definirLaboratoire
 * Description: Donne un sujet et un numero de porte a un local
 * Paramètres:	- (unsigned short) no : place dans le tableau (IN)
 *				- (string) sujet : sujet de recherche (IN)
 *				- (string) adresse : adresse du local (IN)  
 * Retour:		aucun
 ****************************************************************************/
void CentreDeRecherche::definirLaboratoire(unsigned short no, const string &sujet, const string &adresse)
{
	labos_[no].setType(sujet);
	labos_[no].setNumeroDePorte(adresse);

	if ( chercheurs_[no] != 0 )
		chercheurs_[no]->setPoste( "Attitre a la " + labos_[no].getType() );
}


/****************************************************************************
 * Fonction:	CentreDeRecherche::ajouterChercheur
 * Description: Assigne un chercheur a un local
 * Paramètres:	- (Employe*) chercheur : employe(IN)
 *				- (unsigned short) no : place dans le tableau (IN)
 * Retour:		aucun
 ****************************************************************************/
void CentreDeRecherche::ajouterChercheur(Employe* chercheur, unsigned short no)
{
	chercheurs_[no] = chercheur;
	chercheurs_[no]->setPoste( "Attitre a la " + labos_[no].getType() );
}


/****************************************************************************
 * Fonction:	CentreDeRecherche::afficherLocaux
 * Description: Affiche le sujet de recherche des locaux ainsi que leur adresse
 * Paramètres:	aucun
 * Retour:		aucun
 ****************************************************************************/
void CentreDeRecherche::afficher() const
{
	cout << endl;

	cout << "Le centre de recherche possede les locaux suivants : " << endl;
	for(unsigned int i=0; i < 5; i++)
		cout << labos_[i].getNumeroDePorte() << " : " << labos_[i].getType() << endl;
	cout << endl;

	cout << "Et le personnel suivant : " << endl;
	for(unsigned int i=0; i < 5; i++)
		if(chercheurs_[i] != 0)
			cout << chercheurs_[i]->getNom() << " : " << chercheurs_[i]->getPoste()<< endl;
	cout << endl << endl;
}


