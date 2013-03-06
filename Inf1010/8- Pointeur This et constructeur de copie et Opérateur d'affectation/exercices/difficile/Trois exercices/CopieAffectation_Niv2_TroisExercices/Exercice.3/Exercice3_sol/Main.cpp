#include "Livre.h"

int main()
{
	Livre livre(4);
	Livre livre2(livre);

	livre2 = livre;
}
