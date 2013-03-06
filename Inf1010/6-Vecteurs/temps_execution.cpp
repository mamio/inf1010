#include "test.h"
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
const int nombreFois = 100000;
int main()
{
	vector <Test> liste;
	Test essai;
	clock_t debut, fin ;
    debut = clock();
	for ( int i = 0; i < nombreFois; i++)
		liste.push_back(essai);
	fin = clock();
	 cout << " temps "<< (fin - debut); 
     cout <<endl;

	 Test  * pointeur_essai;
	 vector <Test*> liste2;
	 debut = clock();

	 for ( int i = 0; i < nombreFois; i++)
	 {	  pointeur_essai = new Test;
		 liste2.push_back(pointeur_essai);
	 }
	fin = clock();
	cout << " temps "<< (fin - debut);
	cout <<endl;

	 

	return 0;
}