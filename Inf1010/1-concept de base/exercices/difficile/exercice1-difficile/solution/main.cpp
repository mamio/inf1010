#include "individu.h"
#include <iostream>


void main() 
{
	Individu poPaul("Po Paul", 52);
	Individu toi("toi",20);

	cout << poPaul.memeAge(toi) << endl;
}