/**********************************************************************
/* Fichier: Triangle.cpp
/* Date: 02 février 2013
/* Auteur: Marie-France et Odric
/* Description: Le code décrivant la fonctionnalité du Triangle.h
************************************************************************/
#include <vector>
#include <iostream>
#include <string>

using namespace std;

#include "Triangle.h"

/***************************************************************************/
/* Nom: Constructeur par défaut                                            */
/* Description: Constructeur appelé lorsqu'aucun paramètre n'est entré     */
/* Parametres: Aucun    	    									       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un triangle à une taille de 1      */
/*			et initialise ses valeurs à 0.   	                		   */
/*                     													   */
/***************************************************************************/

Triangle::Triangle()
{
    triangle_.resize(1);
    for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j <=i; j++)
	 		 triangle_[i][j] = 0;
    }
}

/***************************************************************************/
/* Nom: Constructeur par paramètre à un paramètre                          */
/* Description: Constructeur appelé lorsqu'un seul paramètre est entré,    */
/*				soit la taille                                             */
/* Parametres: taille (IN) : taille du triangle à créer  			       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un triangle à la taille demandée   */
/*			et initialise ses valeurs à 0.   	                		   */
/*                     													   */
/***************************************************************************/

Triangle::Triangle(int taille)
{
    triangle_.resize(taille);
    for (int i = 0; i < triangle_.size(); i++)
	 	 triangle_[i].resize(i+1);
    for (int i = 0; i < triangle_.size(); i++)
    {
   		 for (int j = 0; j < triangle_[i].size(); j++)
	 		 triangle_[i][j] = 0;
    }
}

/***************************************************************************/
/* Nom: Constructeur par paramètre à deux paramètres                       */
/* Description: Constructeur appelé lorsqu'un seul paramètre est entré,    */
/*				soit la taille                                             */
/* Parametres: taille (IN) : taille du triangle à créer                    */
/*                donnees (IN/OUT) : valeurs contenues dans le triangle      */
/* Valeur de retour: Aucune                                                */
/* Remarque: Ce constructeur initialise un triangle à la taille demandée   */
/*			et initialise ses valeurs à 0.   	                		   */
/*                     													   */
/***************************************************************************/
Triangle::Triangle( int taille, int *donnees )
{
    int k = 0;
    triangle_.resize(taille);
    for (int i = 0; i < triangle_.size(); i++)
   		 triangle_[i].resize(i+1);
    for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j < triangle_[i].size(); j++)
		 {
	 		 triangle_[i][j] = donnees[k];
			 k++;
   		 }
    }
}

/***************************************************************************/
/* Nom: Constructeur par copie                                             */
/* Description: Constructeur ayant comme paramètre un triangle à copier    */
/* Parametres: t (OUT) : Un objet de type Triangle   				       */
/* Valeur de retour: Aucune                                                */
/* Remarque: Comme les vecteurs sont copiés en deep copy par défaut,       */
/*           chaque valeurs sont recopier même si on ne les copie pas      */
/*           une par une                                                   */
/*                     													   */
/***************************************************************************/

Triangle::Triangle( Triangle& t )
{
	
	triangle_ = t.triangle_;
}

/***************************************************************************/
/* Nom: Desctructeur                                                       */
/* Description: Afin de liberer de la mémoire, le destructeur peut         */
/*              être appeler afin de détruire un objet de type Triangle    */
/* Parametres: Aucun    							     			       */
/* Valeur de retour: Aucune                                                */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

Triangle::~Triangle()
{

}

int Triangle::getTaille() const
{
    return triangle_.size();
}

/***************************************************************************/
/* Nom: Poids                                                              */
/* Description: Cette fonction effectue le calcul du poid d'un triangle    */
/* Parametres: Aucun    											       */
/* Valeur de retour: somme[] : une  valeur de type double contenue         */
/*                   à la fin d'un vecteur                                 */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

double Triangle::poids()
{
    vector<double> somme(triangle_.size()+1);
    for (int i = 0; i < somme.size(); i++)
    {
   		somme[i] = 0;
    }
    for (int i = 0; i < triangle_.size(); i)
    {
	   	 for (int j = 0; j <= i; j++)
		 {
			somme[i] += triangle_[i][j];
	 	 }
	 	 somme[i] /= ++i;
    }
    for (int i = 0; i < triangle_.size(); i++)
	{
	 	 somme[triangle_.size()] += somme[i];
	}
    return somme[triangle_.size()];
}

/***************************************************************************/
/* Nom: operator[]                                                         */
/* Description: Comme les vecteurs n'acceptent pas deux dimensions,        */
/*              il faut sucharger l'opérateur [] afin d'avoir la valeur    */
/*              contenue dans le vecteur contenu dans le vecteur de vecteur*/
/* Parametres: i (IN) : une valeur entière    						       */
/* Valeur de retour: vector<int>& : L'adresse du vecteur de int contenue   */ 
/*                   dans le vecteur de vecteur                            */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

vector<int>& Triangle::operator[]( int i )
{
    return triangle_[i];
}

/***************************************************************************/
/* Nom: operator=                                                          */
/* Description: Surcharge de l'opérateur égal afin que l'adresse d'un      */
/*              triangle soit = à celle du triangle en paramètre           */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle&                                             */
/* Remarque: Agit un peu comme le constructeur par copie   			       */
/*                     													   */
/***************************************************************************/

Triangle& Triangle::operator=( const Triangle& t )
{
   	 triangle_ = t.triangle_;
   	 return *this;
}

/***************************************************************************/
/* Nom: operator+                                                          */
/* Description: Surcharge de l'opérateur plus afin de pouvoir additionner  */
/*              les valeurs de deux triangles ensembles                    */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque:                                            			       */
/*                     													   */
/***************************************************************************/
Triangle Triangle::operator+( const Triangle & t )
{
	int taille = 0;
	for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j < triangle_[i].size(); j++)
   		 {
   			 taille++;
		 }
    }
	int* somme = new int[taille];
	int position = 0;
    for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j <= i; j++)
		 {
   			 somme[position] = triangle_[i][j] + t.triangle_[i][j];
			 position++;
		 }
    }
	Triangle resultat(triangle_.size(), somme);
    return resultat;
}

/***************************************************************************/
/* Nom: operator*                                                          */
/* Description: Surcharge de l'opérateur * afin de pouvoir multiplier      */
/*              les valeurs de deux triangles ensembles                    */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque:                                            			       */
/*                     													   */
/***************************************************************************/


Triangle Triangle::operator*( const Triangle& t )
{
	int taille = 0;
	for (int i = 0; i < triangle_.size(); i++)
    {
	 	 for (int j = 0; j < triangle_[i].size(); j++)
		 {
	 		 taille++;
	 	 }
    }
	int* produit = new int[taille];
	int position = 0;
    for (int i = 0; i < triangle_.size(); i++)
    {
	 	 for (int j = 0; j <= i; j++)
	 	 {
	  		 produit[position] = triangle_[i][j] * t.triangle_[i][j];
			 position++;
	 	 }
    }
	Triangle resultat(triangle_.size(), produit);
    return resultat;
}

/***************************************************************************/
/* Nom: operator*                                                          */
/* Description: Surcharge de l'opérateur * afin de pouvoir multiplier      */
/*              les valeurs d'un triangles avec une valeur entière         */
/* Parametres: a (OUT) : Une valeur entière       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque:                                            			       */
/*                     													   */
/***************************************************************************/

Triangle Triangle::operator*( const int& a )
{
	int taille = 0;
	for (int i = 0; i < triangle_.size(); i++)
    {
		 for (int j = 0; j < triangle_[i].size(); j++)
	  	 {
	 		 taille++;
	 	 }
    }
	int* produit = new int[taille];
	int position = 0;
    for (int i = 0; i < triangle_.size(); i++)
   {
	 	 for (int j = 0; j <= i; j++)
	  	 {
	 		 produit[position] = triangle_[i][j] * a;
			 position++;
	 	 }
    }
	Triangle resultat(triangle_.size(), produit);
    return resultat;
}

/***************************************************************************/
/* Nom: operator+=                                                         */
/* Description: Surcharge de l'opérateur += afin de pouvoir additionner    */
/*              les valeurs de deux triangles ensembles et stocker         */
/*              cette réponse dans un de ceux-ci                           */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque: Ici l'utilisation du pointeur this est très utile, puisqu'on
/*           manipule directement la valeur de retour                      */
/***************************************************************************/

Triangle& Triangle::operator+=( Triangle& t )
{
    *this = t + *this;
    return *this;
}

/***************************************************************************/
/* Nom: operator*=                                                         */
/* Description: Surcharge de l'opérateur *= afin de pouvoir multiplier     */
/*              les valeurs de deux triangles ensembles et stocker         */
/*              cette réponse dans un de ceux-ci                           */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque: Ici l'utilisation du pointeur this est très utile, puisqu'on
/*           manipule directement la valeur de retour                      */
/***************************************************************************/

Triangle& Triangle::operator*=( Triangle& t )
{
    *this = t * *this;
    return *this;
}

/***************************************************************************/
/* Nom: operator*=                                                         */
/* Description: Surcharge de l'opérateur *= afin de pouvoir multiplier     */
/*              les valeurs d'un triangle avec une valeur entière et       */
/*               stocker cette réponse dans le triangle                    */
/* Parametres: t (OUT) : Triangle constant       					       */
/* Valeur de retour: Triangle                                              */
/* Remarque: Ici l'utilisation du pointeur this est très utile, puisqu'on  */
/*           manipule directement la valeur de retour                      */
/*                     													   */
/***************************************************************************/

Triangle& Triangle::operator*=( int a )
{
    *this = *this * a;
    return *this;
}

/***************************************************************************/
/* Nom: operator<                                                          */
/* Description: Surcharge de l'opérateur < qui vérifie si le poid du       */
/*est plus petit que celui du triangle passé en paramètre                  */
/* Parametres: t (OUT) : Triangle constant     						       */
/* Valeur de retour: bool                                                  */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

bool Triangle::operator<( Triangle& t )
{
    if (poids() < (t.poids()))
		 return true;
    else
		 return false;
}

/***************************************************************************/
/* Nom: operator>                                                          */
/* Description: Surcharge de l'opérateur > qui vérifie si le poid du       */
/* est plus grand que celui du triangle passé en paramètre                 */
/* Parametres: t (OUT) : Triangle constant     						       */
/* Valeur de retour: bool                                                  */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

bool Triangle::operator>( Triangle& t )
{
    if (poids() > (t.poids()))
	 	 return true;
    else
		 return false;
}

/***************************************************************************/
/* Nom: operator==                                                         */
/* Description: Surcharge de l'opérateur == qui vérifie si le poid du      */
/*est égal à celui du triangle passé en paramètre                          */
/* Parametres: t (OUT) : Triangle constant     						       */
/* Valeur de retour: bool                                                  */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

bool Triangle::operator==( Triangle& t )
{
    if (poids() == (t.poids()))
	  	 return true;
    else
	 	 return false;
}

/***************************************************************************/
/* Nom: operator<<                                                         */
/* Description: Puisqu'il n'existe pas de fonction pour afficher un objet  */
/*              triangle, la surcharge de l'opérateur << était nécessaire  */
/*              afin de réaliser cette action                              */
/* Parametres: ostr (OUT) : Une référence vers la librairie iostream       */
/*              t (OUT) : Un objet de type Triangle                        */
/* Valeur de retour: std::ostream&                                         */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

std::ostream& operator<<( std::ostream& ostr, Triangle& t )
{
    string flux = "";
    
    for (int i = 0; i < t.getTaille(); i++)
    {
		 for (int j = 0; j <= i; j++)
		 {
	 		 flux += (to_string(t.triangle_[i][j]) + " ");
	 	 }
   	flux += "\n";
    }
    return ostr << flux << endl;
}

/***************************************************************************/
/* Nom: operator>>                                                         */
/* Description: Puisqu'il n'existe pas de fonction cin pour un objet       */
/*              triangle, la surcharge de l'opérateur << était nécessaire  */
/*              afin de réaliser cette action                              */
/* Parametres: is (OUT) : Une référence vers la librairie iostream         */
/*              t (OUT) : Un objet de type Triangle                        */
/* Valeur de retour: std::istream&                                         */
/* Remarque:    														   */
/*                     													   */
/***************************************************************************/

std::istream& operator>>( std::istream& is, Triangle& t )
{
    for (int i = 0; i < t.getTaille(); i++)
    {
   		 for (int j = 0; j <= i; j++)
   		 {
			 int a;
			 is >> a;
			 t.triangle_[i][j] = a;
	 	 }
    }
    return is;
}