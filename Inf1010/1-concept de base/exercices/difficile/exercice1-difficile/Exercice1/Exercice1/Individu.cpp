#include "Individu.h"
#include <iostream>
#include <string>

using namespace std;

Individu::Individu()
{
	nom_ = "";
	age_ = 0;
}

Individu::Individu(string nom, int age)
{
	nom_ = nom;
	age_ = age;
}

string Individu::getNom() const
{
	return nom_;
}

int Individu::getAge() const
{
	return age_;
}

void Individu::setNom(string nom)
{
	nom_ = nom;
}

void Individu::setAge(int age)
{
	age_ = age;
}

bool Individu::memeAge(Individu individu)
{
	if (age_ == individu.age_)
		return true;
	else
		return false;
}