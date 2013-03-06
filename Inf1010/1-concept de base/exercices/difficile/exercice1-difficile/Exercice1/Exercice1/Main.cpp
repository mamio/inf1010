#include <iostream>
#include <string>
#include "Individu.h"

using namespace std;

int main()
{
	Individu unePersonne("Marie", 19);
	Individu uneAutrePersonne("Guillaume", 19);

	unePersonne.memeAge(uneAutrePersonne);
}