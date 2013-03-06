/****************************************************************************
 * Fichier: main.cpp
 * Auteur: Guillaume-Alexandre Bilodeau
 * Date: 17 février 2010
 * Description: Fonction principale
 ****************************************************************************/

#include "Entreprise.h"
#include "Hotel.h"
#include <vector>
#include <typeinfo>

int main()
{

	Hotel h( "PolyH", 20, 1000000.0, 60 );
	Entreprise ee( "PolyE", 20, 1000000.0 ); //Mettre en commentaire pour V)
	h.afficheInfo();

	vector <Entreprise> vec; //Mettre en commentaire pour V)
	vec.push_back( h ); //Mettre en commentaire pour V)
	vec[0].afficheInfo(); //Mettre en commentaire pour V)

	Hotel *h2 = new Hotel( "PolyH", 20, 1000000.0, 60 );
	Entreprise *ee2 = new Entreprise( "PolyE", 20, 1000000.0 );

	vector <Entreprise*> vec2;
	
	cout << endl;
	vec2.push_back( h2 );
	vec2[0]->afficheInfo();
	cout << endl;
	vec2[0]->incrEmploye();
	vec2.push_back( ee2 );
	vec2[0]->afficheType();
	vec2[1]->afficheType();

	if( typeid( *vec2[0] ) == typeid( Entreprise ) )
		cout << "..................................................Entreprise" << endl;
	else
		cout << "..................................................Hotel" << endl;

	if( typeid( *vec2[1] ) == typeid( Entreprise ) )
		cout << "..................................................Entreprise" << endl;
	else
		cout << "..................................................Hotel" << endl;

	delete h2;
	delete ee2;

    cout << endl;
	Entreprise *entr;
	entr = new Hotel( "PolyS", 20, 1000000.0, 60 );
	entr->afficheInfo();
	delete entr;

    cout << " oui " << endl;
}