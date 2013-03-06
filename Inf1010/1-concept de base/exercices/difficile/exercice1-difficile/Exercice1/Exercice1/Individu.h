#ifndef _INDIVIDU_H_
#define _INDIVIDU_H_

#include <string>
#include <iostream>

using namespace std;

class Individu
{
public:
	Individu();
	Individu(string nom, int age);

	string getNom() const;
	int getAge() const;

	void setNom(string nom);
	void setAge(int age);

	bool memeAge(Individu individu);

private:

	string nom_;
	int age_;
};
#endif