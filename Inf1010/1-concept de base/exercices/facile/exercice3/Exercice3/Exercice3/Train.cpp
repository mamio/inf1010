#include "Train.h"
#include <iostream>

using namespace std;

Train::Train()
{
	vitesse_ = 0;
}

Train::~Train()
{

}

void Train::avancer(const double vitesse)
{
	vitesse_ = vitesse;
}

void Train::arreter()
{
	vitesse_ = 0;
}

void Train::prendreTrain(Personne* personne)
{
	nbPersonnesABord_++;
}