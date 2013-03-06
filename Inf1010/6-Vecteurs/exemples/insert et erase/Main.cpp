
#include <vector>
#include <iostream>
using namespace std;


void inserer(vector< int > &v, unsigned int pos, int item)
{
	unsigned int last = v.size() - 1;
	v.push_back(v[last]);
	for (unsigned int i = last; i > pos; --i)
		v[i] = v[i-1];
	v[pos] = item;
}


void supprimer(vector< int > &v, int pos)
{
	unsigned int max = v.size() - 1;
	for (unsigned int i = pos; i < max; ++i) {
		v[i] = v[i+1];
	}

	v.pop_back();
}


int main()
{
	vector<int> tab;

	for (int i = 0; i < 10; ++i) 
		tab.push_back(i);

	cout << "Taille de tab = " << tab.size() << endl;
	cout << "Capacite de tab = " << tab.capacity() << endl << endl;


	// Retirer le 3ème élément (indice = 2)
	supprimer(tab,2);

	// Ajouter la valeur 10 à la position 5 (indice = 4)
	inserer(tab,4,10);

	for (int j = 0; j < tab.size(); ++j) 
	{
		cout << tab[j] << ' ';
	}
	cout << endl;

	return 0;
}
